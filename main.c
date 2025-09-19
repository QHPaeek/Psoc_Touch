/*****************************************************************************
* File Name: main.c
*
* Version: 1.10
*
* Description: This code example demonstrates how to implement a low-power 
*              CapSense button with an average current consumption of 6uA
*              per button. 

* Related Document: CE210291.pdf 
*
* Hardware Dependency: See code example document CE210291
*
******************************************************************************
* Copyright (2016), Cypress Semiconductor Corporation.
******************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*****************************************************************************/

/*******************************************************************************
*   Included Headers
*******************************************************************************/
#include "project.h"

/*****************************************************************************
* MACRO Definitions
*****************************************************************************/   

/* Refresh interval in milliseconds for fast scan mode */
#define LOOP_TIME_FASTSCANMODE          (30u)

/* Refresh interval in milliseconds for slow scan mode */
#define LOOP_TIME_SLOWSCANMODE          (200u)

#define MILLI_SEC_TO_MICRO_SEC          (1000u)

#if (!CY_IP_SRSSV2)
    /* ILO frequency for PSoC 4 S-Series device */
    #define ILO_CLOCK_FACTOR            (40u)
#else
    /* ILO frequency for PSoC 4 device */
    #define ILO_CLOCK_FACTOR            (32u)
#endif

/* Refresh rate control parameters */    
#define WDT_TIMEOUT_FAST_SCAN           (ILO_CLOCK_FACTOR * LOOP_TIME_FASTSCANMODE)   
#define WDT_TIMEOUT_SLOW_SCAN           (ILO_CLOCK_FACTOR * LOOP_TIME_SLOWSCANMODE)

/* Macro to enable WDT */
#define ENABLE_WDT                      (0x01u)

/* Macro to disable/enable tuner to update sensor parameters - 0: disable 1: enable */
#define TUNER_UPDATE_ENABLE             (0u)

/* This timeout is for changing the refresh interval from fast to slow rate
*  The timeout value is WDT_TIMEOUT_FAST_SCAN * SCANMODE_TIMEOUT_VALUE
*/
#define SCANMODE_TIMEOUT_VALUE          (150u)  

/* Reset value of softCounter */    
#define RESET                           (0u)

/* Boolean constants */
#define TRUE                            (1u)
#define FALSE                           (0u)

/* Finite state machine states for device operating states */
typedef enum
{
    SENSOR_SCAN = 0x01u, /* Sensor is scanned in this state */
    WAIT_FOR_SCAN_COMPLETE = 0x02u, /* CPU is put to sleep in this state */
    PROCESS_DATA = 0x03u, /* Sensor data is processed */
    SLEEP = 0x04u /* Device is put to deep sleep */
} DEVICE_STATE;

typedef union{
    float raw_data_fl[2];
    uint8_t raw_data_u8[8];
}vofa;

vofa vofa1;
uint16_t baseline = 0;

typedef union{
	uint8_t data[70];
	struct{
		uint8_t syn;
		uint16_t channel_raw[34];
        uint8_t checksum;
	};
}packet_capsense_t;

packet_capsense_t Touch;

/* Firmware implements two refresh rates for reducing average power consumption */
typedef enum
{
    SLOW_SCAN_MODE = 0u,
    FAST_SCAN_MODE = 1u
} SCAN_MODE;

/* Variable to store interrupt state */
uint32 interruptState = 0u;

/* Compensated Watchdog match value in fast scan mode */
uint32 wdtMatchValFastMode = 0u;

/* Compensated Watchdog match value in slow scan mode */
uint32 wdtMatchValSlowMode = 0u;

/* Variable to check the WDT interrupt state */
volatile uint8 wdtInterruptOccured = FALSE;

/* Contains watchdog match value to generate period interrupt */
volatile uint32 watchdogMatchValue = WDT_TIMEOUT_FAST_SCAN;

/* API to prepare the device for deep sleep */
void EnterDeepSleepLowPowerMode(void);

/* API to configure the WDT timer for controlling scan intervals */
void WDT_Start(void);

/* API to get WDT matchvalue to generate precise scan intervals */
void CalibrateWdtMatchValue(void);

uint8_t resolution_zoom_map[34];

/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  main() performs the following functions:
*  1. Initializes the CapSense and SCB blocks.
*  2. Scans button sensor at either fast refresh rate or slow refresh rate.
*
*******************************************************************************/
int main()
{   
    /* Variable to hold the current device state 
    *  State machine starts with sensor scan state after power-up
    */
    DEVICE_STATE currentState = SENSOR_SCAN; 
    
    /* This variable is used to indicate the current power mode */
    SCAN_MODE deviceScanMode = FAST_SCAN_MODE;
    
    /* This variable is used to implement a software counter. If the value 
    *  of this counter is greater than SCANMODE_TIMEOUT_VALUE, it indicates that the button sensor 
    *  was inactive for more than 3s. 
    */
    uint16 softCounter = RESET;
    
    /* Enable global interrupts for CapSense operation */
    CyGlobalIntEnable;
    UART_1_Start();

    /* Start CapSense block - Initializes CapSense data structure and 
     * performs first scan of all widgets/sensors to set up sensors
     * baselines 
     */
    CapSense_Start();

    /* Configure button sensor parameters and connect it to AMUXBUS */
    
   // CapSense_CSDSetupWidgetExt(CapSense_BUTTON2_WDGT_ID, CapSense_BUTTON2_SNS0_ID);
   
    /* Watchdog is used to control the loop time in this project and watchdog
    *  is set to generate interrupt at every LOOP_TIME_FASTSCANMODE in fast scan mode  
    *  and at LOOP_TIME_SLOWSCANMODE in slow scan mode
    */
    WDT_Start();
    resolution_zoom_map[0] = 16 - CapSense_BUTTON0_RESOLUTION_VALUE;
    resolution_zoom_map[1] = 16 - CapSense_BUTTON1_RESOLUTION_VALUE;
    resolution_zoom_map[2] = 16 - CapSense_BUTTON2_RESOLUTION_VALUE;
    resolution_zoom_map[3] = 16 - CapSense_BUTTON3_RESOLUTION_VALUE;
    resolution_zoom_map[4] = 16 - CapSense_BUTTON4_RESOLUTION_VALUE;
    resolution_zoom_map[5] = 16 - CapSense_BUTTON5_RESOLUTION_VALUE;
    resolution_zoom_map[6] = 16 - CapSense_BUTTON6_RESOLUTION_VALUE;
    resolution_zoom_map[7] = 16 - CapSense_BUTTON7_RESOLUTION_VALUE;
    resolution_zoom_map[8] = 16 - CapSense_BUTTON8_RESOLUTION_VALUE;
    resolution_zoom_map[9] = 16 - CapSense_BUTTON9_RESOLUTION_VALUE;
    resolution_zoom_map[10] = 16 - CapSense_BUTTON10_RESOLUTION_VALUE;
    resolution_zoom_map[11] = 16 - CapSense_BUTTON11_RESOLUTION_VALUE;
    resolution_zoom_map[12] = 16 - CapSense_BUTTON12_RESOLUTION_VALUE;
    resolution_zoom_map[13] = 16 - CapSense_BUTTON13_RESOLUTION_VALUE;
    resolution_zoom_map[14] = 16 - CapSense_BUTTON14_RESOLUTION_VALUE;
    resolution_zoom_map[15] = 16 - CapSense_BUTTON15_RESOLUTION_VALUE;
    resolution_zoom_map[16] = 16 - CapSense_BUTTON16_RESOLUTION_VALUE;
    resolution_zoom_map[17] = 16 - CapSense_BUTTON17_RESOLUTION_VALUE;
    resolution_zoom_map[18] = 16 - CapSense_BUTTON18_RESOLUTION_VALUE;
    resolution_zoom_map[19] = 16 - CapSense_BUTTON19_RESOLUTION_VALUE;
    resolution_zoom_map[20] = 16 - CapSense_BUTTON20_RESOLUTION_VALUE;
    resolution_zoom_map[21] = 16 - CapSense_BUTTON21_RESOLUTION_VALUE;
    resolution_zoom_map[22] = 16 - CapSense_BUTTON22_RESOLUTION_VALUE;
    resolution_zoom_map[23] = 16 - CapSense_BUTTON23_RESOLUTION_VALUE;
    resolution_zoom_map[24] = 16 - CapSense_BUTTON24_RESOLUTION_VALUE;
    resolution_zoom_map[25] = 16 - CapSense_BUTTON25_RESOLUTION_VALUE;
    resolution_zoom_map[26] = 16 - CapSense_BUTTON26_RESOLUTION_VALUE;
    resolution_zoom_map[27] = 16 - CapSense_BUTTON27_RESOLUTION_VALUE;
    resolution_zoom_map[28] = 16 - CapSense_BUTTON28_RESOLUTION_VALUE;
    resolution_zoom_map[29] = 16 - CapSense_BUTTON29_RESOLUTION_VALUE;
    resolution_zoom_map[30] = 16 - CapSense_BUTTON30_RESOLUTION_VALUE;
    resolution_zoom_map[31] = 16 - CapSense_BUTTON31_RESOLUTION_VALUE;
    resolution_zoom_map[32] = 16 - CapSense_BUTTON32_RESOLUTION_VALUE;
    resolution_zoom_map[33] = 16 - CapSense_BUTTON33_RESOLUTION_VALUE;
    for(;;)
    {
        /* Switch between sensor-scan -> wait-for-scan -> process -> sleep states */
        switch(currentState)
        {
            case SENSOR_SCAN:
                /* Initiate new scan only if the CapSense hardware is idle */
                if(CapSense_NOT_BUSY == CapSense_IsBusy())
                {
                    /* Update CapSense parameters set via CapSense tuner before the 
                    *  beginning of CapSense scan. This check if required if we are using 
                    *  CapSense Extension (Ext) APIs in the project.
                    */
                    #if (TUNER_UPDATE_ENABLE)
                        if(CapSense_STATUS_RESTART_DONE == CapSense_RunTuner())
                        {
                            /* Set up sensor */
                            CapSense_CSDSetupWidgetExt(CapSense_BUTTON0_WDGT_ID, CapSense_BUTTON0_SNS0_ID);
                           
                           
                        }
                    #endif
                    
                    /* Scan widget configured by CSDSetupWidgetExt API */
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON0_WDGT_ID, CapSense_BUTTON0_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON1_WDGT_ID, CapSense_BUTTON1_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON2_WDGT_ID, CapSense_BUTTON2_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON3_WDGT_ID, CapSense_BUTTON3_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON4_WDGT_ID, CapSense_BUTTON4_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON5_WDGT_ID, CapSense_BUTTON5_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON6_WDGT_ID, CapSense_BUTTON6_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON7_WDGT_ID, CapSense_BUTTON7_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON8_WDGT_ID, CapSense_BUTTON8_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON9_WDGT_ID, CapSense_BUTTON9_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON10_WDGT_ID, CapSense_BUTTON10_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON11_WDGT_ID, CapSense_BUTTON11_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON12_WDGT_ID, CapSense_BUTTON12_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON13_WDGT_ID, CapSense_BUTTON13_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON14_WDGT_ID, CapSense_BUTTON14_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON15_WDGT_ID, CapSense_BUTTON15_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON16_WDGT_ID, CapSense_BUTTON16_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON17_WDGT_ID, CapSense_BUTTON17_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON18_WDGT_ID, CapSense_BUTTON18_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON19_WDGT_ID, CapSense_BUTTON19_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON20_WDGT_ID, CapSense_BUTTON20_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON21_WDGT_ID, CapSense_BUTTON21_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON22_WDGT_ID, CapSense_BUTTON22_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON23_WDGT_ID, CapSense_BUTTON23_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON24_WDGT_ID, CapSense_BUTTON24_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON25_WDGT_ID, CapSense_BUTTON25_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON26_WDGT_ID, CapSense_BUTTON26_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON27_WDGT_ID, CapSense_BUTTON27_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON28_WDGT_ID, CapSense_BUTTON28_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON29_WDGT_ID, CapSense_BUTTON29_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON30_WDGT_ID, CapSense_BUTTON30_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON31_WDGT_ID, CapSense_BUTTON31_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON32_WDGT_ID, CapSense_BUTTON31_SNS0_ID);
                    CapSense_CSDScanExt();
                    while(CapSense_IsBusy());
                    CapSense_CSDSetupWidgetExt(CapSense_BUTTON33_WDGT_ID, CapSense_BUTTON31_SNS0_ID);
                    CapSense_CSDScanExt();

                    
                    /* Put CPU to sleep while sensor scanning is in progress */
                    currentState = WAIT_FOR_SCAN_COMPLETE;       
                }
                break;

            case WAIT_FOR_SCAN_COMPLETE:
                /* Device is in CPU Sleep until CapSense scanning is complete or
                *  device is woken-up by either CapSense interrupt or I2C interrupt 
                */
                /* Disable interrupts, so that ISR is not serviced while
                *  checking for CapSense scan status.
                */
                interruptState = CyEnterCriticalSection();
                
                /* Check if CapSense scanning is complete */
                if(CapSense_NOT_BUSY != CapSense_IsBusy())
                {
                    /* If CapSense scanning is in progress, put CPU to sleep */
                    CySysPmSleep();
                }
                /* If CapSense scanning is complete, process the CapSense data */
                else
                {
                    currentState = PROCESS_DATA;
                }
                /* Enable interrupts for servicing ISR */
                CyExitCriticalSection(interruptState);
                break;
            
            case PROCESS_DATA:
                
                /* Set next state to SLEEP */
                currentState = SLEEP;
                
                /* process button widget */
                //CapSense_ProcessWidget();
            CapSense_ProcessWidget(CapSense_BUTTON0_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON1_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON2_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON3_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON4_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON5_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON6_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON7_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON8_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON9_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON10_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON11_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON12_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON13_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON14_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON15_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON16_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON17_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON18_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON19_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON20_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON21_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON22_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON23_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON24_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON25_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON26_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON27_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON28_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON29_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON30_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON31_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON32_WDGT_ID);
            CapSense_ProcessWidget(CapSense_BUTTON33_WDGT_ID);
            Touch.channel_raw[0] = CapSense_BUTTON0_SNS0_RAW0_VALUE;
            Touch.channel_raw[1] = CapSense_BUTTON1_SNS0_RAW0_VALUE;
            Touch.channel_raw[2] = CapSense_BUTTON2_SNS0_RAW0_VALUE;
            Touch.channel_raw[3] = CapSense_BUTTON3_SNS0_RAW0_VALUE;
            Touch.channel_raw[4] = CapSense_BUTTON4_SNS0_RAW0_VALUE;
            Touch.channel_raw[5] = CapSense_BUTTON5_SNS0_RAW0_VALUE;
            Touch.channel_raw[6] = CapSense_BUTTON6_SNS0_RAW0_VALUE;
            Touch.channel_raw[7] = CapSense_BUTTON7_SNS0_RAW0_VALUE;
            Touch.channel_raw[8] = CapSense_BUTTON8_SNS0_RAW0_VALUE;
            Touch.channel_raw[9] = CapSense_BUTTON9_SNS0_RAW0_VALUE;
            Touch.channel_raw[10] = CapSense_BUTTON10_SNS0_RAW0_VALUE;
            Touch.channel_raw[11] = CapSense_BUTTON11_SNS0_RAW0_VALUE;
            Touch.channel_raw[12] = CapSense_BUTTON12_SNS0_RAW0_VALUE;
            Touch.channel_raw[13] = CapSense_BUTTON13_SNS0_RAW0_VALUE;
            Touch.channel_raw[14] = CapSense_BUTTON14_SNS0_RAW0_VALUE;
            Touch.channel_raw[15] = CapSense_BUTTON15_SNS0_RAW0_VALUE;
            Touch.channel_raw[16] = CapSense_BUTTON16_SNS0_RAW0_VALUE;
            Touch.channel_raw[17] = CapSense_BUTTON17_SNS0_RAW0_VALUE;
            Touch.channel_raw[18] = CapSense_BUTTON18_SNS0_RAW0_VALUE;
            Touch.channel_raw[19] = CapSense_BUTTON19_SNS0_RAW0_VALUE;
            Touch.channel_raw[20] = CapSense_BUTTON20_SNS0_RAW0_VALUE;
            Touch.channel_raw[21] = CapSense_BUTTON21_SNS0_RAW0_VALUE;
            Touch.channel_raw[22] = CapSense_BUTTON22_SNS0_RAW0_VALUE;
            Touch.channel_raw[23] = CapSense_BUTTON23_SNS0_RAW0_VALUE;
            Touch.channel_raw[24] = CapSense_BUTTON24_SNS0_RAW0_VALUE;
            Touch.channel_raw[25] = CapSense_BUTTON25_SNS0_RAW0_VALUE;
            Touch.channel_raw[26] = CapSense_BUTTON26_SNS0_RAW0_VALUE;
            Touch.channel_raw[27] = CapSense_BUTTON27_SNS0_RAW0_VALUE;
            Touch.channel_raw[28] = CapSense_BUTTON28_SNS0_RAW0_VALUE;
            Touch.channel_raw[29] = CapSense_BUTTON29_SNS0_RAW0_VALUE;
            Touch.channel_raw[30] = CapSense_BUTTON30_SNS0_RAW0_VALUE;
            Touch.channel_raw[31] = CapSense_BUTTON31_SNS0_RAW0_VALUE;
            Touch.channel_raw[32] = CapSense_BUTTON32_SNS0_RAW0_VALUE;
            Touch.channel_raw[33] = CapSense_BUTTON33_SNS0_RAW0_VALUE;

            for(uint8_t i = 0;i<34;i++){
                Touch.channel_raw[i] = Touch.channel_raw[i] << resolution_zoom_map[i];
            }
            for(uint8_t i = 0;i<69;i++){
                Touch.checksum += Touch.data[i];
            }
            for(uint8_t i = 0;i<70;i++){
                UART_1_UartPutChar(Touch.data[i]);
            }
  
            
/*
            uint16_t threshold = 1000;
            Touch.channel_raw[0] = Touch.channel_raw[0] << resolution_zoom_map[0];
            if(baseline == 0){
                baseline = Touch.channel_raw[0];
            }else if(baseline + threshold > Touch.channel_raw[0]){
                baseline = 0.7*baseline + 0.3*Touch.channel_raw[0];
            }
            vofa1.raw_data_fl[0] = Touch.channel_raw[0];
            vofa1.raw_data_fl[1] = baseline;
            for(uint8_t i = 0;i<8;i++){
                UART_1_UartPutChar(vofa1.raw_data_u8[i]);
            }
            uint8_t vofa_end[4] = {0,0,0x80,0x7f};
            UART_1_UartPutChar(vofa_end[0]);
            UART_1_UartPutChar(vofa_end[1]);
            UART_1_UartPutChar(vofa_end[2]);
            UART_1_UartPutChar(vofa_end[3]);
*/
            
                if(deviceScanMode == FAST_SCAN_MODE)
                {  
                    /* If button is active, reset software counter */
                    if (CapSense_IsAnyWidgetActive())
                    {
                        /* Reset the software counter if any button is active. */
                        softCounter = RESET;
                    }
                    else
                    {
                        /* Increment the software counter every LOOP_TIME_FASTSCANMODE if button 
                        *  touch is not detected. 
                        */
                        softCounter++;  
                        
                        /* If finger is not on sensor for SCANMODE_TIMEOUT_VALUE, switch off the 
                        *  LEDs and switch mode to slow scan mode to reduce power consumption 
                        */
                        if(softCounter >= SCANMODE_TIMEOUT_VALUE)
                        {   
                            /* Watchdog is configured to generate interrupt at LOOP_TIME_SLOWSCANMODE */
                            watchdogMatchValue = wdtMatchValSlowMode;
                            
                            #if(CY_IP_SRSSV2)
                                /* Configure Match value */
                                CySysWdtWriteMatch(CY_SYS_WDT_COUNTER0, watchdogMatchValue);
                            #endif
        
                            /* Set mode to slow scan mode to scan sensors at LOOP_TIME_SLOWSCANMODE */
                            deviceScanMode = SLOW_SCAN_MODE;
                        }
                    }
                }
                /* If deviceScanMode is SLOW_SCAN_MODE, perform the following tasks */   
                else
                {                    
                    /* If button is active, switch to active mode */
                    if (CapSense_IsAnyWidgetActive())
                    {   
                       /* If sensor is active in slow-scan mode, skip sleep
                        *  and perform sensor scan
                        */
                        currentState = SENSOR_SCAN;
                        
                        /* Set watchdog match value to fast scan mode */
                        watchdogMatchValue = wdtMatchValFastMode;      
                        
                        #if(CY_IP_SRSSV2)
                            /* Configure Match value */
                            CySysWdtWriteMatch(CY_SYS_WDT_COUNTER0, watchdogMatchValue);
                        #endif
                        
                        /* Change the device mode to fast scan mode to provide fast touch response */
                        deviceScanMode = FAST_SCAN_MODE; 
                    }                    
                }
                currentState = SENSOR_SCAN;
                deviceScanMode = FAST_SCAN_MODE; 
                break;
                
            case SLEEP:
                /* Put the device to deep sleep after each CapSense scan */
                EnterDeepSleepLowPowerMode();
                
                /* Start scanning the sensors only if interrupt occurred due to WDT.
                   Interrupt can also occur due to I2C interrupt while tuner is running.
                   In such cases, sensor is not scanned until WDT interrupt has occurred
                */
                if(wdtInterruptOccured)
                {
                    /* Set state to scan sensor after device wakes up from sleep */
                    currentState = SENSOR_SCAN;
                    
                    wdtInterruptOccured = FALSE;  
                }
                break;
                
            default:
                break;
        } 
    }  
}    

/*******************************************************************************
* Function Name: EnterDeepSleepLowPowerMode
********************************************************************************
* Summary:
*  Put the device to DeepSleep power mode. Reconfigures the Components for 
*  normal operation after wake-up. 
*
* Parameters:
*  void
*
* Return:
*  void
*
* Theory: Before going to deep sleep, the API checks for any
*         I2C activity and waits till the I2C transaction is complete before 
*         the device is put to deep sleep. 
*
* Side Effects: None
*
* Note:
*
*******************************************************************************/
void EnterDeepSleepLowPowerMode(void)
{
    /* EZI2C_Sleep routine should be called only after on-going I2C 
    *  transaction is complete
    *  Enter critical section to lock slave state 
    */
    interruptState = CyEnterCriticalSection();
    /* Enable interrupts */
    CyExitCriticalSection(interruptState);
}

/******************************************************************************
* Function Name: Timer_Interrupt
*******************************************************************************
*
* Summary:
*  Handles the Interrupt Service Routine for the WDT timer.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Theory: The interrupt is cleared on the ISR as watchdog in this project is 
*         used for timing maintenance only. Match value is updated to maintain 
*         the loop time. 
*
* Side Effects: None
*
* Note:
*
*******************************************************************************/
CY_ISR(Timer_Interrupt)
{
    #if (CY_IP_SRSSV2)    
        /* Clears interrupt request  */
        CySysWdtClearInterrupt(CY_SYS_WDT_COUNTER0_INT);
    #else
        /* Clear the watchdog interrupt */
        CySysWdtClearInterrupt();    
        
        /* WDT match value is updated in order to obtain periodic interrupts */
        CySysWdtWriteMatch(CySysWdtReadMatch() + watchdogMatchValue); 
    #endif /* !CY_IP_SRSSV2 */
    
    /* Set to variable that indicates that WDT interrupt had triggered*/
    wdtInterruptOccured = TRUE;   
}

/******************************************************************************
* Function Name: WDT_Start
*******************************************************************************
*
* Summary:
*  Configures WDT.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Theory: This API unmasks the WDT interrupt to route the interrupt to CPU and 
*         configures the ISR.
*
* Side Effects: None
*
* Note:
*
*******************************************************************************/
void WDT_Start(void)
{  
    /* Get the actual match value required to generate a given delay */
    watchdogMatchValue = WDT_TIMEOUT_FAST_SCAN;
    CalibrateWdtMatchValue();
    wdtMatchValFastMode  = watchdogMatchValue;
    
    watchdogMatchValue = WDT_TIMEOUT_SLOW_SCAN;
    CalibrateWdtMatchValue();
    wdtMatchValSlowMode = watchdogMatchValue;
    
    #if (CY_IP_SRSSV2)    
        /* Configure Match value */
        CySysWdtWriteMatch(CY_SYS_WDT_COUNTER0, wdtMatchValFastMode);
        
        /* Set up WDT mode */
        CySysWdtSetMode(CY_SYS_WDT_COUNTER0, CY_SYS_WDT_MODE_INT);
        
        /* Automatically reset counter */
        CySysWdtSetClearOnMatch(CY_SYS_WDT_COUNTER0, ENABLE_WDT);
        CySysWdtResetCounters(CY_SYS_WDT_COUNTER0_RESET);
        
        /* Enable WDT */
        CySysWdtEnable(CY_SYS_WDT_COUNTER0_MASK);
    #else 
        /* WDT match value is updated in order to obtain periodic interrupts */
        CySysWdtWriteMatch(CySysWdtReadMatch() + watchdogMatchValue);
        
        /* Enable WDT interrupt */
        CySysWdtUnmaskInterrupt();
    #endif
}
/*******************************************************************************
* Function Name: CalibrateWdtMatchValue
********************************************************************************
* Summary: 
*  This function calibrates the match value of the Watchdog Timer 
*
* Parameter:
*  None
*
* Return:
*  void
*
* Theory: The ILO is calibrated using IMO to improve the accuracy of ILO.
*
* Side Effects: None
*
* Note:
*
*******************************************************************************/
void CalibrateWdtMatchValue()
{    
    /* Contains ILO Trimmed value */
    uint32 tempIloCounts = 0u;
    
    /* Desired delay in microseconds for ILO Trimming */
    uint32 desiredDelay = ((watchdogMatchValue / ILO_CLOCK_FACTOR) * MILLI_SEC_TO_MICRO_SEC);  
    
    /* Get the ILO compensated counts i.e. the actual counts for the desired ILO frequency 
    *  Trimming is done to improve ILO accuracy using IMO; ILO default accuracy is +/- 60% 
    */
    if(CYRET_SUCCESS == CySysClkIloCompensate(desiredDelay, &tempIloCounts))
    {    
        watchdogMatchValue = (uint32)tempIloCounts;
    }    
}

/* [] END OF FILE */
