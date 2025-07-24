/***************************************************************************//**
* \file CapSense_1_RegisterMap.h
* \version 7.0
*
* \brief
*   This file provides the definitions for the Component data structure register.
*
* \see CapSense_1 v7.0 Datasheet
*
*//*****************************************************************************
* Copyright (2016-2019), Cypress Semiconductor Corporation.
********************************************************************************
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
*******************************************************************************/

#if !defined(CY_SENSE_CapSense_1_REGISTER_MAP_H)
#define CY_SENSE_CapSense_1_REGISTER_MAP_H

#include <cytypes.h>
#include "CapSense_1_Configuration.h"
#include "CapSense_1_Structure.h"

/*****************************************************************************/
/* RAM Data structure register definitions                                   */
/*****************************************************************************/
#define CapSense_1_CONFIG_ID_VALUE                          (CapSense_1_dsRam.configId)
#define CapSense_1_CONFIG_ID_OFFSET                         (0u)
#define CapSense_1_CONFIG_ID_SIZE                           (2u)
#define CapSense_1_CONFIG_ID_PARAM_ID                       (0x87000000u)

#define CapSense_1_DEVICE_ID_VALUE                          (CapSense_1_dsRam.deviceId)
#define CapSense_1_DEVICE_ID_OFFSET                         (2u)
#define CapSense_1_DEVICE_ID_SIZE                           (2u)
#define CapSense_1_DEVICE_ID_PARAM_ID                       (0x8B000002u)

#define CapSense_1_HW_CLOCK_VALUE                           (CapSense_1_dsRam.hwClock)
#define CapSense_1_HW_CLOCK_OFFSET                          (4u)
#define CapSense_1_HW_CLOCK_SIZE                            (2u)
#define CapSense_1_HW_CLOCK_PARAM_ID                        (0x86000004u)

#define CapSense_1_TUNER_CMD_VALUE                          (CapSense_1_dsRam.tunerCmd)
#define CapSense_1_TUNER_CMD_OFFSET                         (6u)
#define CapSense_1_TUNER_CMD_SIZE                           (2u)
#define CapSense_1_TUNER_CMD_PARAM_ID                       (0xA1000006u)

#define CapSense_1_SCAN_COUNTER_VALUE                       (CapSense_1_dsRam.scanCounter)
#define CapSense_1_SCAN_COUNTER_OFFSET                      (8u)
#define CapSense_1_SCAN_COUNTER_SIZE                        (2u)
#define CapSense_1_SCAN_COUNTER_PARAM_ID                    (0x85000008u)

#define CapSense_1_STATUS_VALUE                             (CapSense_1_dsRam.status)
#define CapSense_1_STATUS_OFFSET                            (12u)
#define CapSense_1_STATUS_SIZE                              (4u)
#define CapSense_1_STATUS_PARAM_ID                          (0xCB00000Cu)

#define CapSense_1_WDGT_ENABLE0_VALUE                       (CapSense_1_dsRam.wdgtEnable[0u])
#define CapSense_1_WDGT_ENABLE0_OFFSET                      (16u)
#define CapSense_1_WDGT_ENABLE0_SIZE                        (4u)
#define CapSense_1_WDGT_ENABLE0_PARAM_ID                    (0xE6000010u)

#define CapSense_1_WDGT_ENABLE1_VALUE                       (CapSense_1_dsRam.wdgtEnable[1u])
#define CapSense_1_WDGT_ENABLE1_OFFSET                      (20u)
#define CapSense_1_WDGT_ENABLE1_SIZE                        (4u)
#define CapSense_1_WDGT_ENABLE1_PARAM_ID                    (0xE7000014u)

#define CapSense_1_WDGT_STATUS0_VALUE                       (CapSense_1_dsRam.wdgtStatus[0u])
#define CapSense_1_WDGT_STATUS0_OFFSET                      (24u)
#define CapSense_1_WDGT_STATUS0_SIZE                        (4u)
#define CapSense_1_WDGT_STATUS0_PARAM_ID                    (0xCF000018u)

#define CapSense_1_WDGT_STATUS1_VALUE                       (CapSense_1_dsRam.wdgtStatus[1u])
#define CapSense_1_WDGT_STATUS1_OFFSET                      (28u)
#define CapSense_1_WDGT_STATUS1_SIZE                        (4u)
#define CapSense_1_WDGT_STATUS1_PARAM_ID                    (0xCE00001Cu)

#define CapSense_1_SNS_STATUS0_VALUE                        (CapSense_1_dsRam.snsStatus[0u])
#define CapSense_1_SNS_STATUS0_OFFSET                       (32u)
#define CapSense_1_SNS_STATUS0_SIZE                         (1u)
#define CapSense_1_SNS_STATUS0_PARAM_ID                     (0x45000020u)

#define CapSense_1_SNS_STATUS1_VALUE                        (CapSense_1_dsRam.snsStatus[1u])
#define CapSense_1_SNS_STATUS1_OFFSET                       (33u)
#define CapSense_1_SNS_STATUS1_SIZE                         (1u)
#define CapSense_1_SNS_STATUS1_PARAM_ID                     (0x43000021u)

#define CapSense_1_SNS_STATUS2_VALUE                        (CapSense_1_dsRam.snsStatus[2u])
#define CapSense_1_SNS_STATUS2_OFFSET                       (34u)
#define CapSense_1_SNS_STATUS2_SIZE                         (1u)
#define CapSense_1_SNS_STATUS2_PARAM_ID                     (0x49000022u)

#define CapSense_1_SNS_STATUS3_VALUE                        (CapSense_1_dsRam.snsStatus[3u])
#define CapSense_1_SNS_STATUS3_OFFSET                       (35u)
#define CapSense_1_SNS_STATUS3_SIZE                         (1u)
#define CapSense_1_SNS_STATUS3_PARAM_ID                     (0x4F000023u)

#define CapSense_1_SNS_STATUS4_VALUE                        (CapSense_1_dsRam.snsStatus[4u])
#define CapSense_1_SNS_STATUS4_OFFSET                       (36u)
#define CapSense_1_SNS_STATUS4_SIZE                         (1u)
#define CapSense_1_SNS_STATUS4_PARAM_ID                     (0x44000024u)

#define CapSense_1_SNS_STATUS5_VALUE                        (CapSense_1_dsRam.snsStatus[5u])
#define CapSense_1_SNS_STATUS5_OFFSET                       (37u)
#define CapSense_1_SNS_STATUS5_SIZE                         (1u)
#define CapSense_1_SNS_STATUS5_PARAM_ID                     (0x42000025u)

#define CapSense_1_SNS_STATUS6_VALUE                        (CapSense_1_dsRam.snsStatus[6u])
#define CapSense_1_SNS_STATUS6_OFFSET                       (38u)
#define CapSense_1_SNS_STATUS6_SIZE                         (1u)
#define CapSense_1_SNS_STATUS6_PARAM_ID                     (0x48000026u)

#define CapSense_1_SNS_STATUS7_VALUE                        (CapSense_1_dsRam.snsStatus[7u])
#define CapSense_1_SNS_STATUS7_OFFSET                       (39u)
#define CapSense_1_SNS_STATUS7_SIZE                         (1u)
#define CapSense_1_SNS_STATUS7_PARAM_ID                     (0x4E000027u)

#define CapSense_1_SNS_STATUS8_VALUE                        (CapSense_1_dsRam.snsStatus[8u])
#define CapSense_1_SNS_STATUS8_OFFSET                       (40u)
#define CapSense_1_SNS_STATUS8_SIZE                         (1u)
#define CapSense_1_SNS_STATUS8_PARAM_ID                     (0x47000028u)

#define CapSense_1_SNS_STATUS9_VALUE                        (CapSense_1_dsRam.snsStatus[9u])
#define CapSense_1_SNS_STATUS9_OFFSET                       (41u)
#define CapSense_1_SNS_STATUS9_SIZE                         (1u)
#define CapSense_1_SNS_STATUS9_PARAM_ID                     (0x41000029u)

#define CapSense_1_SNS_STATUS10_VALUE                       (CapSense_1_dsRam.snsStatus[10u])
#define CapSense_1_SNS_STATUS10_OFFSET                      (42u)
#define CapSense_1_SNS_STATUS10_SIZE                        (1u)
#define CapSense_1_SNS_STATUS10_PARAM_ID                    (0x4B00002Au)

#define CapSense_1_SNS_STATUS11_VALUE                       (CapSense_1_dsRam.snsStatus[11u])
#define CapSense_1_SNS_STATUS11_OFFSET                      (43u)
#define CapSense_1_SNS_STATUS11_SIZE                        (1u)
#define CapSense_1_SNS_STATUS11_PARAM_ID                    (0x4D00002Bu)

#define CapSense_1_SNS_STATUS12_VALUE                       (CapSense_1_dsRam.snsStatus[12u])
#define CapSense_1_SNS_STATUS12_OFFSET                      (44u)
#define CapSense_1_SNS_STATUS12_SIZE                        (1u)
#define CapSense_1_SNS_STATUS12_PARAM_ID                    (0x4600002Cu)

#define CapSense_1_SNS_STATUS13_VALUE                       (CapSense_1_dsRam.snsStatus[13u])
#define CapSense_1_SNS_STATUS13_OFFSET                      (45u)
#define CapSense_1_SNS_STATUS13_SIZE                        (1u)
#define CapSense_1_SNS_STATUS13_PARAM_ID                    (0x4000002Du)

#define CapSense_1_SNS_STATUS14_VALUE                       (CapSense_1_dsRam.snsStatus[14u])
#define CapSense_1_SNS_STATUS14_OFFSET                      (46u)
#define CapSense_1_SNS_STATUS14_SIZE                        (1u)
#define CapSense_1_SNS_STATUS14_PARAM_ID                    (0x4A00002Eu)

#define CapSense_1_SNS_STATUS15_VALUE                       (CapSense_1_dsRam.snsStatus[15u])
#define CapSense_1_SNS_STATUS15_OFFSET                      (47u)
#define CapSense_1_SNS_STATUS15_SIZE                        (1u)
#define CapSense_1_SNS_STATUS15_PARAM_ID                    (0x4C00002Fu)

#define CapSense_1_SNS_STATUS16_VALUE                       (CapSense_1_dsRam.snsStatus[16u])
#define CapSense_1_SNS_STATUS16_OFFSET                      (48u)
#define CapSense_1_SNS_STATUS16_SIZE                        (1u)
#define CapSense_1_SNS_STATUS16_PARAM_ID                    (0x40000030u)

#define CapSense_1_SNS_STATUS17_VALUE                       (CapSense_1_dsRam.snsStatus[17u])
#define CapSense_1_SNS_STATUS17_OFFSET                      (49u)
#define CapSense_1_SNS_STATUS17_SIZE                        (1u)
#define CapSense_1_SNS_STATUS17_PARAM_ID                    (0x46000031u)

#define CapSense_1_SNS_STATUS18_VALUE                       (CapSense_1_dsRam.snsStatus[18u])
#define CapSense_1_SNS_STATUS18_OFFSET                      (50u)
#define CapSense_1_SNS_STATUS18_SIZE                        (1u)
#define CapSense_1_SNS_STATUS18_PARAM_ID                    (0x4C000032u)

#define CapSense_1_SNS_STATUS19_VALUE                       (CapSense_1_dsRam.snsStatus[19u])
#define CapSense_1_SNS_STATUS19_OFFSET                      (51u)
#define CapSense_1_SNS_STATUS19_SIZE                        (1u)
#define CapSense_1_SNS_STATUS19_PARAM_ID                    (0x4A000033u)

#define CapSense_1_SNS_STATUS20_VALUE                       (CapSense_1_dsRam.snsStatus[20u])
#define CapSense_1_SNS_STATUS20_OFFSET                      (52u)
#define CapSense_1_SNS_STATUS20_SIZE                        (1u)
#define CapSense_1_SNS_STATUS20_PARAM_ID                    (0x41000034u)

#define CapSense_1_SNS_STATUS21_VALUE                       (CapSense_1_dsRam.snsStatus[21u])
#define CapSense_1_SNS_STATUS21_OFFSET                      (53u)
#define CapSense_1_SNS_STATUS21_SIZE                        (1u)
#define CapSense_1_SNS_STATUS21_PARAM_ID                    (0x47000035u)

#define CapSense_1_SNS_STATUS22_VALUE                       (CapSense_1_dsRam.snsStatus[22u])
#define CapSense_1_SNS_STATUS22_OFFSET                      (54u)
#define CapSense_1_SNS_STATUS22_SIZE                        (1u)
#define CapSense_1_SNS_STATUS22_PARAM_ID                    (0x4D000036u)

#define CapSense_1_SNS_STATUS23_VALUE                       (CapSense_1_dsRam.snsStatus[23u])
#define CapSense_1_SNS_STATUS23_OFFSET                      (55u)
#define CapSense_1_SNS_STATUS23_SIZE                        (1u)
#define CapSense_1_SNS_STATUS23_PARAM_ID                    (0x4B000037u)

#define CapSense_1_SNS_STATUS24_VALUE                       (CapSense_1_dsRam.snsStatus[24u])
#define CapSense_1_SNS_STATUS24_OFFSET                      (56u)
#define CapSense_1_SNS_STATUS24_SIZE                        (1u)
#define CapSense_1_SNS_STATUS24_PARAM_ID                    (0x42000038u)

#define CapSense_1_SNS_STATUS25_VALUE                       (CapSense_1_dsRam.snsStatus[25u])
#define CapSense_1_SNS_STATUS25_OFFSET                      (57u)
#define CapSense_1_SNS_STATUS25_SIZE                        (1u)
#define CapSense_1_SNS_STATUS25_PARAM_ID                    (0x44000039u)

#define CapSense_1_SNS_STATUS26_VALUE                       (CapSense_1_dsRam.snsStatus[26u])
#define CapSense_1_SNS_STATUS26_OFFSET                      (58u)
#define CapSense_1_SNS_STATUS26_SIZE                        (1u)
#define CapSense_1_SNS_STATUS26_PARAM_ID                    (0x4E00003Au)

#define CapSense_1_SNS_STATUS27_VALUE                       (CapSense_1_dsRam.snsStatus[27u])
#define CapSense_1_SNS_STATUS27_OFFSET                      (59u)
#define CapSense_1_SNS_STATUS27_SIZE                        (1u)
#define CapSense_1_SNS_STATUS27_PARAM_ID                    (0x4800003Bu)

#define CapSense_1_SNS_STATUS28_VALUE                       (CapSense_1_dsRam.snsStatus[28u])
#define CapSense_1_SNS_STATUS28_OFFSET                      (60u)
#define CapSense_1_SNS_STATUS28_SIZE                        (1u)
#define CapSense_1_SNS_STATUS28_PARAM_ID                    (0x4300003Cu)

#define CapSense_1_SNS_STATUS29_VALUE                       (CapSense_1_dsRam.snsStatus[29u])
#define CapSense_1_SNS_STATUS29_OFFSET                      (61u)
#define CapSense_1_SNS_STATUS29_SIZE                        (1u)
#define CapSense_1_SNS_STATUS29_PARAM_ID                    (0x4500003Du)

#define CapSense_1_SNS_STATUS30_VALUE                       (CapSense_1_dsRam.snsStatus[30u])
#define CapSense_1_SNS_STATUS30_OFFSET                      (62u)
#define CapSense_1_SNS_STATUS30_SIZE                        (1u)
#define CapSense_1_SNS_STATUS30_PARAM_ID                    (0x4F00003Eu)

#define CapSense_1_SNS_STATUS31_VALUE                       (CapSense_1_dsRam.snsStatus[31u])
#define CapSense_1_SNS_STATUS31_OFFSET                      (63u)
#define CapSense_1_SNS_STATUS31_SIZE                        (1u)
#define CapSense_1_SNS_STATUS31_PARAM_ID                    (0x4900003Fu)

#define CapSense_1_SNS_STATUS32_VALUE                       (CapSense_1_dsRam.snsStatus[32u])
#define CapSense_1_SNS_STATUS32_OFFSET                      (64u)
#define CapSense_1_SNS_STATUS32_SIZE                        (1u)
#define CapSense_1_SNS_STATUS32_PARAM_ID                    (0x42000040u)

#define CapSense_1_SNS_STATUS33_VALUE                       (CapSense_1_dsRam.snsStatus[33u])
#define CapSense_1_SNS_STATUS33_OFFSET                      (65u)
#define CapSense_1_SNS_STATUS33_SIZE                        (1u)
#define CapSense_1_SNS_STATUS33_PARAM_ID                    (0x44000041u)

#define CapSense_1_CSD0_CONFIG_VALUE                        (CapSense_1_dsRam.csd0Config)
#define CapSense_1_CSD0_CONFIG_OFFSET                       (66u)
#define CapSense_1_CSD0_CONFIG_SIZE                         (2u)
#define CapSense_1_CSD0_CONFIG_PARAM_ID                     (0xA0800042u)

#define CapSense_1_MOD_CSD_CLK_VALUE                        (CapSense_1_dsRam.modCsdClk)
#define CapSense_1_MOD_CSD_CLK_OFFSET                       (68u)
#define CapSense_1_MOD_CSD_CLK_SIZE                         (1u)
#define CapSense_1_MOD_CSD_CLK_PARAM_ID                     (0x65800044u)

#define CapSense_1_BUTTON0_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button0.resolution)
#define CapSense_1_BUTTON0_RESOLUTION_OFFSET                (70u)
#define CapSense_1_BUTTON0_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON0_RESOLUTION_PARAM_ID              (0x8A800046u)

#define CapSense_1_BUTTON0_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.fingerTh)
#define CapSense_1_BUTTON0_FINGER_TH_OFFSET                 (72u)
#define CapSense_1_BUTTON0_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON0_FINGER_TH_PARAM_ID               (0x85800048u)

#define CapSense_1_BUTTON0_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button0.noiseTh)
#define CapSense_1_BUTTON0_NOISE_TH_OFFSET                  (74u)
#define CapSense_1_BUTTON0_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON0_NOISE_TH_PARAM_ID                (0x4180004Au)

#define CapSense_1_BUTTON0_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button0.nNoiseTh)
#define CapSense_1_BUTTON0_NNOISE_TH_OFFSET                 (75u)
#define CapSense_1_BUTTON0_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON0_NNOISE_TH_PARAM_ID               (0x4780004Bu)

#define CapSense_1_BUTTON0_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button0.hysteresis)
#define CapSense_1_BUTTON0_HYSTERESIS_OFFSET                (76u)
#define CapSense_1_BUTTON0_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON0_HYSTERESIS_PARAM_ID              (0x4C80004Cu)

#define CapSense_1_BUTTON0_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button0.onDebounce)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_OFFSET               (77u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON0_ON_DEBOUNCE_PARAM_ID             (0x4A80004Du)

#define CapSense_1_BUTTON0_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button0.lowBslnRst)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_OFFSET              (78u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON0_LOW_BSLN_RST_PARAM_ID            (0x4080004Eu)

#define CapSense_1_BUTTON0_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button0.idacMod[0u])
#define CapSense_1_BUTTON0_IDAC_MOD0_OFFSET                 (79u)
#define CapSense_1_BUTTON0_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON0_IDAC_MOD0_PARAM_ID               (0x4B00004Fu)

#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button0.idacGainIndex)
#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_OFFSET           (80u)
#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON0_IDAC_GAIN_INDEX_PARAM_ID         (0x4A800050u)

#define CapSense_1_BUTTON0_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button0.snsClk)
#define CapSense_1_BUTTON0_SNS_CLK_OFFSET                   (82u)
#define CapSense_1_BUTTON0_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON0_SNS_CLK_PARAM_ID                 (0x8E800052u)

#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button0.snsClkSource)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_OFFSET            (84u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS_CLK_SOURCE_PARAM_ID          (0x4B800054u)

#define CapSense_1_BUTTON0_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button0.fingerCap)
#define CapSense_1_BUTTON0_FINGER_CAP_OFFSET                (86u)
#define CapSense_1_BUTTON0_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON0_FINGER_CAP_PARAM_ID              (0xA9000056u)

#define CapSense_1_BUTTON0_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button0.sigPFC)
#define CapSense_1_BUTTON0_SIGPFC_OFFSET                    (88u)
#define CapSense_1_BUTTON0_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON0_SIGPFC_PARAM_ID                  (0xA6000058u)

#define CapSense_1_BUTTON1_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button1.resolution)
#define CapSense_1_BUTTON1_RESOLUTION_OFFSET                (90u)
#define CapSense_1_BUTTON1_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON1_RESOLUTION_PARAM_ID              (0x8F81005Au)

#define CapSense_1_BUTTON1_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.fingerTh)
#define CapSense_1_BUTTON1_FINGER_TH_OFFSET                 (92u)
#define CapSense_1_BUTTON1_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON1_FINGER_TH_PARAM_ID               (0x8281005Cu)

#define CapSense_1_BUTTON1_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button1.noiseTh)
#define CapSense_1_BUTTON1_NOISE_TH_OFFSET                  (94u)
#define CapSense_1_BUTTON1_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON1_NOISE_TH_PARAM_ID                (0x4681005Eu)

#define CapSense_1_BUTTON1_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button1.nNoiseTh)
#define CapSense_1_BUTTON1_NNOISE_TH_OFFSET                 (95u)
#define CapSense_1_BUTTON1_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON1_NNOISE_TH_PARAM_ID               (0x4081005Fu)

#define CapSense_1_BUTTON1_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button1.hysteresis)
#define CapSense_1_BUTTON1_HYSTERESIS_OFFSET                (96u)
#define CapSense_1_BUTTON1_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON1_HYSTERESIS_PARAM_ID              (0x46810060u)

#define CapSense_1_BUTTON1_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button1.onDebounce)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_OFFSET               (97u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON1_ON_DEBOUNCE_PARAM_ID             (0x40810061u)

#define CapSense_1_BUTTON1_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button1.lowBslnRst)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_OFFSET              (98u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON1_LOW_BSLN_RST_PARAM_ID            (0x4A810062u)

#define CapSense_1_BUTTON1_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button1.idacMod[0u])
#define CapSense_1_BUTTON1_IDAC_MOD0_OFFSET                 (99u)
#define CapSense_1_BUTTON1_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON1_IDAC_MOD0_PARAM_ID               (0x41010063u)

#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button1.idacGainIndex)
#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_OFFSET           (100u)
#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON1_IDAC_GAIN_INDEX_PARAM_ID         (0x47810064u)

#define CapSense_1_BUTTON1_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button1.snsClk)
#define CapSense_1_BUTTON1_SNS_CLK_OFFSET                   (102u)
#define CapSense_1_BUTTON1_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON1_SNS_CLK_PARAM_ID                 (0x83810066u)

#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button1.snsClkSource)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_OFFSET            (104u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS_CLK_SOURCE_PARAM_ID          (0x44810068u)

#define CapSense_1_BUTTON1_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button1.fingerCap)
#define CapSense_1_BUTTON1_FINGER_CAP_OFFSET                (106u)
#define CapSense_1_BUTTON1_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON1_FINGER_CAP_PARAM_ID              (0xA601006Au)

#define CapSense_1_BUTTON1_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button1.sigPFC)
#define CapSense_1_BUTTON1_SIGPFC_OFFSET                    (108u)
#define CapSense_1_BUTTON1_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON1_SIGPFC_PARAM_ID                  (0xAB01006Cu)

#define CapSense_1_BUTTON2_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button2.resolution)
#define CapSense_1_BUTTON2_RESOLUTION_OFFSET                (110u)
#define CapSense_1_BUTTON2_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON2_RESOLUTION_PARAM_ID              (0x8482006Eu)

#define CapSense_1_BUTTON2_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.fingerTh)
#define CapSense_1_BUTTON2_FINGER_TH_OFFSET                 (112u)
#define CapSense_1_BUTTON2_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON2_FINGER_TH_PARAM_ID               (0x8E820070u)

#define CapSense_1_BUTTON2_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button2.noiseTh)
#define CapSense_1_BUTTON2_NOISE_TH_OFFSET                  (114u)
#define CapSense_1_BUTTON2_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON2_NOISE_TH_PARAM_ID                (0x4A820072u)

#define CapSense_1_BUTTON2_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button2.nNoiseTh)
#define CapSense_1_BUTTON2_NNOISE_TH_OFFSET                 (115u)
#define CapSense_1_BUTTON2_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON2_NNOISE_TH_PARAM_ID               (0x4C820073u)

#define CapSense_1_BUTTON2_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button2.hysteresis)
#define CapSense_1_BUTTON2_HYSTERESIS_OFFSET                (116u)
#define CapSense_1_BUTTON2_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON2_HYSTERESIS_PARAM_ID              (0x47820074u)

#define CapSense_1_BUTTON2_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button2.onDebounce)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_OFFSET               (117u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON2_ON_DEBOUNCE_PARAM_ID             (0x41820075u)

#define CapSense_1_BUTTON2_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button2.lowBslnRst)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_OFFSET              (118u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON2_LOW_BSLN_RST_PARAM_ID            (0x4B820076u)

#define CapSense_1_BUTTON2_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button2.idacMod[0u])
#define CapSense_1_BUTTON2_IDAC_MOD0_OFFSET                 (119u)
#define CapSense_1_BUTTON2_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON2_IDAC_MOD0_PARAM_ID               (0x40020077u)

#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button2.idacGainIndex)
#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_OFFSET           (120u)
#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON2_IDAC_GAIN_INDEX_PARAM_ID         (0x44820078u)

#define CapSense_1_BUTTON2_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button2.snsClk)
#define CapSense_1_BUTTON2_SNS_CLK_OFFSET                   (122u)
#define CapSense_1_BUTTON2_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON2_SNS_CLK_PARAM_ID                 (0x8082007Au)

#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button2.snsClkSource)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_OFFSET            (124u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS_CLK_SOURCE_PARAM_ID          (0x4582007Cu)

#define CapSense_1_BUTTON2_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button2.fingerCap)
#define CapSense_1_BUTTON2_FINGER_CAP_OFFSET                (126u)
#define CapSense_1_BUTTON2_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON2_FINGER_CAP_PARAM_ID              (0xA702007Eu)

#define CapSense_1_BUTTON2_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button2.sigPFC)
#define CapSense_1_BUTTON2_SIGPFC_OFFSET                    (128u)
#define CapSense_1_BUTTON2_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON2_SIGPFC_PARAM_ID                  (0xA9020080u)

#define CapSense_1_BUTTON3_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button3.resolution)
#define CapSense_1_BUTTON3_RESOLUTION_OFFSET                (130u)
#define CapSense_1_BUTTON3_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON3_RESOLUTION_PARAM_ID              (0x80830082u)

#define CapSense_1_BUTTON3_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.fingerTh)
#define CapSense_1_BUTTON3_FINGER_TH_OFFSET                 (132u)
#define CapSense_1_BUTTON3_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON3_FINGER_TH_PARAM_ID               (0x8D830084u)

#define CapSense_1_BUTTON3_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button3.noiseTh)
#define CapSense_1_BUTTON3_NOISE_TH_OFFSET                  (134u)
#define CapSense_1_BUTTON3_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON3_NOISE_TH_PARAM_ID                (0x49830086u)

#define CapSense_1_BUTTON3_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button3.nNoiseTh)
#define CapSense_1_BUTTON3_NNOISE_TH_OFFSET                 (135u)
#define CapSense_1_BUTTON3_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON3_NNOISE_TH_PARAM_ID               (0x4F830087u)

#define CapSense_1_BUTTON3_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button3.hysteresis)
#define CapSense_1_BUTTON3_HYSTERESIS_OFFSET                (136u)
#define CapSense_1_BUTTON3_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON3_HYSTERESIS_PARAM_ID              (0x46830088u)

#define CapSense_1_BUTTON3_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button3.onDebounce)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_OFFSET               (137u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON3_ON_DEBOUNCE_PARAM_ID             (0x40830089u)

#define CapSense_1_BUTTON3_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button3.lowBslnRst)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_OFFSET              (138u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON3_LOW_BSLN_RST_PARAM_ID            (0x4A83008Au)

#define CapSense_1_BUTTON3_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button3.idacMod[0u])
#define CapSense_1_BUTTON3_IDAC_MOD0_OFFSET                 (139u)
#define CapSense_1_BUTTON3_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON3_IDAC_MOD0_PARAM_ID               (0x4103008Bu)

#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button3.idacGainIndex)
#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_OFFSET           (140u)
#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON3_IDAC_GAIN_INDEX_PARAM_ID         (0x4783008Cu)

#define CapSense_1_BUTTON3_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button3.snsClk)
#define CapSense_1_BUTTON3_SNS_CLK_OFFSET                   (142u)
#define CapSense_1_BUTTON3_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON3_SNS_CLK_PARAM_ID                 (0x8383008Eu)

#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button3.snsClkSource)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_OFFSET            (144u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS_CLK_SOURCE_PARAM_ID          (0x41830090u)

#define CapSense_1_BUTTON3_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button3.fingerCap)
#define CapSense_1_BUTTON3_FINGER_CAP_OFFSET                (146u)
#define CapSense_1_BUTTON3_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON3_FINGER_CAP_PARAM_ID              (0xA3030092u)

#define CapSense_1_BUTTON3_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button3.sigPFC)
#define CapSense_1_BUTTON3_SIGPFC_OFFSET                    (148u)
#define CapSense_1_BUTTON3_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON3_SIGPFC_PARAM_ID                  (0xAE030094u)

#define CapSense_1_BUTTON4_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button4.resolution)
#define CapSense_1_BUTTON4_RESOLUTION_OFFSET                (150u)
#define CapSense_1_BUTTON4_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON4_RESOLUTION_PARAM_ID              (0x8D840096u)

#define CapSense_1_BUTTON4_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.fingerTh)
#define CapSense_1_BUTTON4_FINGER_TH_OFFSET                 (152u)
#define CapSense_1_BUTTON4_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON4_FINGER_TH_PARAM_ID               (0x82840098u)

#define CapSense_1_BUTTON4_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button4.noiseTh)
#define CapSense_1_BUTTON4_NOISE_TH_OFFSET                  (154u)
#define CapSense_1_BUTTON4_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON4_NOISE_TH_PARAM_ID                (0x4684009Au)

#define CapSense_1_BUTTON4_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button4.nNoiseTh)
#define CapSense_1_BUTTON4_NNOISE_TH_OFFSET                 (155u)
#define CapSense_1_BUTTON4_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON4_NNOISE_TH_PARAM_ID               (0x4084009Bu)

#define CapSense_1_BUTTON4_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button4.hysteresis)
#define CapSense_1_BUTTON4_HYSTERESIS_OFFSET                (156u)
#define CapSense_1_BUTTON4_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON4_HYSTERESIS_PARAM_ID              (0x4B84009Cu)

#define CapSense_1_BUTTON4_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button4.onDebounce)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_OFFSET               (157u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON4_ON_DEBOUNCE_PARAM_ID             (0x4D84009Du)

#define CapSense_1_BUTTON4_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button4.lowBslnRst)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_OFFSET              (158u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON4_LOW_BSLN_RST_PARAM_ID            (0x4784009Eu)

#define CapSense_1_BUTTON4_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button4.idacMod[0u])
#define CapSense_1_BUTTON4_IDAC_MOD0_OFFSET                 (159u)
#define CapSense_1_BUTTON4_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON4_IDAC_MOD0_PARAM_ID               (0x4C04009Fu)

#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button4.idacGainIndex)
#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_OFFSET           (160u)
#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON4_IDAC_GAIN_INDEX_PARAM_ID         (0x478400A0u)

#define CapSense_1_BUTTON4_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button4.snsClk)
#define CapSense_1_BUTTON4_SNS_CLK_OFFSET                   (162u)
#define CapSense_1_BUTTON4_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON4_SNS_CLK_PARAM_ID                 (0x838400A2u)

#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button4.snsClkSource)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_OFFSET            (164u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS_CLK_SOURCE_PARAM_ID          (0x468400A4u)

#define CapSense_1_BUTTON4_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button4.fingerCap)
#define CapSense_1_BUTTON4_FINGER_CAP_OFFSET                (166u)
#define CapSense_1_BUTTON4_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON4_FINGER_CAP_PARAM_ID              (0xA40400A6u)

#define CapSense_1_BUTTON4_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button4.sigPFC)
#define CapSense_1_BUTTON4_SIGPFC_OFFSET                    (168u)
#define CapSense_1_BUTTON4_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON4_SIGPFC_PARAM_ID                  (0xAB0400A8u)

#define CapSense_1_BUTTON5_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button5.resolution)
#define CapSense_1_BUTTON5_RESOLUTION_OFFSET                (170u)
#define CapSense_1_BUTTON5_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON5_RESOLUTION_PARAM_ID              (0x828500AAu)

#define CapSense_1_BUTTON5_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.fingerTh)
#define CapSense_1_BUTTON5_FINGER_TH_OFFSET                 (172u)
#define CapSense_1_BUTTON5_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON5_FINGER_TH_PARAM_ID               (0x8F8500ACu)

#define CapSense_1_BUTTON5_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button5.noiseTh)
#define CapSense_1_BUTTON5_NOISE_TH_OFFSET                  (174u)
#define CapSense_1_BUTTON5_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON5_NOISE_TH_PARAM_ID                (0x4B8500AEu)

#define CapSense_1_BUTTON5_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button5.nNoiseTh)
#define CapSense_1_BUTTON5_NNOISE_TH_OFFSET                 (175u)
#define CapSense_1_BUTTON5_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON5_NNOISE_TH_PARAM_ID               (0x4D8500AFu)

#define CapSense_1_BUTTON5_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button5.hysteresis)
#define CapSense_1_BUTTON5_HYSTERESIS_OFFSET                (176u)
#define CapSense_1_BUTTON5_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON5_HYSTERESIS_PARAM_ID              (0x418500B0u)

#define CapSense_1_BUTTON5_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button5.onDebounce)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_OFFSET               (177u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON5_ON_DEBOUNCE_PARAM_ID             (0x478500B1u)

#define CapSense_1_BUTTON5_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button5.lowBslnRst)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_OFFSET              (178u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON5_LOW_BSLN_RST_PARAM_ID            (0x4D8500B2u)

#define CapSense_1_BUTTON5_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button5.idacMod[0u])
#define CapSense_1_BUTTON5_IDAC_MOD0_OFFSET                 (179u)
#define CapSense_1_BUTTON5_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON5_IDAC_MOD0_PARAM_ID               (0x460500B3u)

#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button5.idacGainIndex)
#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_OFFSET           (180u)
#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON5_IDAC_GAIN_INDEX_PARAM_ID         (0x408500B4u)

#define CapSense_1_BUTTON5_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button5.snsClk)
#define CapSense_1_BUTTON5_SNS_CLK_OFFSET                   (182u)
#define CapSense_1_BUTTON5_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON5_SNS_CLK_PARAM_ID                 (0x848500B6u)

#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button5.snsClkSource)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_OFFSET            (184u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS_CLK_SOURCE_PARAM_ID          (0x438500B8u)

#define CapSense_1_BUTTON5_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button5.fingerCap)
#define CapSense_1_BUTTON5_FINGER_CAP_OFFSET                (186u)
#define CapSense_1_BUTTON5_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON5_FINGER_CAP_PARAM_ID              (0xA10500BAu)

#define CapSense_1_BUTTON5_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button5.sigPFC)
#define CapSense_1_BUTTON5_SIGPFC_OFFSET                    (188u)
#define CapSense_1_BUTTON5_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON5_SIGPFC_PARAM_ID                  (0xAC0500BCu)

#define CapSense_1_BUTTON6_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button6.resolution)
#define CapSense_1_BUTTON6_RESOLUTION_OFFSET                (190u)
#define CapSense_1_BUTTON6_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON6_RESOLUTION_PARAM_ID              (0x838600BEu)

#define CapSense_1_BUTTON6_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button6.fingerTh)
#define CapSense_1_BUTTON6_FINGER_TH_OFFSET                 (192u)
#define CapSense_1_BUTTON6_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON6_FINGER_TH_PARAM_ID               (0x8E8600C0u)

#define CapSense_1_BUTTON6_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button6.noiseTh)
#define CapSense_1_BUTTON6_NOISE_TH_OFFSET                  (194u)
#define CapSense_1_BUTTON6_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON6_NOISE_TH_PARAM_ID                (0x4A8600C2u)

#define CapSense_1_BUTTON6_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button6.nNoiseTh)
#define CapSense_1_BUTTON6_NNOISE_TH_OFFSET                 (195u)
#define CapSense_1_BUTTON6_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON6_NNOISE_TH_PARAM_ID               (0x4C8600C3u)

#define CapSense_1_BUTTON6_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button6.hysteresis)
#define CapSense_1_BUTTON6_HYSTERESIS_OFFSET                (196u)
#define CapSense_1_BUTTON6_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON6_HYSTERESIS_PARAM_ID              (0x478600C4u)

#define CapSense_1_BUTTON6_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button6.onDebounce)
#define CapSense_1_BUTTON6_ON_DEBOUNCE_OFFSET               (197u)
#define CapSense_1_BUTTON6_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON6_ON_DEBOUNCE_PARAM_ID             (0x418600C5u)

#define CapSense_1_BUTTON6_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button6.lowBslnRst)
#define CapSense_1_BUTTON6_LOW_BSLN_RST_OFFSET              (198u)
#define CapSense_1_BUTTON6_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON6_LOW_BSLN_RST_PARAM_ID            (0x4B8600C6u)

#define CapSense_1_BUTTON6_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button6.idacMod[0u])
#define CapSense_1_BUTTON6_IDAC_MOD0_OFFSET                 (199u)
#define CapSense_1_BUTTON6_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON6_IDAC_MOD0_PARAM_ID               (0x400600C7u)

#define CapSense_1_BUTTON6_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button6.idacGainIndex)
#define CapSense_1_BUTTON6_IDAC_GAIN_INDEX_OFFSET           (200u)
#define CapSense_1_BUTTON6_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON6_IDAC_GAIN_INDEX_PARAM_ID         (0x448600C8u)

#define CapSense_1_BUTTON6_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button6.snsClk)
#define CapSense_1_BUTTON6_SNS_CLK_OFFSET                   (202u)
#define CapSense_1_BUTTON6_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON6_SNS_CLK_PARAM_ID                 (0x808600CAu)

#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button6.snsClkSource)
#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_OFFSET            (204u)
#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON6_SNS_CLK_SOURCE_PARAM_ID          (0x458600CCu)

#define CapSense_1_BUTTON6_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button6.fingerCap)
#define CapSense_1_BUTTON6_FINGER_CAP_OFFSET                (206u)
#define CapSense_1_BUTTON6_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON6_FINGER_CAP_PARAM_ID              (0xA70600CEu)

#define CapSense_1_BUTTON6_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button6.sigPFC)
#define CapSense_1_BUTTON6_SIGPFC_OFFSET                    (208u)
#define CapSense_1_BUTTON6_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON6_SIGPFC_PARAM_ID                  (0xAD0600D0u)

#define CapSense_1_BUTTON7_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button7.resolution)
#define CapSense_1_BUTTON7_RESOLUTION_OFFSET                (210u)
#define CapSense_1_BUTTON7_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON7_RESOLUTION_PARAM_ID              (0x848700D2u)

#define CapSense_1_BUTTON7_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button7.fingerTh)
#define CapSense_1_BUTTON7_FINGER_TH_OFFSET                 (212u)
#define CapSense_1_BUTTON7_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON7_FINGER_TH_PARAM_ID               (0x898700D4u)

#define CapSense_1_BUTTON7_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button7.noiseTh)
#define CapSense_1_BUTTON7_NOISE_TH_OFFSET                  (214u)
#define CapSense_1_BUTTON7_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON7_NOISE_TH_PARAM_ID                (0x4D8700D6u)

#define CapSense_1_BUTTON7_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button7.nNoiseTh)
#define CapSense_1_BUTTON7_NNOISE_TH_OFFSET                 (215u)
#define CapSense_1_BUTTON7_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON7_NNOISE_TH_PARAM_ID               (0x4B8700D7u)

#define CapSense_1_BUTTON7_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button7.hysteresis)
#define CapSense_1_BUTTON7_HYSTERESIS_OFFSET                (216u)
#define CapSense_1_BUTTON7_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON7_HYSTERESIS_PARAM_ID              (0x428700D8u)

#define CapSense_1_BUTTON7_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button7.onDebounce)
#define CapSense_1_BUTTON7_ON_DEBOUNCE_OFFSET               (217u)
#define CapSense_1_BUTTON7_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON7_ON_DEBOUNCE_PARAM_ID             (0x448700D9u)

#define CapSense_1_BUTTON7_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button7.lowBslnRst)
#define CapSense_1_BUTTON7_LOW_BSLN_RST_OFFSET              (218u)
#define CapSense_1_BUTTON7_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON7_LOW_BSLN_RST_PARAM_ID            (0x4E8700DAu)

#define CapSense_1_BUTTON7_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button7.idacMod[0u])
#define CapSense_1_BUTTON7_IDAC_MOD0_OFFSET                 (219u)
#define CapSense_1_BUTTON7_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON7_IDAC_MOD0_PARAM_ID               (0x450700DBu)

#define CapSense_1_BUTTON7_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button7.idacGainIndex)
#define CapSense_1_BUTTON7_IDAC_GAIN_INDEX_OFFSET           (220u)
#define CapSense_1_BUTTON7_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON7_IDAC_GAIN_INDEX_PARAM_ID         (0x438700DCu)

#define CapSense_1_BUTTON7_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button7.snsClk)
#define CapSense_1_BUTTON7_SNS_CLK_OFFSET                   (222u)
#define CapSense_1_BUTTON7_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON7_SNS_CLK_PARAM_ID                 (0x878700DEu)

#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button7.snsClkSource)
#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_OFFSET            (224u)
#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON7_SNS_CLK_SOURCE_PARAM_ID          (0x4F8700E0u)

#define CapSense_1_BUTTON7_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button7.fingerCap)
#define CapSense_1_BUTTON7_FINGER_CAP_OFFSET                (226u)
#define CapSense_1_BUTTON7_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON7_FINGER_CAP_PARAM_ID              (0xAD0700E2u)

#define CapSense_1_BUTTON7_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button7.sigPFC)
#define CapSense_1_BUTTON7_SIGPFC_OFFSET                    (228u)
#define CapSense_1_BUTTON7_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON7_SIGPFC_PARAM_ID                  (0xA00700E4u)

#define CapSense_1_BUTTON8_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button8.resolution)
#define CapSense_1_BUTTON8_RESOLUTION_OFFSET                (230u)
#define CapSense_1_BUTTON8_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON8_RESOLUTION_PARAM_ID              (0x828800E6u)

#define CapSense_1_BUTTON8_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button8.fingerTh)
#define CapSense_1_BUTTON8_FINGER_TH_OFFSET                 (232u)
#define CapSense_1_BUTTON8_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON8_FINGER_TH_PARAM_ID               (0x8D8800E8u)

#define CapSense_1_BUTTON8_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button8.noiseTh)
#define CapSense_1_BUTTON8_NOISE_TH_OFFSET                  (234u)
#define CapSense_1_BUTTON8_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON8_NOISE_TH_PARAM_ID                (0x498800EAu)

#define CapSense_1_BUTTON8_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button8.nNoiseTh)
#define CapSense_1_BUTTON8_NNOISE_TH_OFFSET                 (235u)
#define CapSense_1_BUTTON8_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON8_NNOISE_TH_PARAM_ID               (0x4F8800EBu)

#define CapSense_1_BUTTON8_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button8.hysteresis)
#define CapSense_1_BUTTON8_HYSTERESIS_OFFSET                (236u)
#define CapSense_1_BUTTON8_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON8_HYSTERESIS_PARAM_ID              (0x448800ECu)

#define CapSense_1_BUTTON8_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button8.onDebounce)
#define CapSense_1_BUTTON8_ON_DEBOUNCE_OFFSET               (237u)
#define CapSense_1_BUTTON8_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON8_ON_DEBOUNCE_PARAM_ID             (0x428800EDu)

#define CapSense_1_BUTTON8_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button8.lowBslnRst)
#define CapSense_1_BUTTON8_LOW_BSLN_RST_OFFSET              (238u)
#define CapSense_1_BUTTON8_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON8_LOW_BSLN_RST_PARAM_ID            (0x488800EEu)

#define CapSense_1_BUTTON8_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button8.idacMod[0u])
#define CapSense_1_BUTTON8_IDAC_MOD0_OFFSET                 (239u)
#define CapSense_1_BUTTON8_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON8_IDAC_MOD0_PARAM_ID               (0x430800EFu)

#define CapSense_1_BUTTON8_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button8.idacGainIndex)
#define CapSense_1_BUTTON8_IDAC_GAIN_INDEX_OFFSET           (240u)
#define CapSense_1_BUTTON8_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON8_IDAC_GAIN_INDEX_PARAM_ID         (0x428800F0u)

#define CapSense_1_BUTTON8_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button8.snsClk)
#define CapSense_1_BUTTON8_SNS_CLK_OFFSET                   (242u)
#define CapSense_1_BUTTON8_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON8_SNS_CLK_PARAM_ID                 (0x868800F2u)

#define CapSense_1_BUTTON8_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button8.snsClkSource)
#define CapSense_1_BUTTON8_SNS_CLK_SOURCE_OFFSET            (244u)
#define CapSense_1_BUTTON8_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON8_SNS_CLK_SOURCE_PARAM_ID          (0x438800F4u)

#define CapSense_1_BUTTON8_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button8.fingerCap)
#define CapSense_1_BUTTON8_FINGER_CAP_OFFSET                (246u)
#define CapSense_1_BUTTON8_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON8_FINGER_CAP_PARAM_ID              (0xA10800F6u)

#define CapSense_1_BUTTON8_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button8.sigPFC)
#define CapSense_1_BUTTON8_SIGPFC_OFFSET                    (248u)
#define CapSense_1_BUTTON8_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON8_SIGPFC_PARAM_ID                  (0xAE0800F8u)

#define CapSense_1_BUTTON9_RESOLUTION_VALUE                 (CapSense_1_dsRam.wdgtList.button9.resolution)
#define CapSense_1_BUTTON9_RESOLUTION_OFFSET                (250u)
#define CapSense_1_BUTTON9_RESOLUTION_SIZE                  (2u)
#define CapSense_1_BUTTON9_RESOLUTION_PARAM_ID              (0x878900FAu)

#define CapSense_1_BUTTON9_FINGER_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button9.fingerTh)
#define CapSense_1_BUTTON9_FINGER_TH_OFFSET                 (252u)
#define CapSense_1_BUTTON9_FINGER_TH_SIZE                   (2u)
#define CapSense_1_BUTTON9_FINGER_TH_PARAM_ID               (0x8A8900FCu)

#define CapSense_1_BUTTON9_NOISE_TH_VALUE                   (CapSense_1_dsRam.wdgtList.button9.noiseTh)
#define CapSense_1_BUTTON9_NOISE_TH_OFFSET                  (254u)
#define CapSense_1_BUTTON9_NOISE_TH_SIZE                    (1u)
#define CapSense_1_BUTTON9_NOISE_TH_PARAM_ID                (0x4E8900FEu)

#define CapSense_1_BUTTON9_NNOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button9.nNoiseTh)
#define CapSense_1_BUTTON9_NNOISE_TH_OFFSET                 (255u)
#define CapSense_1_BUTTON9_NNOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON9_NNOISE_TH_PARAM_ID               (0x488900FFu)

#define CapSense_1_BUTTON9_HYSTERESIS_VALUE                 (CapSense_1_dsRam.wdgtList.button9.hysteresis)
#define CapSense_1_BUTTON9_HYSTERESIS_OFFSET                (256u)
#define CapSense_1_BUTTON9_HYSTERESIS_SIZE                  (1u)
#define CapSense_1_BUTTON9_HYSTERESIS_PARAM_ID              (0x4B890100u)

#define CapSense_1_BUTTON9_ON_DEBOUNCE_VALUE                (CapSense_1_dsRam.wdgtList.button9.onDebounce)
#define CapSense_1_BUTTON9_ON_DEBOUNCE_OFFSET               (257u)
#define CapSense_1_BUTTON9_ON_DEBOUNCE_SIZE                 (1u)
#define CapSense_1_BUTTON9_ON_DEBOUNCE_PARAM_ID             (0x4D890101u)

#define CapSense_1_BUTTON9_LOW_BSLN_RST_VALUE               (CapSense_1_dsRam.wdgtList.button9.lowBslnRst)
#define CapSense_1_BUTTON9_LOW_BSLN_RST_OFFSET              (258u)
#define CapSense_1_BUTTON9_LOW_BSLN_RST_SIZE                (1u)
#define CapSense_1_BUTTON9_LOW_BSLN_RST_PARAM_ID            (0x47890102u)

#define CapSense_1_BUTTON9_IDAC_MOD0_VALUE                  (CapSense_1_dsRam.wdgtList.button9.idacMod[0u])
#define CapSense_1_BUTTON9_IDAC_MOD0_OFFSET                 (259u)
#define CapSense_1_BUTTON9_IDAC_MOD0_SIZE                   (1u)
#define CapSense_1_BUTTON9_IDAC_MOD0_PARAM_ID               (0x4C090103u)

#define CapSense_1_BUTTON9_IDAC_GAIN_INDEX_VALUE            (CapSense_1_dsRam.wdgtList.button9.idacGainIndex)
#define CapSense_1_BUTTON9_IDAC_GAIN_INDEX_OFFSET           (260u)
#define CapSense_1_BUTTON9_IDAC_GAIN_INDEX_SIZE             (1u)
#define CapSense_1_BUTTON9_IDAC_GAIN_INDEX_PARAM_ID         (0x4A890104u)

#define CapSense_1_BUTTON9_SNS_CLK_VALUE                    (CapSense_1_dsRam.wdgtList.button9.snsClk)
#define CapSense_1_BUTTON9_SNS_CLK_OFFSET                   (262u)
#define CapSense_1_BUTTON9_SNS_CLK_SIZE                     (2u)
#define CapSense_1_BUTTON9_SNS_CLK_PARAM_ID                 (0x8E890106u)

#define CapSense_1_BUTTON9_SNS_CLK_SOURCE_VALUE             (CapSense_1_dsRam.wdgtList.button9.snsClkSource)
#define CapSense_1_BUTTON9_SNS_CLK_SOURCE_OFFSET            (264u)
#define CapSense_1_BUTTON9_SNS_CLK_SOURCE_SIZE              (1u)
#define CapSense_1_BUTTON9_SNS_CLK_SOURCE_PARAM_ID          (0x49890108u)

#define CapSense_1_BUTTON9_FINGER_CAP_VALUE                 (CapSense_1_dsRam.wdgtList.button9.fingerCap)
#define CapSense_1_BUTTON9_FINGER_CAP_OFFSET                (266u)
#define CapSense_1_BUTTON9_FINGER_CAP_SIZE                  (2u)
#define CapSense_1_BUTTON9_FINGER_CAP_PARAM_ID              (0xAB09010Au)

#define CapSense_1_BUTTON9_SIGPFC_VALUE                     (CapSense_1_dsRam.wdgtList.button9.sigPFC)
#define CapSense_1_BUTTON9_SIGPFC_OFFSET                    (268u)
#define CapSense_1_BUTTON9_SIGPFC_SIZE                      (2u)
#define CapSense_1_BUTTON9_SIGPFC_PARAM_ID                  (0xA609010Cu)

#define CapSense_1_BUTTON10_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button10.resolution)
#define CapSense_1_BUTTON10_RESOLUTION_OFFSET               (270u)
#define CapSense_1_BUTTON10_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON10_RESOLUTION_PARAM_ID             (0x898A010Eu)

#define CapSense_1_BUTTON10_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button10.fingerTh)
#define CapSense_1_BUTTON10_FINGER_TH_OFFSET                (272u)
#define CapSense_1_BUTTON10_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON10_FINGER_TH_PARAM_ID              (0x838A0110u)

#define CapSense_1_BUTTON10_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button10.noiseTh)
#define CapSense_1_BUTTON10_NOISE_TH_OFFSET                 (274u)
#define CapSense_1_BUTTON10_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON10_NOISE_TH_PARAM_ID               (0x478A0112u)

#define CapSense_1_BUTTON10_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button10.nNoiseTh)
#define CapSense_1_BUTTON10_NNOISE_TH_OFFSET                (275u)
#define CapSense_1_BUTTON10_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON10_NNOISE_TH_PARAM_ID              (0x418A0113u)

#define CapSense_1_BUTTON10_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button10.hysteresis)
#define CapSense_1_BUTTON10_HYSTERESIS_OFFSET               (276u)
#define CapSense_1_BUTTON10_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON10_HYSTERESIS_PARAM_ID             (0x4A8A0114u)

#define CapSense_1_BUTTON10_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button10.onDebounce)
#define CapSense_1_BUTTON10_ON_DEBOUNCE_OFFSET              (277u)
#define CapSense_1_BUTTON10_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON10_ON_DEBOUNCE_PARAM_ID            (0x4C8A0115u)

#define CapSense_1_BUTTON10_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button10.lowBslnRst)
#define CapSense_1_BUTTON10_LOW_BSLN_RST_OFFSET             (278u)
#define CapSense_1_BUTTON10_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON10_LOW_BSLN_RST_PARAM_ID           (0x468A0116u)

#define CapSense_1_BUTTON10_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button10.idacMod[0u])
#define CapSense_1_BUTTON10_IDAC_MOD0_OFFSET                (279u)
#define CapSense_1_BUTTON10_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON10_IDAC_MOD0_PARAM_ID              (0x4D0A0117u)

#define CapSense_1_BUTTON10_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button10.idacGainIndex)
#define CapSense_1_BUTTON10_IDAC_GAIN_INDEX_OFFSET          (280u)
#define CapSense_1_BUTTON10_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON10_IDAC_GAIN_INDEX_PARAM_ID        (0x498A0118u)

#define CapSense_1_BUTTON10_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button10.snsClk)
#define CapSense_1_BUTTON10_SNS_CLK_OFFSET                  (282u)
#define CapSense_1_BUTTON10_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON10_SNS_CLK_PARAM_ID                (0x8D8A011Au)

#define CapSense_1_BUTTON10_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button10.snsClkSource)
#define CapSense_1_BUTTON10_SNS_CLK_SOURCE_OFFSET           (284u)
#define CapSense_1_BUTTON10_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON10_SNS_CLK_SOURCE_PARAM_ID         (0x488A011Cu)

#define CapSense_1_BUTTON10_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button10.fingerCap)
#define CapSense_1_BUTTON10_FINGER_CAP_OFFSET               (286u)
#define CapSense_1_BUTTON10_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON10_FINGER_CAP_PARAM_ID             (0xAA0A011Eu)

#define CapSense_1_BUTTON10_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button10.sigPFC)
#define CapSense_1_BUTTON10_SIGPFC_OFFSET                   (288u)
#define CapSense_1_BUTTON10_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON10_SIGPFC_PARAM_ID                 (0xAA0A0120u)

#define CapSense_1_BUTTON11_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button11.resolution)
#define CapSense_1_BUTTON11_RESOLUTION_OFFSET               (290u)
#define CapSense_1_BUTTON11_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON11_RESOLUTION_PARAM_ID             (0x838B0122u)

#define CapSense_1_BUTTON11_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button11.fingerTh)
#define CapSense_1_BUTTON11_FINGER_TH_OFFSET                (292u)
#define CapSense_1_BUTTON11_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON11_FINGER_TH_PARAM_ID              (0x8E8B0124u)

#define CapSense_1_BUTTON11_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button11.noiseTh)
#define CapSense_1_BUTTON11_NOISE_TH_OFFSET                 (294u)
#define CapSense_1_BUTTON11_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON11_NOISE_TH_PARAM_ID               (0x4A8B0126u)

#define CapSense_1_BUTTON11_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button11.nNoiseTh)
#define CapSense_1_BUTTON11_NNOISE_TH_OFFSET                (295u)
#define CapSense_1_BUTTON11_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON11_NNOISE_TH_PARAM_ID              (0x4C8B0127u)

#define CapSense_1_BUTTON11_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button11.hysteresis)
#define CapSense_1_BUTTON11_HYSTERESIS_OFFSET               (296u)
#define CapSense_1_BUTTON11_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON11_HYSTERESIS_PARAM_ID             (0x458B0128u)

#define CapSense_1_BUTTON11_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button11.onDebounce)
#define CapSense_1_BUTTON11_ON_DEBOUNCE_OFFSET              (297u)
#define CapSense_1_BUTTON11_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON11_ON_DEBOUNCE_PARAM_ID            (0x438B0129u)

#define CapSense_1_BUTTON11_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button11.lowBslnRst)
#define CapSense_1_BUTTON11_LOW_BSLN_RST_OFFSET             (298u)
#define CapSense_1_BUTTON11_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON11_LOW_BSLN_RST_PARAM_ID           (0x498B012Au)

#define CapSense_1_BUTTON11_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button11.idacMod[0u])
#define CapSense_1_BUTTON11_IDAC_MOD0_OFFSET                (299u)
#define CapSense_1_BUTTON11_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON11_IDAC_MOD0_PARAM_ID              (0x420B012Bu)

#define CapSense_1_BUTTON11_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button11.idacGainIndex)
#define CapSense_1_BUTTON11_IDAC_GAIN_INDEX_OFFSET          (300u)
#define CapSense_1_BUTTON11_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON11_IDAC_GAIN_INDEX_PARAM_ID        (0x448B012Cu)

#define CapSense_1_BUTTON11_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button11.snsClk)
#define CapSense_1_BUTTON11_SNS_CLK_OFFSET                  (302u)
#define CapSense_1_BUTTON11_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON11_SNS_CLK_PARAM_ID                (0x808B012Eu)

#define CapSense_1_BUTTON11_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button11.snsClkSource)
#define CapSense_1_BUTTON11_SNS_CLK_SOURCE_OFFSET           (304u)
#define CapSense_1_BUTTON11_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON11_SNS_CLK_SOURCE_PARAM_ID         (0x428B0130u)

#define CapSense_1_BUTTON11_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button11.fingerCap)
#define CapSense_1_BUTTON11_FINGER_CAP_OFFSET               (306u)
#define CapSense_1_BUTTON11_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON11_FINGER_CAP_PARAM_ID             (0xA00B0132u)

#define CapSense_1_BUTTON11_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button11.sigPFC)
#define CapSense_1_BUTTON11_SIGPFC_OFFSET                   (308u)
#define CapSense_1_BUTTON11_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON11_SIGPFC_PARAM_ID                 (0xAD0B0134u)

#define CapSense_1_BUTTON12_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button12.resolution)
#define CapSense_1_BUTTON12_RESOLUTION_OFFSET               (310u)
#define CapSense_1_BUTTON12_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON12_RESOLUTION_PARAM_ID             (0x8E8C0136u)

#define CapSense_1_BUTTON12_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button12.fingerTh)
#define CapSense_1_BUTTON12_FINGER_TH_OFFSET                (312u)
#define CapSense_1_BUTTON12_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON12_FINGER_TH_PARAM_ID              (0x818C0138u)

#define CapSense_1_BUTTON12_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button12.noiseTh)
#define CapSense_1_BUTTON12_NOISE_TH_OFFSET                 (314u)
#define CapSense_1_BUTTON12_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON12_NOISE_TH_PARAM_ID               (0x458C013Au)

#define CapSense_1_BUTTON12_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button12.nNoiseTh)
#define CapSense_1_BUTTON12_NNOISE_TH_OFFSET                (315u)
#define CapSense_1_BUTTON12_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON12_NNOISE_TH_PARAM_ID              (0x438C013Bu)

#define CapSense_1_BUTTON12_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button12.hysteresis)
#define CapSense_1_BUTTON12_HYSTERESIS_OFFSET               (316u)
#define CapSense_1_BUTTON12_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON12_HYSTERESIS_PARAM_ID             (0x488C013Cu)

#define CapSense_1_BUTTON12_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button12.onDebounce)
#define CapSense_1_BUTTON12_ON_DEBOUNCE_OFFSET              (317u)
#define CapSense_1_BUTTON12_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON12_ON_DEBOUNCE_PARAM_ID            (0x4E8C013Du)

#define CapSense_1_BUTTON12_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button12.lowBslnRst)
#define CapSense_1_BUTTON12_LOW_BSLN_RST_OFFSET             (318u)
#define CapSense_1_BUTTON12_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON12_LOW_BSLN_RST_PARAM_ID           (0x448C013Eu)

#define CapSense_1_BUTTON12_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button12.idacMod[0u])
#define CapSense_1_BUTTON12_IDAC_MOD0_OFFSET                (319u)
#define CapSense_1_BUTTON12_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON12_IDAC_MOD0_PARAM_ID              (0x4F0C013Fu)

#define CapSense_1_BUTTON12_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button12.idacGainIndex)
#define CapSense_1_BUTTON12_IDAC_GAIN_INDEX_OFFSET          (320u)
#define CapSense_1_BUTTON12_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON12_IDAC_GAIN_INDEX_PARAM_ID        (0x498C0140u)

#define CapSense_1_BUTTON12_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button12.snsClk)
#define CapSense_1_BUTTON12_SNS_CLK_OFFSET                  (322u)
#define CapSense_1_BUTTON12_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON12_SNS_CLK_PARAM_ID                (0x8D8C0142u)

#define CapSense_1_BUTTON12_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button12.snsClkSource)
#define CapSense_1_BUTTON12_SNS_CLK_SOURCE_OFFSET           (324u)
#define CapSense_1_BUTTON12_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON12_SNS_CLK_SOURCE_PARAM_ID         (0x488C0144u)

#define CapSense_1_BUTTON12_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button12.fingerCap)
#define CapSense_1_BUTTON12_FINGER_CAP_OFFSET               (326u)
#define CapSense_1_BUTTON12_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON12_FINGER_CAP_PARAM_ID             (0xAA0C0146u)

#define CapSense_1_BUTTON12_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button12.sigPFC)
#define CapSense_1_BUTTON12_SIGPFC_OFFSET                   (328u)
#define CapSense_1_BUTTON12_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON12_SIGPFC_PARAM_ID                 (0xA50C0148u)

#define CapSense_1_BUTTON13_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button13.resolution)
#define CapSense_1_BUTTON13_RESOLUTION_OFFSET               (330u)
#define CapSense_1_BUTTON13_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON13_RESOLUTION_PARAM_ID             (0x8C8D014Au)

#define CapSense_1_BUTTON13_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button13.fingerTh)
#define CapSense_1_BUTTON13_FINGER_TH_OFFSET                (332u)
#define CapSense_1_BUTTON13_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON13_FINGER_TH_PARAM_ID              (0x818D014Cu)

#define CapSense_1_BUTTON13_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button13.noiseTh)
#define CapSense_1_BUTTON13_NOISE_TH_OFFSET                 (334u)
#define CapSense_1_BUTTON13_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON13_NOISE_TH_PARAM_ID               (0x458D014Eu)

#define CapSense_1_BUTTON13_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button13.nNoiseTh)
#define CapSense_1_BUTTON13_NNOISE_TH_OFFSET                (335u)
#define CapSense_1_BUTTON13_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON13_NNOISE_TH_PARAM_ID              (0x438D014Fu)

#define CapSense_1_BUTTON13_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button13.hysteresis)
#define CapSense_1_BUTTON13_HYSTERESIS_OFFSET               (336u)
#define CapSense_1_BUTTON13_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON13_HYSTERESIS_PARAM_ID             (0x4F8D0150u)

#define CapSense_1_BUTTON13_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button13.onDebounce)
#define CapSense_1_BUTTON13_ON_DEBOUNCE_OFFSET              (337u)
#define CapSense_1_BUTTON13_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON13_ON_DEBOUNCE_PARAM_ID            (0x498D0151u)

#define CapSense_1_BUTTON13_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button13.lowBslnRst)
#define CapSense_1_BUTTON13_LOW_BSLN_RST_OFFSET             (338u)
#define CapSense_1_BUTTON13_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON13_LOW_BSLN_RST_PARAM_ID           (0x438D0152u)

#define CapSense_1_BUTTON13_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button13.idacMod[0u])
#define CapSense_1_BUTTON13_IDAC_MOD0_OFFSET                (339u)
#define CapSense_1_BUTTON13_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON13_IDAC_MOD0_PARAM_ID              (0x480D0153u)

#define CapSense_1_BUTTON13_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button13.idacGainIndex)
#define CapSense_1_BUTTON13_IDAC_GAIN_INDEX_OFFSET          (340u)
#define CapSense_1_BUTTON13_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON13_IDAC_GAIN_INDEX_PARAM_ID        (0x4E8D0154u)

#define CapSense_1_BUTTON13_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button13.snsClk)
#define CapSense_1_BUTTON13_SNS_CLK_OFFSET                  (342u)
#define CapSense_1_BUTTON13_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON13_SNS_CLK_PARAM_ID                (0x8A8D0156u)

#define CapSense_1_BUTTON13_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button13.snsClkSource)
#define CapSense_1_BUTTON13_SNS_CLK_SOURCE_OFFSET           (344u)
#define CapSense_1_BUTTON13_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON13_SNS_CLK_SOURCE_PARAM_ID         (0x4D8D0158u)

#define CapSense_1_BUTTON13_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button13.fingerCap)
#define CapSense_1_BUTTON13_FINGER_CAP_OFFSET               (346u)
#define CapSense_1_BUTTON13_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON13_FINGER_CAP_PARAM_ID             (0xAF0D015Au)

#define CapSense_1_BUTTON13_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button13.sigPFC)
#define CapSense_1_BUTTON13_SIGPFC_OFFSET                   (348u)
#define CapSense_1_BUTTON13_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON13_SIGPFC_PARAM_ID                 (0xA20D015Cu)

#define CapSense_1_BUTTON14_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button14.resolution)
#define CapSense_1_BUTTON14_RESOLUTION_OFFSET               (350u)
#define CapSense_1_BUTTON14_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON14_RESOLUTION_PARAM_ID             (0x8D8E015Eu)

#define CapSense_1_BUTTON14_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button14.fingerTh)
#define CapSense_1_BUTTON14_FINGER_TH_OFFSET                (352u)
#define CapSense_1_BUTTON14_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON14_FINGER_TH_PARAM_ID              (0x8D8E0160u)

#define CapSense_1_BUTTON14_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button14.noiseTh)
#define CapSense_1_BUTTON14_NOISE_TH_OFFSET                 (354u)
#define CapSense_1_BUTTON14_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON14_NOISE_TH_PARAM_ID               (0x498E0162u)

#define CapSense_1_BUTTON14_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button14.nNoiseTh)
#define CapSense_1_BUTTON14_NNOISE_TH_OFFSET                (355u)
#define CapSense_1_BUTTON14_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON14_NNOISE_TH_PARAM_ID              (0x4F8E0163u)

#define CapSense_1_BUTTON14_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button14.hysteresis)
#define CapSense_1_BUTTON14_HYSTERESIS_OFFSET               (356u)
#define CapSense_1_BUTTON14_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON14_HYSTERESIS_PARAM_ID             (0x448E0164u)

#define CapSense_1_BUTTON14_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button14.onDebounce)
#define CapSense_1_BUTTON14_ON_DEBOUNCE_OFFSET              (357u)
#define CapSense_1_BUTTON14_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON14_ON_DEBOUNCE_PARAM_ID            (0x428E0165u)

#define CapSense_1_BUTTON14_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button14.lowBslnRst)
#define CapSense_1_BUTTON14_LOW_BSLN_RST_OFFSET             (358u)
#define CapSense_1_BUTTON14_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON14_LOW_BSLN_RST_PARAM_ID           (0x488E0166u)

#define CapSense_1_BUTTON14_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button14.idacMod[0u])
#define CapSense_1_BUTTON14_IDAC_MOD0_OFFSET                (359u)
#define CapSense_1_BUTTON14_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON14_IDAC_MOD0_PARAM_ID              (0x430E0167u)

#define CapSense_1_BUTTON14_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button14.idacGainIndex)
#define CapSense_1_BUTTON14_IDAC_GAIN_INDEX_OFFSET          (360u)
#define CapSense_1_BUTTON14_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON14_IDAC_GAIN_INDEX_PARAM_ID        (0x478E0168u)

#define CapSense_1_BUTTON14_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button14.snsClk)
#define CapSense_1_BUTTON14_SNS_CLK_OFFSET                  (362u)
#define CapSense_1_BUTTON14_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON14_SNS_CLK_PARAM_ID                (0x838E016Au)

#define CapSense_1_BUTTON14_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button14.snsClkSource)
#define CapSense_1_BUTTON14_SNS_CLK_SOURCE_OFFSET           (364u)
#define CapSense_1_BUTTON14_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON14_SNS_CLK_SOURCE_PARAM_ID         (0x468E016Cu)

#define CapSense_1_BUTTON14_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button14.fingerCap)
#define CapSense_1_BUTTON14_FINGER_CAP_OFFSET               (366u)
#define CapSense_1_BUTTON14_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON14_FINGER_CAP_PARAM_ID             (0xA40E016Eu)

#define CapSense_1_BUTTON14_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button14.sigPFC)
#define CapSense_1_BUTTON14_SIGPFC_OFFSET                   (368u)
#define CapSense_1_BUTTON14_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON14_SIGPFC_PARAM_ID                 (0xAE0E0170u)

#define CapSense_1_BUTTON15_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button15.resolution)
#define CapSense_1_BUTTON15_RESOLUTION_OFFSET               (370u)
#define CapSense_1_BUTTON15_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON15_RESOLUTION_PARAM_ID             (0x878F0172u)

#define CapSense_1_BUTTON15_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button15.fingerTh)
#define CapSense_1_BUTTON15_FINGER_TH_OFFSET                (372u)
#define CapSense_1_BUTTON15_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON15_FINGER_TH_PARAM_ID              (0x8A8F0174u)

#define CapSense_1_BUTTON15_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button15.noiseTh)
#define CapSense_1_BUTTON15_NOISE_TH_OFFSET                 (374u)
#define CapSense_1_BUTTON15_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON15_NOISE_TH_PARAM_ID               (0x4E8F0176u)

#define CapSense_1_BUTTON15_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button15.nNoiseTh)
#define CapSense_1_BUTTON15_NNOISE_TH_OFFSET                (375u)
#define CapSense_1_BUTTON15_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON15_NNOISE_TH_PARAM_ID              (0x488F0177u)

#define CapSense_1_BUTTON15_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button15.hysteresis)
#define CapSense_1_BUTTON15_HYSTERESIS_OFFSET               (376u)
#define CapSense_1_BUTTON15_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON15_HYSTERESIS_PARAM_ID             (0x418F0178u)

#define CapSense_1_BUTTON15_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button15.onDebounce)
#define CapSense_1_BUTTON15_ON_DEBOUNCE_OFFSET              (377u)
#define CapSense_1_BUTTON15_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON15_ON_DEBOUNCE_PARAM_ID            (0x478F0179u)

#define CapSense_1_BUTTON15_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button15.lowBslnRst)
#define CapSense_1_BUTTON15_LOW_BSLN_RST_OFFSET             (378u)
#define CapSense_1_BUTTON15_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON15_LOW_BSLN_RST_PARAM_ID           (0x4D8F017Au)

#define CapSense_1_BUTTON15_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button15.idacMod[0u])
#define CapSense_1_BUTTON15_IDAC_MOD0_OFFSET                (379u)
#define CapSense_1_BUTTON15_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON15_IDAC_MOD0_PARAM_ID              (0x460F017Bu)

#define CapSense_1_BUTTON15_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button15.idacGainIndex)
#define CapSense_1_BUTTON15_IDAC_GAIN_INDEX_OFFSET          (380u)
#define CapSense_1_BUTTON15_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON15_IDAC_GAIN_INDEX_PARAM_ID        (0x408F017Cu)

#define CapSense_1_BUTTON15_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button15.snsClk)
#define CapSense_1_BUTTON15_SNS_CLK_OFFSET                  (382u)
#define CapSense_1_BUTTON15_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON15_SNS_CLK_PARAM_ID                (0x848F017Eu)

#define CapSense_1_BUTTON15_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button15.snsClkSource)
#define CapSense_1_BUTTON15_SNS_CLK_SOURCE_OFFSET           (384u)
#define CapSense_1_BUTTON15_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON15_SNS_CLK_SOURCE_PARAM_ID         (0x428F0180u)

#define CapSense_1_BUTTON15_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button15.fingerCap)
#define CapSense_1_BUTTON15_FINGER_CAP_OFFSET               (386u)
#define CapSense_1_BUTTON15_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON15_FINGER_CAP_PARAM_ID             (0xA00F0182u)

#define CapSense_1_BUTTON15_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button15.sigPFC)
#define CapSense_1_BUTTON15_SIGPFC_OFFSET                   (388u)
#define CapSense_1_BUTTON15_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON15_SIGPFC_PARAM_ID                 (0xAD0F0184u)

#define CapSense_1_BUTTON16_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button16.resolution)
#define CapSense_1_BUTTON16_RESOLUTION_OFFSET               (390u)
#define CapSense_1_BUTTON16_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON16_RESOLUTION_PARAM_ID             (0x81900186u)

#define CapSense_1_BUTTON16_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button16.fingerTh)
#define CapSense_1_BUTTON16_FINGER_TH_OFFSET                (392u)
#define CapSense_1_BUTTON16_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON16_FINGER_TH_PARAM_ID              (0x8E900188u)

#define CapSense_1_BUTTON16_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button16.noiseTh)
#define CapSense_1_BUTTON16_NOISE_TH_OFFSET                 (394u)
#define CapSense_1_BUTTON16_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON16_NOISE_TH_PARAM_ID               (0x4A90018Au)

#define CapSense_1_BUTTON16_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button16.nNoiseTh)
#define CapSense_1_BUTTON16_NNOISE_TH_OFFSET                (395u)
#define CapSense_1_BUTTON16_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON16_NNOISE_TH_PARAM_ID              (0x4C90018Bu)

#define CapSense_1_BUTTON16_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button16.hysteresis)
#define CapSense_1_BUTTON16_HYSTERESIS_OFFSET               (396u)
#define CapSense_1_BUTTON16_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON16_HYSTERESIS_PARAM_ID             (0x4790018Cu)

#define CapSense_1_BUTTON16_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button16.onDebounce)
#define CapSense_1_BUTTON16_ON_DEBOUNCE_OFFSET              (397u)
#define CapSense_1_BUTTON16_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON16_ON_DEBOUNCE_PARAM_ID            (0x4190018Du)

#define CapSense_1_BUTTON16_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button16.lowBslnRst)
#define CapSense_1_BUTTON16_LOW_BSLN_RST_OFFSET             (398u)
#define CapSense_1_BUTTON16_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON16_LOW_BSLN_RST_PARAM_ID           (0x4B90018Eu)

#define CapSense_1_BUTTON16_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button16.idacMod[0u])
#define CapSense_1_BUTTON16_IDAC_MOD0_OFFSET                (399u)
#define CapSense_1_BUTTON16_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON16_IDAC_MOD0_PARAM_ID              (0x4010018Fu)

#define CapSense_1_BUTTON16_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button16.idacGainIndex)
#define CapSense_1_BUTTON16_IDAC_GAIN_INDEX_OFFSET          (400u)
#define CapSense_1_BUTTON16_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON16_IDAC_GAIN_INDEX_PARAM_ID        (0x41900190u)

#define CapSense_1_BUTTON16_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button16.snsClk)
#define CapSense_1_BUTTON16_SNS_CLK_OFFSET                  (402u)
#define CapSense_1_BUTTON16_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON16_SNS_CLK_PARAM_ID                (0x85900192u)

#define CapSense_1_BUTTON16_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button16.snsClkSource)
#define CapSense_1_BUTTON16_SNS_CLK_SOURCE_OFFSET           (404u)
#define CapSense_1_BUTTON16_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON16_SNS_CLK_SOURCE_PARAM_ID         (0x40900194u)

#define CapSense_1_BUTTON16_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button16.fingerCap)
#define CapSense_1_BUTTON16_FINGER_CAP_OFFSET               (406u)
#define CapSense_1_BUTTON16_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON16_FINGER_CAP_PARAM_ID             (0xA2100196u)

#define CapSense_1_BUTTON16_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button16.sigPFC)
#define CapSense_1_BUTTON16_SIGPFC_OFFSET                   (408u)
#define CapSense_1_BUTTON16_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON16_SIGPFC_PARAM_ID                 (0xAD100198u)

#define CapSense_1_BUTTON17_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button17.resolution)
#define CapSense_1_BUTTON17_RESOLUTION_OFFSET               (410u)
#define CapSense_1_BUTTON17_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON17_RESOLUTION_PARAM_ID             (0x8491019Au)

#define CapSense_1_BUTTON17_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button17.fingerTh)
#define CapSense_1_BUTTON17_FINGER_TH_OFFSET                (412u)
#define CapSense_1_BUTTON17_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON17_FINGER_TH_PARAM_ID              (0x8991019Cu)

#define CapSense_1_BUTTON17_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button17.noiseTh)
#define CapSense_1_BUTTON17_NOISE_TH_OFFSET                 (414u)
#define CapSense_1_BUTTON17_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON17_NOISE_TH_PARAM_ID               (0x4D91019Eu)

#define CapSense_1_BUTTON17_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button17.nNoiseTh)
#define CapSense_1_BUTTON17_NNOISE_TH_OFFSET                (415u)
#define CapSense_1_BUTTON17_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON17_NNOISE_TH_PARAM_ID              (0x4B91019Fu)

#define CapSense_1_BUTTON17_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button17.hysteresis)
#define CapSense_1_BUTTON17_HYSTERESIS_OFFSET               (416u)
#define CapSense_1_BUTTON17_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON17_HYSTERESIS_PARAM_ID             (0x4D9101A0u)

#define CapSense_1_BUTTON17_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button17.onDebounce)
#define CapSense_1_BUTTON17_ON_DEBOUNCE_OFFSET              (417u)
#define CapSense_1_BUTTON17_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON17_ON_DEBOUNCE_PARAM_ID            (0x4B9101A1u)

#define CapSense_1_BUTTON17_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button17.lowBslnRst)
#define CapSense_1_BUTTON17_LOW_BSLN_RST_OFFSET             (418u)
#define CapSense_1_BUTTON17_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON17_LOW_BSLN_RST_PARAM_ID           (0x419101A2u)

#define CapSense_1_BUTTON17_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button17.idacMod[0u])
#define CapSense_1_BUTTON17_IDAC_MOD0_OFFSET                (419u)
#define CapSense_1_BUTTON17_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON17_IDAC_MOD0_PARAM_ID              (0x4A1101A3u)

#define CapSense_1_BUTTON17_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button17.idacGainIndex)
#define CapSense_1_BUTTON17_IDAC_GAIN_INDEX_OFFSET          (420u)
#define CapSense_1_BUTTON17_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON17_IDAC_GAIN_INDEX_PARAM_ID        (0x4C9101A4u)

#define CapSense_1_BUTTON17_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button17.snsClk)
#define CapSense_1_BUTTON17_SNS_CLK_OFFSET                  (422u)
#define CapSense_1_BUTTON17_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON17_SNS_CLK_PARAM_ID                (0x889101A6u)

#define CapSense_1_BUTTON17_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button17.snsClkSource)
#define CapSense_1_BUTTON17_SNS_CLK_SOURCE_OFFSET           (424u)
#define CapSense_1_BUTTON17_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON17_SNS_CLK_SOURCE_PARAM_ID         (0x4F9101A8u)

#define CapSense_1_BUTTON17_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button17.fingerCap)
#define CapSense_1_BUTTON17_FINGER_CAP_OFFSET               (426u)
#define CapSense_1_BUTTON17_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON17_FINGER_CAP_PARAM_ID             (0xAD1101AAu)

#define CapSense_1_BUTTON17_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button17.sigPFC)
#define CapSense_1_BUTTON17_SIGPFC_OFFSET                   (428u)
#define CapSense_1_BUTTON17_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON17_SIGPFC_PARAM_ID                 (0xA01101ACu)

#define CapSense_1_BUTTON18_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button18.resolution)
#define CapSense_1_BUTTON18_RESOLUTION_OFFSET               (430u)
#define CapSense_1_BUTTON18_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON18_RESOLUTION_PARAM_ID             (0x8F9201AEu)

#define CapSense_1_BUTTON18_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button18.fingerTh)
#define CapSense_1_BUTTON18_FINGER_TH_OFFSET                (432u)
#define CapSense_1_BUTTON18_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON18_FINGER_TH_PARAM_ID              (0x859201B0u)

#define CapSense_1_BUTTON18_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button18.noiseTh)
#define CapSense_1_BUTTON18_NOISE_TH_OFFSET                 (434u)
#define CapSense_1_BUTTON18_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON18_NOISE_TH_PARAM_ID               (0x419201B2u)

#define CapSense_1_BUTTON18_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button18.nNoiseTh)
#define CapSense_1_BUTTON18_NNOISE_TH_OFFSET                (435u)
#define CapSense_1_BUTTON18_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON18_NNOISE_TH_PARAM_ID              (0x479201B3u)

#define CapSense_1_BUTTON18_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button18.hysteresis)
#define CapSense_1_BUTTON18_HYSTERESIS_OFFSET               (436u)
#define CapSense_1_BUTTON18_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON18_HYSTERESIS_PARAM_ID             (0x4C9201B4u)

#define CapSense_1_BUTTON18_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button18.onDebounce)
#define CapSense_1_BUTTON18_ON_DEBOUNCE_OFFSET              (437u)
#define CapSense_1_BUTTON18_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON18_ON_DEBOUNCE_PARAM_ID            (0x4A9201B5u)

#define CapSense_1_BUTTON18_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button18.lowBslnRst)
#define CapSense_1_BUTTON18_LOW_BSLN_RST_OFFSET             (438u)
#define CapSense_1_BUTTON18_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON18_LOW_BSLN_RST_PARAM_ID           (0x409201B6u)

#define CapSense_1_BUTTON18_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button18.idacMod[0u])
#define CapSense_1_BUTTON18_IDAC_MOD0_OFFSET                (439u)
#define CapSense_1_BUTTON18_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON18_IDAC_MOD0_PARAM_ID              (0x4B1201B7u)

#define CapSense_1_BUTTON18_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button18.idacGainIndex)
#define CapSense_1_BUTTON18_IDAC_GAIN_INDEX_OFFSET          (440u)
#define CapSense_1_BUTTON18_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON18_IDAC_GAIN_INDEX_PARAM_ID        (0x4F9201B8u)

#define CapSense_1_BUTTON18_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button18.snsClk)
#define CapSense_1_BUTTON18_SNS_CLK_OFFSET                  (442u)
#define CapSense_1_BUTTON18_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON18_SNS_CLK_PARAM_ID                (0x8B9201BAu)

#define CapSense_1_BUTTON18_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button18.snsClkSource)
#define CapSense_1_BUTTON18_SNS_CLK_SOURCE_OFFSET           (444u)
#define CapSense_1_BUTTON18_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON18_SNS_CLK_SOURCE_PARAM_ID         (0x4E9201BCu)

#define CapSense_1_BUTTON18_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button18.fingerCap)
#define CapSense_1_BUTTON18_FINGER_CAP_OFFSET               (446u)
#define CapSense_1_BUTTON18_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON18_FINGER_CAP_PARAM_ID             (0xAC1201BEu)

#define CapSense_1_BUTTON18_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button18.sigPFC)
#define CapSense_1_BUTTON18_SIGPFC_OFFSET                   (448u)
#define CapSense_1_BUTTON18_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON18_SIGPFC_PARAM_ID                 (0xA11201C0u)

#define CapSense_1_BUTTON19_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button19.resolution)
#define CapSense_1_BUTTON19_RESOLUTION_OFFSET               (450u)
#define CapSense_1_BUTTON19_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON19_RESOLUTION_PARAM_ID             (0x889301C2u)

#define CapSense_1_BUTTON19_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button19.fingerTh)
#define CapSense_1_BUTTON19_FINGER_TH_OFFSET                (452u)
#define CapSense_1_BUTTON19_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON19_FINGER_TH_PARAM_ID              (0x859301C4u)

#define CapSense_1_BUTTON19_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button19.noiseTh)
#define CapSense_1_BUTTON19_NOISE_TH_OFFSET                 (454u)
#define CapSense_1_BUTTON19_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON19_NOISE_TH_PARAM_ID               (0x419301C6u)

#define CapSense_1_BUTTON19_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button19.nNoiseTh)
#define CapSense_1_BUTTON19_NNOISE_TH_OFFSET                (455u)
#define CapSense_1_BUTTON19_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON19_NNOISE_TH_PARAM_ID              (0x479301C7u)

#define CapSense_1_BUTTON19_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button19.hysteresis)
#define CapSense_1_BUTTON19_HYSTERESIS_OFFSET               (456u)
#define CapSense_1_BUTTON19_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON19_HYSTERESIS_PARAM_ID             (0x4E9301C8u)

#define CapSense_1_BUTTON19_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button19.onDebounce)
#define CapSense_1_BUTTON19_ON_DEBOUNCE_OFFSET              (457u)
#define CapSense_1_BUTTON19_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON19_ON_DEBOUNCE_PARAM_ID            (0x489301C9u)

#define CapSense_1_BUTTON19_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button19.lowBslnRst)
#define CapSense_1_BUTTON19_LOW_BSLN_RST_OFFSET             (458u)
#define CapSense_1_BUTTON19_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON19_LOW_BSLN_RST_PARAM_ID           (0x429301CAu)

#define CapSense_1_BUTTON19_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button19.idacMod[0u])
#define CapSense_1_BUTTON19_IDAC_MOD0_OFFSET                (459u)
#define CapSense_1_BUTTON19_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON19_IDAC_MOD0_PARAM_ID              (0x491301CBu)

#define CapSense_1_BUTTON19_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button19.idacGainIndex)
#define CapSense_1_BUTTON19_IDAC_GAIN_INDEX_OFFSET          (460u)
#define CapSense_1_BUTTON19_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON19_IDAC_GAIN_INDEX_PARAM_ID        (0x4F9301CCu)

#define CapSense_1_BUTTON19_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button19.snsClk)
#define CapSense_1_BUTTON19_SNS_CLK_OFFSET                  (462u)
#define CapSense_1_BUTTON19_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON19_SNS_CLK_PARAM_ID                (0x8B9301CEu)

#define CapSense_1_BUTTON19_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button19.snsClkSource)
#define CapSense_1_BUTTON19_SNS_CLK_SOURCE_OFFSET           (464u)
#define CapSense_1_BUTTON19_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON19_SNS_CLK_SOURCE_PARAM_ID         (0x499301D0u)

#define CapSense_1_BUTTON19_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button19.fingerCap)
#define CapSense_1_BUTTON19_FINGER_CAP_OFFSET               (466u)
#define CapSense_1_BUTTON19_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON19_FINGER_CAP_PARAM_ID             (0xAB1301D2u)

#define CapSense_1_BUTTON19_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button19.sigPFC)
#define CapSense_1_BUTTON19_SIGPFC_OFFSET                   (468u)
#define CapSense_1_BUTTON19_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON19_SIGPFC_PARAM_ID                 (0xA61301D4u)

#define CapSense_1_BUTTON20_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button20.resolution)
#define CapSense_1_BUTTON20_RESOLUTION_OFFSET               (470u)
#define CapSense_1_BUTTON20_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON20_RESOLUTION_PARAM_ID             (0x859401D6u)

#define CapSense_1_BUTTON20_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button20.fingerTh)
#define CapSense_1_BUTTON20_FINGER_TH_OFFSET                (472u)
#define CapSense_1_BUTTON20_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON20_FINGER_TH_PARAM_ID              (0x8A9401D8u)

#define CapSense_1_BUTTON20_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button20.noiseTh)
#define CapSense_1_BUTTON20_NOISE_TH_OFFSET                 (474u)
#define CapSense_1_BUTTON20_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON20_NOISE_TH_PARAM_ID               (0x4E9401DAu)

#define CapSense_1_BUTTON20_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button20.nNoiseTh)
#define CapSense_1_BUTTON20_NNOISE_TH_OFFSET                (475u)
#define CapSense_1_BUTTON20_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON20_NNOISE_TH_PARAM_ID              (0x489401DBu)

#define CapSense_1_BUTTON20_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button20.hysteresis)
#define CapSense_1_BUTTON20_HYSTERESIS_OFFSET               (476u)
#define CapSense_1_BUTTON20_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON20_HYSTERESIS_PARAM_ID             (0x439401DCu)

#define CapSense_1_BUTTON20_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button20.onDebounce)
#define CapSense_1_BUTTON20_ON_DEBOUNCE_OFFSET              (477u)
#define CapSense_1_BUTTON20_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON20_ON_DEBOUNCE_PARAM_ID            (0x459401DDu)

#define CapSense_1_BUTTON20_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button20.lowBslnRst)
#define CapSense_1_BUTTON20_LOW_BSLN_RST_OFFSET             (478u)
#define CapSense_1_BUTTON20_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON20_LOW_BSLN_RST_PARAM_ID           (0x4F9401DEu)

#define CapSense_1_BUTTON20_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button20.idacMod[0u])
#define CapSense_1_BUTTON20_IDAC_MOD0_OFFSET                (479u)
#define CapSense_1_BUTTON20_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON20_IDAC_MOD0_PARAM_ID              (0x441401DFu)

#define CapSense_1_BUTTON20_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button20.idacGainIndex)
#define CapSense_1_BUTTON20_IDAC_GAIN_INDEX_OFFSET          (480u)
#define CapSense_1_BUTTON20_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON20_IDAC_GAIN_INDEX_PARAM_ID        (0x4F9401E0u)

#define CapSense_1_BUTTON20_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button20.snsClk)
#define CapSense_1_BUTTON20_SNS_CLK_OFFSET                  (482u)
#define CapSense_1_BUTTON20_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON20_SNS_CLK_PARAM_ID                (0x8B9401E2u)

#define CapSense_1_BUTTON20_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button20.snsClkSource)
#define CapSense_1_BUTTON20_SNS_CLK_SOURCE_OFFSET           (484u)
#define CapSense_1_BUTTON20_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON20_SNS_CLK_SOURCE_PARAM_ID         (0x4E9401E4u)

#define CapSense_1_BUTTON20_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button20.fingerCap)
#define CapSense_1_BUTTON20_FINGER_CAP_OFFSET               (486u)
#define CapSense_1_BUTTON20_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON20_FINGER_CAP_PARAM_ID             (0xAC1401E6u)

#define CapSense_1_BUTTON20_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button20.sigPFC)
#define CapSense_1_BUTTON20_SIGPFC_OFFSET                   (488u)
#define CapSense_1_BUTTON20_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON20_SIGPFC_PARAM_ID                 (0xA31401E8u)

#define CapSense_1_BUTTON21_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button21.resolution)
#define CapSense_1_BUTTON21_RESOLUTION_OFFSET               (490u)
#define CapSense_1_BUTTON21_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON21_RESOLUTION_PARAM_ID             (0x8A9501EAu)

#define CapSense_1_BUTTON21_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button21.fingerTh)
#define CapSense_1_BUTTON21_FINGER_TH_OFFSET                (492u)
#define CapSense_1_BUTTON21_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON21_FINGER_TH_PARAM_ID              (0x879501ECu)

#define CapSense_1_BUTTON21_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button21.noiseTh)
#define CapSense_1_BUTTON21_NOISE_TH_OFFSET                 (494u)
#define CapSense_1_BUTTON21_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON21_NOISE_TH_PARAM_ID               (0x439501EEu)

#define CapSense_1_BUTTON21_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button21.nNoiseTh)
#define CapSense_1_BUTTON21_NNOISE_TH_OFFSET                (495u)
#define CapSense_1_BUTTON21_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON21_NNOISE_TH_PARAM_ID              (0x459501EFu)

#define CapSense_1_BUTTON21_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button21.hysteresis)
#define CapSense_1_BUTTON21_HYSTERESIS_OFFSET               (496u)
#define CapSense_1_BUTTON21_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON21_HYSTERESIS_PARAM_ID             (0x499501F0u)

#define CapSense_1_BUTTON21_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button21.onDebounce)
#define CapSense_1_BUTTON21_ON_DEBOUNCE_OFFSET              (497u)
#define CapSense_1_BUTTON21_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON21_ON_DEBOUNCE_PARAM_ID            (0x4F9501F1u)

#define CapSense_1_BUTTON21_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button21.lowBslnRst)
#define CapSense_1_BUTTON21_LOW_BSLN_RST_OFFSET             (498u)
#define CapSense_1_BUTTON21_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON21_LOW_BSLN_RST_PARAM_ID           (0x459501F2u)

#define CapSense_1_BUTTON21_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button21.idacMod[0u])
#define CapSense_1_BUTTON21_IDAC_MOD0_OFFSET                (499u)
#define CapSense_1_BUTTON21_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON21_IDAC_MOD0_PARAM_ID              (0x4E1501F3u)

#define CapSense_1_BUTTON21_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button21.idacGainIndex)
#define CapSense_1_BUTTON21_IDAC_GAIN_INDEX_OFFSET          (500u)
#define CapSense_1_BUTTON21_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON21_IDAC_GAIN_INDEX_PARAM_ID        (0x489501F4u)

#define CapSense_1_BUTTON21_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button21.snsClk)
#define CapSense_1_BUTTON21_SNS_CLK_OFFSET                  (502u)
#define CapSense_1_BUTTON21_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON21_SNS_CLK_PARAM_ID                (0x8C9501F6u)

#define CapSense_1_BUTTON21_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button21.snsClkSource)
#define CapSense_1_BUTTON21_SNS_CLK_SOURCE_OFFSET           (504u)
#define CapSense_1_BUTTON21_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON21_SNS_CLK_SOURCE_PARAM_ID         (0x4B9501F8u)

#define CapSense_1_BUTTON21_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button21.fingerCap)
#define CapSense_1_BUTTON21_FINGER_CAP_OFFSET               (506u)
#define CapSense_1_BUTTON21_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON21_FINGER_CAP_PARAM_ID             (0xA91501FAu)

#define CapSense_1_BUTTON21_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button21.sigPFC)
#define CapSense_1_BUTTON21_SIGPFC_OFFSET                   (508u)
#define CapSense_1_BUTTON21_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON21_SIGPFC_PARAM_ID                 (0xA41501FCu)

#define CapSense_1_BUTTON22_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button22.resolution)
#define CapSense_1_BUTTON22_RESOLUTION_OFFSET               (510u)
#define CapSense_1_BUTTON22_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON22_RESOLUTION_PARAM_ID             (0x8B9601FEu)

#define CapSense_1_BUTTON22_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button22.fingerTh)
#define CapSense_1_BUTTON22_FINGER_TH_OFFSET                (512u)
#define CapSense_1_BUTTON22_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON22_FINGER_TH_PARAM_ID              (0x81960200u)

#define CapSense_1_BUTTON22_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button22.noiseTh)
#define CapSense_1_BUTTON22_NOISE_TH_OFFSET                 (514u)
#define CapSense_1_BUTTON22_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON22_NOISE_TH_PARAM_ID               (0x45960202u)

#define CapSense_1_BUTTON22_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button22.nNoiseTh)
#define CapSense_1_BUTTON22_NNOISE_TH_OFFSET                (515u)
#define CapSense_1_BUTTON22_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON22_NNOISE_TH_PARAM_ID              (0x43960203u)

#define CapSense_1_BUTTON22_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button22.hysteresis)
#define CapSense_1_BUTTON22_HYSTERESIS_OFFSET               (516u)
#define CapSense_1_BUTTON22_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON22_HYSTERESIS_PARAM_ID             (0x48960204u)

#define CapSense_1_BUTTON22_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button22.onDebounce)
#define CapSense_1_BUTTON22_ON_DEBOUNCE_OFFSET              (517u)
#define CapSense_1_BUTTON22_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON22_ON_DEBOUNCE_PARAM_ID            (0x4E960205u)

#define CapSense_1_BUTTON22_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button22.lowBslnRst)
#define CapSense_1_BUTTON22_LOW_BSLN_RST_OFFSET             (518u)
#define CapSense_1_BUTTON22_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON22_LOW_BSLN_RST_PARAM_ID           (0x44960206u)

#define CapSense_1_BUTTON22_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button22.idacMod[0u])
#define CapSense_1_BUTTON22_IDAC_MOD0_OFFSET                (519u)
#define CapSense_1_BUTTON22_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON22_IDAC_MOD0_PARAM_ID              (0x4F160207u)

#define CapSense_1_BUTTON22_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button22.idacGainIndex)
#define CapSense_1_BUTTON22_IDAC_GAIN_INDEX_OFFSET          (520u)
#define CapSense_1_BUTTON22_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON22_IDAC_GAIN_INDEX_PARAM_ID        (0x4B960208u)

#define CapSense_1_BUTTON22_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button22.snsClk)
#define CapSense_1_BUTTON22_SNS_CLK_OFFSET                  (522u)
#define CapSense_1_BUTTON22_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON22_SNS_CLK_PARAM_ID                (0x8F96020Au)

#define CapSense_1_BUTTON22_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button22.snsClkSource)
#define CapSense_1_BUTTON22_SNS_CLK_SOURCE_OFFSET           (524u)
#define CapSense_1_BUTTON22_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON22_SNS_CLK_SOURCE_PARAM_ID         (0x4A96020Cu)

#define CapSense_1_BUTTON22_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button22.fingerCap)
#define CapSense_1_BUTTON22_FINGER_CAP_OFFSET               (526u)
#define CapSense_1_BUTTON22_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON22_FINGER_CAP_PARAM_ID             (0xA816020Eu)

#define CapSense_1_BUTTON22_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button22.sigPFC)
#define CapSense_1_BUTTON22_SIGPFC_OFFSET                   (528u)
#define CapSense_1_BUTTON22_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON22_SIGPFC_PARAM_ID                 (0xA2160210u)

#define CapSense_1_BUTTON23_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button23.resolution)
#define CapSense_1_BUTTON23_RESOLUTION_OFFSET               (530u)
#define CapSense_1_BUTTON23_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON23_RESOLUTION_PARAM_ID             (0x8B970212u)

#define CapSense_1_BUTTON23_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button23.fingerTh)
#define CapSense_1_BUTTON23_FINGER_TH_OFFSET                (532u)
#define CapSense_1_BUTTON23_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON23_FINGER_TH_PARAM_ID              (0x86970214u)

#define CapSense_1_BUTTON23_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button23.noiseTh)
#define CapSense_1_BUTTON23_NOISE_TH_OFFSET                 (534u)
#define CapSense_1_BUTTON23_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON23_NOISE_TH_PARAM_ID               (0x42970216u)

#define CapSense_1_BUTTON23_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button23.nNoiseTh)
#define CapSense_1_BUTTON23_NNOISE_TH_OFFSET                (535u)
#define CapSense_1_BUTTON23_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON23_NNOISE_TH_PARAM_ID              (0x44970217u)

#define CapSense_1_BUTTON23_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button23.hysteresis)
#define CapSense_1_BUTTON23_HYSTERESIS_OFFSET               (536u)
#define CapSense_1_BUTTON23_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON23_HYSTERESIS_PARAM_ID             (0x4D970218u)

#define CapSense_1_BUTTON23_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button23.onDebounce)
#define CapSense_1_BUTTON23_ON_DEBOUNCE_OFFSET              (537u)
#define CapSense_1_BUTTON23_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON23_ON_DEBOUNCE_PARAM_ID            (0x4B970219u)

#define CapSense_1_BUTTON23_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button23.lowBslnRst)
#define CapSense_1_BUTTON23_LOW_BSLN_RST_OFFSET             (538u)
#define CapSense_1_BUTTON23_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON23_LOW_BSLN_RST_PARAM_ID           (0x4197021Au)

#define CapSense_1_BUTTON23_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button23.idacMod[0u])
#define CapSense_1_BUTTON23_IDAC_MOD0_OFFSET                (539u)
#define CapSense_1_BUTTON23_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON23_IDAC_MOD0_PARAM_ID              (0x4A17021Bu)

#define CapSense_1_BUTTON23_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button23.idacGainIndex)
#define CapSense_1_BUTTON23_IDAC_GAIN_INDEX_OFFSET          (540u)
#define CapSense_1_BUTTON23_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON23_IDAC_GAIN_INDEX_PARAM_ID        (0x4C97021Cu)

#define CapSense_1_BUTTON23_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button23.snsClk)
#define CapSense_1_BUTTON23_SNS_CLK_OFFSET                  (542u)
#define CapSense_1_BUTTON23_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON23_SNS_CLK_PARAM_ID                (0x8897021Eu)

#define CapSense_1_BUTTON23_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button23.snsClkSource)
#define CapSense_1_BUTTON23_SNS_CLK_SOURCE_OFFSET           (544u)
#define CapSense_1_BUTTON23_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON23_SNS_CLK_SOURCE_PARAM_ID         (0x40970220u)

#define CapSense_1_BUTTON23_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button23.fingerCap)
#define CapSense_1_BUTTON23_FINGER_CAP_OFFSET               (546u)
#define CapSense_1_BUTTON23_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON23_FINGER_CAP_PARAM_ID             (0xA2170222u)

#define CapSense_1_BUTTON23_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button23.sigPFC)
#define CapSense_1_BUTTON23_SIGPFC_OFFSET                   (548u)
#define CapSense_1_BUTTON23_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON23_SIGPFC_PARAM_ID                 (0xAF170224u)

#define CapSense_1_BUTTON24_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button24.resolution)
#define CapSense_1_BUTTON24_RESOLUTION_OFFSET               (550u)
#define CapSense_1_BUTTON24_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON24_RESOLUTION_PARAM_ID             (0x8D980226u)

#define CapSense_1_BUTTON24_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button24.fingerTh)
#define CapSense_1_BUTTON24_FINGER_TH_OFFSET                (552u)
#define CapSense_1_BUTTON24_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON24_FINGER_TH_PARAM_ID              (0x82980228u)

#define CapSense_1_BUTTON24_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button24.noiseTh)
#define CapSense_1_BUTTON24_NOISE_TH_OFFSET                 (554u)
#define CapSense_1_BUTTON24_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON24_NOISE_TH_PARAM_ID               (0x4698022Au)

#define CapSense_1_BUTTON24_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button24.nNoiseTh)
#define CapSense_1_BUTTON24_NNOISE_TH_OFFSET                (555u)
#define CapSense_1_BUTTON24_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON24_NNOISE_TH_PARAM_ID              (0x4098022Bu)

#define CapSense_1_BUTTON24_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button24.hysteresis)
#define CapSense_1_BUTTON24_HYSTERESIS_OFFSET               (556u)
#define CapSense_1_BUTTON24_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON24_HYSTERESIS_PARAM_ID             (0x4B98022Cu)

#define CapSense_1_BUTTON24_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button24.onDebounce)
#define CapSense_1_BUTTON24_ON_DEBOUNCE_OFFSET              (557u)
#define CapSense_1_BUTTON24_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON24_ON_DEBOUNCE_PARAM_ID            (0x4D98022Du)

#define CapSense_1_BUTTON24_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button24.lowBslnRst)
#define CapSense_1_BUTTON24_LOW_BSLN_RST_OFFSET             (558u)
#define CapSense_1_BUTTON24_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON24_LOW_BSLN_RST_PARAM_ID           (0x4798022Eu)

#define CapSense_1_BUTTON24_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button24.idacMod[0u])
#define CapSense_1_BUTTON24_IDAC_MOD0_OFFSET                (559u)
#define CapSense_1_BUTTON24_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON24_IDAC_MOD0_PARAM_ID              (0x4C18022Fu)

#define CapSense_1_BUTTON24_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button24.idacGainIndex)
#define CapSense_1_BUTTON24_IDAC_GAIN_INDEX_OFFSET          (560u)
#define CapSense_1_BUTTON24_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON24_IDAC_GAIN_INDEX_PARAM_ID        (0x4D980230u)

#define CapSense_1_BUTTON24_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button24.snsClk)
#define CapSense_1_BUTTON24_SNS_CLK_OFFSET                  (562u)
#define CapSense_1_BUTTON24_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON24_SNS_CLK_PARAM_ID                (0x89980232u)

#define CapSense_1_BUTTON24_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button24.snsClkSource)
#define CapSense_1_BUTTON24_SNS_CLK_SOURCE_OFFSET           (564u)
#define CapSense_1_BUTTON24_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON24_SNS_CLK_SOURCE_PARAM_ID         (0x4C980234u)

#define CapSense_1_BUTTON24_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button24.fingerCap)
#define CapSense_1_BUTTON24_FINGER_CAP_OFFSET               (566u)
#define CapSense_1_BUTTON24_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON24_FINGER_CAP_PARAM_ID             (0xAE180236u)

#define CapSense_1_BUTTON24_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button24.sigPFC)
#define CapSense_1_BUTTON24_SIGPFC_OFFSET                   (568u)
#define CapSense_1_BUTTON24_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON24_SIGPFC_PARAM_ID                 (0xA1180238u)

#define CapSense_1_BUTTON25_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button25.resolution)
#define CapSense_1_BUTTON25_RESOLUTION_OFFSET               (570u)
#define CapSense_1_BUTTON25_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON25_RESOLUTION_PARAM_ID             (0x8899023Au)

#define CapSense_1_BUTTON25_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button25.fingerTh)
#define CapSense_1_BUTTON25_FINGER_TH_OFFSET                (572u)
#define CapSense_1_BUTTON25_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON25_FINGER_TH_PARAM_ID              (0x8599023Cu)

#define CapSense_1_BUTTON25_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button25.noiseTh)
#define CapSense_1_BUTTON25_NOISE_TH_OFFSET                 (574u)
#define CapSense_1_BUTTON25_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON25_NOISE_TH_PARAM_ID               (0x4199023Eu)

#define CapSense_1_BUTTON25_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button25.nNoiseTh)
#define CapSense_1_BUTTON25_NNOISE_TH_OFFSET                (575u)
#define CapSense_1_BUTTON25_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON25_NNOISE_TH_PARAM_ID              (0x4799023Fu)

#define CapSense_1_BUTTON25_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button25.hysteresis)
#define CapSense_1_BUTTON25_HYSTERESIS_OFFSET               (576u)
#define CapSense_1_BUTTON25_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON25_HYSTERESIS_PARAM_ID             (0x4C990240u)

#define CapSense_1_BUTTON25_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button25.onDebounce)
#define CapSense_1_BUTTON25_ON_DEBOUNCE_OFFSET              (577u)
#define CapSense_1_BUTTON25_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON25_ON_DEBOUNCE_PARAM_ID            (0x4A990241u)

#define CapSense_1_BUTTON25_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button25.lowBslnRst)
#define CapSense_1_BUTTON25_LOW_BSLN_RST_OFFSET             (578u)
#define CapSense_1_BUTTON25_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON25_LOW_BSLN_RST_PARAM_ID           (0x40990242u)

#define CapSense_1_BUTTON25_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button25.idacMod[0u])
#define CapSense_1_BUTTON25_IDAC_MOD0_OFFSET                (579u)
#define CapSense_1_BUTTON25_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON25_IDAC_MOD0_PARAM_ID              (0x4B190243u)

#define CapSense_1_BUTTON25_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button25.idacGainIndex)
#define CapSense_1_BUTTON25_IDAC_GAIN_INDEX_OFFSET          (580u)
#define CapSense_1_BUTTON25_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON25_IDAC_GAIN_INDEX_PARAM_ID        (0x4D990244u)

#define CapSense_1_BUTTON25_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button25.snsClk)
#define CapSense_1_BUTTON25_SNS_CLK_OFFSET                  (582u)
#define CapSense_1_BUTTON25_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON25_SNS_CLK_PARAM_ID                (0x89990246u)

#define CapSense_1_BUTTON25_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button25.snsClkSource)
#define CapSense_1_BUTTON25_SNS_CLK_SOURCE_OFFSET           (584u)
#define CapSense_1_BUTTON25_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON25_SNS_CLK_SOURCE_PARAM_ID         (0x4E990248u)

#define CapSense_1_BUTTON25_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button25.fingerCap)
#define CapSense_1_BUTTON25_FINGER_CAP_OFFSET               (586u)
#define CapSense_1_BUTTON25_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON25_FINGER_CAP_PARAM_ID             (0xAC19024Au)

#define CapSense_1_BUTTON25_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button25.sigPFC)
#define CapSense_1_BUTTON25_SIGPFC_OFFSET                   (588u)
#define CapSense_1_BUTTON25_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON25_SIGPFC_PARAM_ID                 (0xA119024Cu)

#define CapSense_1_BUTTON26_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button26.resolution)
#define CapSense_1_BUTTON26_RESOLUTION_OFFSET               (590u)
#define CapSense_1_BUTTON26_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON26_RESOLUTION_PARAM_ID             (0x8E9A024Eu)

#define CapSense_1_BUTTON26_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button26.fingerTh)
#define CapSense_1_BUTTON26_FINGER_TH_OFFSET                (592u)
#define CapSense_1_BUTTON26_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON26_FINGER_TH_PARAM_ID              (0x849A0250u)

#define CapSense_1_BUTTON26_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button26.noiseTh)
#define CapSense_1_BUTTON26_NOISE_TH_OFFSET                 (594u)
#define CapSense_1_BUTTON26_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON26_NOISE_TH_PARAM_ID               (0x409A0252u)

#define CapSense_1_BUTTON26_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button26.nNoiseTh)
#define CapSense_1_BUTTON26_NNOISE_TH_OFFSET                (595u)
#define CapSense_1_BUTTON26_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON26_NNOISE_TH_PARAM_ID              (0x469A0253u)

#define CapSense_1_BUTTON26_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button26.hysteresis)
#define CapSense_1_BUTTON26_HYSTERESIS_OFFSET               (596u)
#define CapSense_1_BUTTON26_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON26_HYSTERESIS_PARAM_ID             (0x4D9A0254u)

#define CapSense_1_BUTTON26_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button26.onDebounce)
#define CapSense_1_BUTTON26_ON_DEBOUNCE_OFFSET              (597u)
#define CapSense_1_BUTTON26_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON26_ON_DEBOUNCE_PARAM_ID            (0x4B9A0255u)

#define CapSense_1_BUTTON26_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button26.lowBslnRst)
#define CapSense_1_BUTTON26_LOW_BSLN_RST_OFFSET             (598u)
#define CapSense_1_BUTTON26_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON26_LOW_BSLN_RST_PARAM_ID           (0x419A0256u)

#define CapSense_1_BUTTON26_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button26.idacMod[0u])
#define CapSense_1_BUTTON26_IDAC_MOD0_OFFSET                (599u)
#define CapSense_1_BUTTON26_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON26_IDAC_MOD0_PARAM_ID              (0x4A1A0257u)

#define CapSense_1_BUTTON26_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button26.idacGainIndex)
#define CapSense_1_BUTTON26_IDAC_GAIN_INDEX_OFFSET          (600u)
#define CapSense_1_BUTTON26_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON26_IDAC_GAIN_INDEX_PARAM_ID        (0x4E9A0258u)

#define CapSense_1_BUTTON26_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button26.snsClk)
#define CapSense_1_BUTTON26_SNS_CLK_OFFSET                  (602u)
#define CapSense_1_BUTTON26_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON26_SNS_CLK_PARAM_ID                (0x8A9A025Au)

#define CapSense_1_BUTTON26_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button26.snsClkSource)
#define CapSense_1_BUTTON26_SNS_CLK_SOURCE_OFFSET           (604u)
#define CapSense_1_BUTTON26_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON26_SNS_CLK_SOURCE_PARAM_ID         (0x4F9A025Cu)

#define CapSense_1_BUTTON26_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button26.fingerCap)
#define CapSense_1_BUTTON26_FINGER_CAP_OFFSET               (606u)
#define CapSense_1_BUTTON26_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON26_FINGER_CAP_PARAM_ID             (0xAD1A025Eu)

#define CapSense_1_BUTTON26_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button26.sigPFC)
#define CapSense_1_BUTTON26_SIGPFC_OFFSET                   (608u)
#define CapSense_1_BUTTON26_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON26_SIGPFC_PARAM_ID                 (0xAD1A0260u)

#define CapSense_1_BUTTON27_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button27.resolution)
#define CapSense_1_BUTTON27_RESOLUTION_OFFSET               (610u)
#define CapSense_1_BUTTON27_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON27_RESOLUTION_PARAM_ID             (0x849B0262u)

#define CapSense_1_BUTTON27_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button27.fingerTh)
#define CapSense_1_BUTTON27_FINGER_TH_OFFSET                (612u)
#define CapSense_1_BUTTON27_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON27_FINGER_TH_PARAM_ID              (0x899B0264u)

#define CapSense_1_BUTTON27_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button27.noiseTh)
#define CapSense_1_BUTTON27_NOISE_TH_OFFSET                 (614u)
#define CapSense_1_BUTTON27_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON27_NOISE_TH_PARAM_ID               (0x4D9B0266u)

#define CapSense_1_BUTTON27_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button27.nNoiseTh)
#define CapSense_1_BUTTON27_NNOISE_TH_OFFSET                (615u)
#define CapSense_1_BUTTON27_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON27_NNOISE_TH_PARAM_ID              (0x4B9B0267u)

#define CapSense_1_BUTTON27_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button27.hysteresis)
#define CapSense_1_BUTTON27_HYSTERESIS_OFFSET               (616u)
#define CapSense_1_BUTTON27_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON27_HYSTERESIS_PARAM_ID             (0x429B0268u)

#define CapSense_1_BUTTON27_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button27.onDebounce)
#define CapSense_1_BUTTON27_ON_DEBOUNCE_OFFSET              (617u)
#define CapSense_1_BUTTON27_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON27_ON_DEBOUNCE_PARAM_ID            (0x449B0269u)

#define CapSense_1_BUTTON27_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button27.lowBslnRst)
#define CapSense_1_BUTTON27_LOW_BSLN_RST_OFFSET             (618u)
#define CapSense_1_BUTTON27_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON27_LOW_BSLN_RST_PARAM_ID           (0x4E9B026Au)

#define CapSense_1_BUTTON27_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button27.idacMod[0u])
#define CapSense_1_BUTTON27_IDAC_MOD0_OFFSET                (619u)
#define CapSense_1_BUTTON27_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON27_IDAC_MOD0_PARAM_ID              (0x451B026Bu)

#define CapSense_1_BUTTON27_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button27.idacGainIndex)
#define CapSense_1_BUTTON27_IDAC_GAIN_INDEX_OFFSET          (620u)
#define CapSense_1_BUTTON27_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON27_IDAC_GAIN_INDEX_PARAM_ID        (0x439B026Cu)

#define CapSense_1_BUTTON27_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button27.snsClk)
#define CapSense_1_BUTTON27_SNS_CLK_OFFSET                  (622u)
#define CapSense_1_BUTTON27_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON27_SNS_CLK_PARAM_ID                (0x879B026Eu)

#define CapSense_1_BUTTON27_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button27.snsClkSource)
#define CapSense_1_BUTTON27_SNS_CLK_SOURCE_OFFSET           (624u)
#define CapSense_1_BUTTON27_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON27_SNS_CLK_SOURCE_PARAM_ID         (0x459B0270u)

#define CapSense_1_BUTTON27_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button27.fingerCap)
#define CapSense_1_BUTTON27_FINGER_CAP_OFFSET               (626u)
#define CapSense_1_BUTTON27_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON27_FINGER_CAP_PARAM_ID             (0xA71B0272u)

#define CapSense_1_BUTTON27_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button27.sigPFC)
#define CapSense_1_BUTTON27_SIGPFC_OFFSET                   (628u)
#define CapSense_1_BUTTON27_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON27_SIGPFC_PARAM_ID                 (0xAA1B0274u)

#define CapSense_1_BUTTON28_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button28.resolution)
#define CapSense_1_BUTTON28_RESOLUTION_OFFSET               (630u)
#define CapSense_1_BUTTON28_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON28_RESOLUTION_PARAM_ID             (0x899C0276u)

#define CapSense_1_BUTTON28_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button28.fingerTh)
#define CapSense_1_BUTTON28_FINGER_TH_OFFSET                (632u)
#define CapSense_1_BUTTON28_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON28_FINGER_TH_PARAM_ID              (0x869C0278u)

#define CapSense_1_BUTTON28_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button28.noiseTh)
#define CapSense_1_BUTTON28_NOISE_TH_OFFSET                 (634u)
#define CapSense_1_BUTTON28_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON28_NOISE_TH_PARAM_ID               (0x429C027Au)

#define CapSense_1_BUTTON28_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button28.nNoiseTh)
#define CapSense_1_BUTTON28_NNOISE_TH_OFFSET                (635u)
#define CapSense_1_BUTTON28_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON28_NNOISE_TH_PARAM_ID              (0x449C027Bu)

#define CapSense_1_BUTTON28_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button28.hysteresis)
#define CapSense_1_BUTTON28_HYSTERESIS_OFFSET               (636u)
#define CapSense_1_BUTTON28_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON28_HYSTERESIS_PARAM_ID             (0x4F9C027Cu)

#define CapSense_1_BUTTON28_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button28.onDebounce)
#define CapSense_1_BUTTON28_ON_DEBOUNCE_OFFSET              (637u)
#define CapSense_1_BUTTON28_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON28_ON_DEBOUNCE_PARAM_ID            (0x499C027Du)

#define CapSense_1_BUTTON28_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button28.lowBslnRst)
#define CapSense_1_BUTTON28_LOW_BSLN_RST_OFFSET             (638u)
#define CapSense_1_BUTTON28_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON28_LOW_BSLN_RST_PARAM_ID           (0x439C027Eu)

#define CapSense_1_BUTTON28_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button28.idacMod[0u])
#define CapSense_1_BUTTON28_IDAC_MOD0_OFFSET                (639u)
#define CapSense_1_BUTTON28_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON28_IDAC_MOD0_PARAM_ID              (0x481C027Fu)

#define CapSense_1_BUTTON28_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button28.idacGainIndex)
#define CapSense_1_BUTTON28_IDAC_GAIN_INDEX_OFFSET          (640u)
#define CapSense_1_BUTTON28_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON28_IDAC_GAIN_INDEX_PARAM_ID        (0x4D9C0280u)

#define CapSense_1_BUTTON28_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button28.snsClk)
#define CapSense_1_BUTTON28_SNS_CLK_OFFSET                  (642u)
#define CapSense_1_BUTTON28_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON28_SNS_CLK_PARAM_ID                (0x899C0282u)

#define CapSense_1_BUTTON28_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button28.snsClkSource)
#define CapSense_1_BUTTON28_SNS_CLK_SOURCE_OFFSET           (644u)
#define CapSense_1_BUTTON28_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON28_SNS_CLK_SOURCE_PARAM_ID         (0x4C9C0284u)

#define CapSense_1_BUTTON28_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button28.fingerCap)
#define CapSense_1_BUTTON28_FINGER_CAP_OFFSET               (646u)
#define CapSense_1_BUTTON28_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON28_FINGER_CAP_PARAM_ID             (0xAE1C0286u)

#define CapSense_1_BUTTON28_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button28.sigPFC)
#define CapSense_1_BUTTON28_SIGPFC_OFFSET                   (648u)
#define CapSense_1_BUTTON28_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON28_SIGPFC_PARAM_ID                 (0xA11C0288u)

#define CapSense_1_BUTTON29_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button29.resolution)
#define CapSense_1_BUTTON29_RESOLUTION_OFFSET               (650u)
#define CapSense_1_BUTTON29_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON29_RESOLUTION_PARAM_ID             (0x889D028Au)

#define CapSense_1_BUTTON29_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button29.fingerTh)
#define CapSense_1_BUTTON29_FINGER_TH_OFFSET                (652u)
#define CapSense_1_BUTTON29_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON29_FINGER_TH_PARAM_ID              (0x859D028Cu)

#define CapSense_1_BUTTON29_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button29.noiseTh)
#define CapSense_1_BUTTON29_NOISE_TH_OFFSET                 (654u)
#define CapSense_1_BUTTON29_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON29_NOISE_TH_PARAM_ID               (0x419D028Eu)

#define CapSense_1_BUTTON29_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button29.nNoiseTh)
#define CapSense_1_BUTTON29_NNOISE_TH_OFFSET                (655u)
#define CapSense_1_BUTTON29_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON29_NNOISE_TH_PARAM_ID              (0x479D028Fu)

#define CapSense_1_BUTTON29_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button29.hysteresis)
#define CapSense_1_BUTTON29_HYSTERESIS_OFFSET               (656u)
#define CapSense_1_BUTTON29_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON29_HYSTERESIS_PARAM_ID             (0x4B9D0290u)

#define CapSense_1_BUTTON29_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button29.onDebounce)
#define CapSense_1_BUTTON29_ON_DEBOUNCE_OFFSET              (657u)
#define CapSense_1_BUTTON29_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON29_ON_DEBOUNCE_PARAM_ID            (0x4D9D0291u)

#define CapSense_1_BUTTON29_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button29.lowBslnRst)
#define CapSense_1_BUTTON29_LOW_BSLN_RST_OFFSET             (658u)
#define CapSense_1_BUTTON29_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON29_LOW_BSLN_RST_PARAM_ID           (0x479D0292u)

#define CapSense_1_BUTTON29_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button29.idacMod[0u])
#define CapSense_1_BUTTON29_IDAC_MOD0_OFFSET                (659u)
#define CapSense_1_BUTTON29_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON29_IDAC_MOD0_PARAM_ID              (0x4C1D0293u)

#define CapSense_1_BUTTON29_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button29.idacGainIndex)
#define CapSense_1_BUTTON29_IDAC_GAIN_INDEX_OFFSET          (660u)
#define CapSense_1_BUTTON29_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON29_IDAC_GAIN_INDEX_PARAM_ID        (0x4A9D0294u)

#define CapSense_1_BUTTON29_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button29.snsClk)
#define CapSense_1_BUTTON29_SNS_CLK_OFFSET                  (662u)
#define CapSense_1_BUTTON29_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON29_SNS_CLK_PARAM_ID                (0x8E9D0296u)

#define CapSense_1_BUTTON29_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button29.snsClkSource)
#define CapSense_1_BUTTON29_SNS_CLK_SOURCE_OFFSET           (664u)
#define CapSense_1_BUTTON29_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON29_SNS_CLK_SOURCE_PARAM_ID         (0x499D0298u)

#define CapSense_1_BUTTON29_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button29.fingerCap)
#define CapSense_1_BUTTON29_FINGER_CAP_OFFSET               (666u)
#define CapSense_1_BUTTON29_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON29_FINGER_CAP_PARAM_ID             (0xAB1D029Au)

#define CapSense_1_BUTTON29_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button29.sigPFC)
#define CapSense_1_BUTTON29_SIGPFC_OFFSET                   (668u)
#define CapSense_1_BUTTON29_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON29_SIGPFC_PARAM_ID                 (0xA61D029Cu)

#define CapSense_1_BUTTON30_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button30.resolution)
#define CapSense_1_BUTTON30_RESOLUTION_OFFSET               (670u)
#define CapSense_1_BUTTON30_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON30_RESOLUTION_PARAM_ID             (0x899E029Eu)

#define CapSense_1_BUTTON30_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button30.fingerTh)
#define CapSense_1_BUTTON30_FINGER_TH_OFFSET                (672u)
#define CapSense_1_BUTTON30_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON30_FINGER_TH_PARAM_ID              (0x899E02A0u)

#define CapSense_1_BUTTON30_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button30.noiseTh)
#define CapSense_1_BUTTON30_NOISE_TH_OFFSET                 (674u)
#define CapSense_1_BUTTON30_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON30_NOISE_TH_PARAM_ID               (0x4D9E02A2u)

#define CapSense_1_BUTTON30_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button30.nNoiseTh)
#define CapSense_1_BUTTON30_NNOISE_TH_OFFSET                (675u)
#define CapSense_1_BUTTON30_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON30_NNOISE_TH_PARAM_ID              (0x4B9E02A3u)

#define CapSense_1_BUTTON30_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button30.hysteresis)
#define CapSense_1_BUTTON30_HYSTERESIS_OFFSET               (676u)
#define CapSense_1_BUTTON30_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON30_HYSTERESIS_PARAM_ID             (0x409E02A4u)

#define CapSense_1_BUTTON30_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button30.onDebounce)
#define CapSense_1_BUTTON30_ON_DEBOUNCE_OFFSET              (677u)
#define CapSense_1_BUTTON30_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON30_ON_DEBOUNCE_PARAM_ID            (0x469E02A5u)

#define CapSense_1_BUTTON30_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button30.lowBslnRst)
#define CapSense_1_BUTTON30_LOW_BSLN_RST_OFFSET             (678u)
#define CapSense_1_BUTTON30_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON30_LOW_BSLN_RST_PARAM_ID           (0x4C9E02A6u)

#define CapSense_1_BUTTON30_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button30.idacMod[0u])
#define CapSense_1_BUTTON30_IDAC_MOD0_OFFSET                (679u)
#define CapSense_1_BUTTON30_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON30_IDAC_MOD0_PARAM_ID              (0x471E02A7u)

#define CapSense_1_BUTTON30_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button30.idacGainIndex)
#define CapSense_1_BUTTON30_IDAC_GAIN_INDEX_OFFSET          (680u)
#define CapSense_1_BUTTON30_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON30_IDAC_GAIN_INDEX_PARAM_ID        (0x439E02A8u)

#define CapSense_1_BUTTON30_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button30.snsClk)
#define CapSense_1_BUTTON30_SNS_CLK_OFFSET                  (682u)
#define CapSense_1_BUTTON30_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON30_SNS_CLK_PARAM_ID                (0x879E02AAu)

#define CapSense_1_BUTTON30_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button30.snsClkSource)
#define CapSense_1_BUTTON30_SNS_CLK_SOURCE_OFFSET           (684u)
#define CapSense_1_BUTTON30_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON30_SNS_CLK_SOURCE_PARAM_ID         (0x429E02ACu)

#define CapSense_1_BUTTON30_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button30.fingerCap)
#define CapSense_1_BUTTON30_FINGER_CAP_OFFSET               (686u)
#define CapSense_1_BUTTON30_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON30_FINGER_CAP_PARAM_ID             (0xA01E02AEu)

#define CapSense_1_BUTTON30_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button30.sigPFC)
#define CapSense_1_BUTTON30_SIGPFC_OFFSET                   (688u)
#define CapSense_1_BUTTON30_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON30_SIGPFC_PARAM_ID                 (0xAA1E02B0u)

#define CapSense_1_BUTTON31_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button31.resolution)
#define CapSense_1_BUTTON31_RESOLUTION_OFFSET               (690u)
#define CapSense_1_BUTTON31_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON31_RESOLUTION_PARAM_ID             (0x839F02B2u)

#define CapSense_1_BUTTON31_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button31.fingerTh)
#define CapSense_1_BUTTON31_FINGER_TH_OFFSET                (692u)
#define CapSense_1_BUTTON31_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON31_FINGER_TH_PARAM_ID              (0x8E9F02B4u)

#define CapSense_1_BUTTON31_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button31.noiseTh)
#define CapSense_1_BUTTON31_NOISE_TH_OFFSET                 (694u)
#define CapSense_1_BUTTON31_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON31_NOISE_TH_PARAM_ID               (0x4A9F02B6u)

#define CapSense_1_BUTTON31_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button31.nNoiseTh)
#define CapSense_1_BUTTON31_NNOISE_TH_OFFSET                (695u)
#define CapSense_1_BUTTON31_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON31_NNOISE_TH_PARAM_ID              (0x4C9F02B7u)

#define CapSense_1_BUTTON31_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button31.hysteresis)
#define CapSense_1_BUTTON31_HYSTERESIS_OFFSET               (696u)
#define CapSense_1_BUTTON31_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON31_HYSTERESIS_PARAM_ID             (0x459F02B8u)

#define CapSense_1_BUTTON31_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button31.onDebounce)
#define CapSense_1_BUTTON31_ON_DEBOUNCE_OFFSET              (697u)
#define CapSense_1_BUTTON31_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON31_ON_DEBOUNCE_PARAM_ID            (0x439F02B9u)

#define CapSense_1_BUTTON31_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button31.lowBslnRst)
#define CapSense_1_BUTTON31_LOW_BSLN_RST_OFFSET             (698u)
#define CapSense_1_BUTTON31_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON31_LOW_BSLN_RST_PARAM_ID           (0x499F02BAu)

#define CapSense_1_BUTTON31_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button31.idacMod[0u])
#define CapSense_1_BUTTON31_IDAC_MOD0_OFFSET                (699u)
#define CapSense_1_BUTTON31_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON31_IDAC_MOD0_PARAM_ID              (0x421F02BBu)

#define CapSense_1_BUTTON31_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button31.idacGainIndex)
#define CapSense_1_BUTTON31_IDAC_GAIN_INDEX_OFFSET          (700u)
#define CapSense_1_BUTTON31_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON31_IDAC_GAIN_INDEX_PARAM_ID        (0x449F02BCu)

#define CapSense_1_BUTTON31_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button31.snsClk)
#define CapSense_1_BUTTON31_SNS_CLK_OFFSET                  (702u)
#define CapSense_1_BUTTON31_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON31_SNS_CLK_PARAM_ID                (0x809F02BEu)

#define CapSense_1_BUTTON31_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button31.snsClkSource)
#define CapSense_1_BUTTON31_SNS_CLK_SOURCE_OFFSET           (704u)
#define CapSense_1_BUTTON31_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON31_SNS_CLK_SOURCE_PARAM_ID         (0x459F02C0u)

#define CapSense_1_BUTTON31_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button31.fingerCap)
#define CapSense_1_BUTTON31_FINGER_CAP_OFFSET               (706u)
#define CapSense_1_BUTTON31_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON31_FINGER_CAP_PARAM_ID             (0xA71F02C2u)

#define CapSense_1_BUTTON31_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button31.sigPFC)
#define CapSense_1_BUTTON31_SIGPFC_OFFSET                   (708u)
#define CapSense_1_BUTTON31_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON31_SIGPFC_PARAM_ID                 (0xAA1F02C4u)

#define CapSense_1_BUTTON32_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button32.resolution)
#define CapSense_1_BUTTON32_RESOLUTION_OFFSET               (710u)
#define CapSense_1_BUTTON32_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON32_RESOLUTION_PARAM_ID             (0x83A002C6u)

#define CapSense_1_BUTTON32_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button32.fingerTh)
#define CapSense_1_BUTTON32_FINGER_TH_OFFSET                (712u)
#define CapSense_1_BUTTON32_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON32_FINGER_TH_PARAM_ID              (0x8CA002C8u)

#define CapSense_1_BUTTON32_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button32.noiseTh)
#define CapSense_1_BUTTON32_NOISE_TH_OFFSET                 (714u)
#define CapSense_1_BUTTON32_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON32_NOISE_TH_PARAM_ID               (0x48A002CAu)

#define CapSense_1_BUTTON32_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button32.nNoiseTh)
#define CapSense_1_BUTTON32_NNOISE_TH_OFFSET                (715u)
#define CapSense_1_BUTTON32_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON32_NNOISE_TH_PARAM_ID              (0x4EA002CBu)

#define CapSense_1_BUTTON32_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button32.hysteresis)
#define CapSense_1_BUTTON32_HYSTERESIS_OFFSET               (716u)
#define CapSense_1_BUTTON32_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON32_HYSTERESIS_PARAM_ID             (0x45A002CCu)

#define CapSense_1_BUTTON32_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button32.onDebounce)
#define CapSense_1_BUTTON32_ON_DEBOUNCE_OFFSET              (717u)
#define CapSense_1_BUTTON32_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON32_ON_DEBOUNCE_PARAM_ID            (0x43A002CDu)

#define CapSense_1_BUTTON32_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button32.lowBslnRst)
#define CapSense_1_BUTTON32_LOW_BSLN_RST_OFFSET             (718u)
#define CapSense_1_BUTTON32_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON32_LOW_BSLN_RST_PARAM_ID           (0x49A002CEu)

#define CapSense_1_BUTTON32_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button32.idacMod[0u])
#define CapSense_1_BUTTON32_IDAC_MOD0_OFFSET                (719u)
#define CapSense_1_BUTTON32_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON32_IDAC_MOD0_PARAM_ID              (0x422002CFu)

#define CapSense_1_BUTTON32_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button32.idacGainIndex)
#define CapSense_1_BUTTON32_IDAC_GAIN_INDEX_OFFSET          (720u)
#define CapSense_1_BUTTON32_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON32_IDAC_GAIN_INDEX_PARAM_ID        (0x43A002D0u)

#define CapSense_1_BUTTON32_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button32.snsClk)
#define CapSense_1_BUTTON32_SNS_CLK_OFFSET                  (722u)
#define CapSense_1_BUTTON32_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON32_SNS_CLK_PARAM_ID                (0x87A002D2u)

#define CapSense_1_BUTTON32_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button32.snsClkSource)
#define CapSense_1_BUTTON32_SNS_CLK_SOURCE_OFFSET           (724u)
#define CapSense_1_BUTTON32_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON32_SNS_CLK_SOURCE_PARAM_ID         (0x42A002D4u)

#define CapSense_1_BUTTON32_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button32.fingerCap)
#define CapSense_1_BUTTON32_FINGER_CAP_OFFSET               (726u)
#define CapSense_1_BUTTON32_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON32_FINGER_CAP_PARAM_ID             (0xA02002D6u)

#define CapSense_1_BUTTON32_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button32.sigPFC)
#define CapSense_1_BUTTON32_SIGPFC_OFFSET                   (728u)
#define CapSense_1_BUTTON32_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON32_SIGPFC_PARAM_ID                 (0xAF2002D8u)

#define CapSense_1_BUTTON33_RESOLUTION_VALUE                (CapSense_1_dsRam.wdgtList.button33.resolution)
#define CapSense_1_BUTTON33_RESOLUTION_OFFSET               (730u)
#define CapSense_1_BUTTON33_RESOLUTION_SIZE                 (2u)
#define CapSense_1_BUTTON33_RESOLUTION_PARAM_ID             (0x86A102DAu)

#define CapSense_1_BUTTON33_FINGER_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button33.fingerTh)
#define CapSense_1_BUTTON33_FINGER_TH_OFFSET                (732u)
#define CapSense_1_BUTTON33_FINGER_TH_SIZE                  (2u)
#define CapSense_1_BUTTON33_FINGER_TH_PARAM_ID              (0x8BA102DCu)

#define CapSense_1_BUTTON33_NOISE_TH_VALUE                  (CapSense_1_dsRam.wdgtList.button33.noiseTh)
#define CapSense_1_BUTTON33_NOISE_TH_OFFSET                 (734u)
#define CapSense_1_BUTTON33_NOISE_TH_SIZE                   (1u)
#define CapSense_1_BUTTON33_NOISE_TH_PARAM_ID               (0x4FA102DEu)

#define CapSense_1_BUTTON33_NNOISE_TH_VALUE                 (CapSense_1_dsRam.wdgtList.button33.nNoiseTh)
#define CapSense_1_BUTTON33_NNOISE_TH_OFFSET                (735u)
#define CapSense_1_BUTTON33_NNOISE_TH_SIZE                  (1u)
#define CapSense_1_BUTTON33_NNOISE_TH_PARAM_ID              (0x49A102DFu)

#define CapSense_1_BUTTON33_HYSTERESIS_VALUE                (CapSense_1_dsRam.wdgtList.button33.hysteresis)
#define CapSense_1_BUTTON33_HYSTERESIS_OFFSET               (736u)
#define CapSense_1_BUTTON33_HYSTERESIS_SIZE                 (1u)
#define CapSense_1_BUTTON33_HYSTERESIS_PARAM_ID             (0x4FA102E0u)

#define CapSense_1_BUTTON33_ON_DEBOUNCE_VALUE               (CapSense_1_dsRam.wdgtList.button33.onDebounce)
#define CapSense_1_BUTTON33_ON_DEBOUNCE_OFFSET              (737u)
#define CapSense_1_BUTTON33_ON_DEBOUNCE_SIZE                (1u)
#define CapSense_1_BUTTON33_ON_DEBOUNCE_PARAM_ID            (0x49A102E1u)

#define CapSense_1_BUTTON33_LOW_BSLN_RST_VALUE              (CapSense_1_dsRam.wdgtList.button33.lowBslnRst)
#define CapSense_1_BUTTON33_LOW_BSLN_RST_OFFSET             (738u)
#define CapSense_1_BUTTON33_LOW_BSLN_RST_SIZE               (1u)
#define CapSense_1_BUTTON33_LOW_BSLN_RST_PARAM_ID           (0x43A102E2u)

#define CapSense_1_BUTTON33_IDAC_MOD0_VALUE                 (CapSense_1_dsRam.wdgtList.button33.idacMod[0u])
#define CapSense_1_BUTTON33_IDAC_MOD0_OFFSET                (739u)
#define CapSense_1_BUTTON33_IDAC_MOD0_SIZE                  (1u)
#define CapSense_1_BUTTON33_IDAC_MOD0_PARAM_ID              (0x482102E3u)

#define CapSense_1_BUTTON33_IDAC_GAIN_INDEX_VALUE           (CapSense_1_dsRam.wdgtList.button33.idacGainIndex)
#define CapSense_1_BUTTON33_IDAC_GAIN_INDEX_OFFSET          (740u)
#define CapSense_1_BUTTON33_IDAC_GAIN_INDEX_SIZE            (1u)
#define CapSense_1_BUTTON33_IDAC_GAIN_INDEX_PARAM_ID        (0x4EA102E4u)

#define CapSense_1_BUTTON33_SNS_CLK_VALUE                   (CapSense_1_dsRam.wdgtList.button33.snsClk)
#define CapSense_1_BUTTON33_SNS_CLK_OFFSET                  (742u)
#define CapSense_1_BUTTON33_SNS_CLK_SIZE                    (2u)
#define CapSense_1_BUTTON33_SNS_CLK_PARAM_ID                (0x8AA102E6u)

#define CapSense_1_BUTTON33_SNS_CLK_SOURCE_VALUE            (CapSense_1_dsRam.wdgtList.button33.snsClkSource)
#define CapSense_1_BUTTON33_SNS_CLK_SOURCE_OFFSET           (744u)
#define CapSense_1_BUTTON33_SNS_CLK_SOURCE_SIZE             (1u)
#define CapSense_1_BUTTON33_SNS_CLK_SOURCE_PARAM_ID         (0x4DA102E8u)

#define CapSense_1_BUTTON33_FINGER_CAP_VALUE                (CapSense_1_dsRam.wdgtList.button33.fingerCap)
#define CapSense_1_BUTTON33_FINGER_CAP_OFFSET               (746u)
#define CapSense_1_BUTTON33_FINGER_CAP_SIZE                 (2u)
#define CapSense_1_BUTTON33_FINGER_CAP_PARAM_ID             (0xAF2102EAu)

#define CapSense_1_BUTTON33_SIGPFC_VALUE                    (CapSense_1_dsRam.wdgtList.button33.sigPFC)
#define CapSense_1_BUTTON33_SIGPFC_OFFSET                   (748u)
#define CapSense_1_BUTTON33_SIGPFC_SIZE                     (2u)
#define CapSense_1_BUTTON33_SIGPFC_PARAM_ID                 (0xA22102ECu)

#define CapSense_1_BUTTON0_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].raw[0u])
#define CapSense_1_BUTTON0_SNS0_RAW0_OFFSET                 (750u)
#define CapSense_1_BUTTON0_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_RAW0_PARAM_ID               (0x830002EEu)

#define CapSense_1_BUTTON0_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button0[0u].bsln[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN0_OFFSET                (752u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON0_SNS0_BSLN0_PARAM_ID              (0x890002F0u)

#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button0[0u].bslnExt[0u])
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_OFFSET            (754u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON0_SNS0_BSLN_EXT0_PARAM_ID          (0x4D0002F2u)

#define CapSense_1_BUTTON0_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button0[0u].diff)
#define CapSense_1_BUTTON0_SNS0_DIFF_OFFSET                 (756u)
#define CapSense_1_BUTTON0_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON0_SNS0_DIFF_PARAM_ID               (0x880002F4u)

#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button0[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (758u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON0_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4C0002F6u)

#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button0[0u].idacComp[0u])
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_OFFSET           (759u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON0_SNS0_IDAC_COMP0_PARAM_ID         (0x4A0002F7u)

#define CapSense_1_BUTTON1_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].raw[0u])
#define CapSense_1_BUTTON1_SNS0_RAW0_OFFSET                 (760u)
#define CapSense_1_BUTTON1_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_RAW0_PARAM_ID               (0x8B0002F8u)

#define CapSense_1_BUTTON1_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button1[0u].bsln[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN0_OFFSET                (762u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON1_SNS0_BSLN0_PARAM_ID              (0x870002FAu)

#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button1[0u].bslnExt[0u])
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_OFFSET            (764u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON1_SNS0_BSLN_EXT0_PARAM_ID          (0x420002FCu)

#define CapSense_1_BUTTON1_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button1[0u].diff)
#define CapSense_1_BUTTON1_SNS0_DIFF_OFFSET                 (766u)
#define CapSense_1_BUTTON1_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON1_SNS0_DIFF_PARAM_ID               (0x860002FEu)

#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button1[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (768u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON1_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4B000300u)

#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button1[0u].idacComp[0u])
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_OFFSET           (769u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON1_SNS0_IDAC_COMP0_PARAM_ID         (0x4D000301u)

#define CapSense_1_BUTTON2_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].raw[0u])
#define CapSense_1_BUTTON2_SNS0_RAW0_OFFSET                 (770u)
#define CapSense_1_BUTTON2_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_RAW0_PARAM_ID               (0x8F000302u)

#define CapSense_1_BUTTON2_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button2[0u].bsln[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN0_OFFSET                (772u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON2_SNS0_BSLN0_PARAM_ID              (0x82000304u)

#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button2[0u].bslnExt[0u])
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_OFFSET            (774u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON2_SNS0_BSLN_EXT0_PARAM_ID          (0x46000306u)

#define CapSense_1_BUTTON2_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button2[0u].diff)
#define CapSense_1_BUTTON2_SNS0_DIFF_OFFSET                 (776u)
#define CapSense_1_BUTTON2_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON2_SNS0_DIFF_PARAM_ID               (0x81000308u)

#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button2[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (778u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON2_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4500030Au)

#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button2[0u].idacComp[0u])
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_OFFSET           (779u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON2_SNS0_IDAC_COMP0_PARAM_ID         (0x4300030Bu)

#define CapSense_1_BUTTON3_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].raw[0u])
#define CapSense_1_BUTTON3_SNS0_RAW0_OFFSET                 (780u)
#define CapSense_1_BUTTON3_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_RAW0_PARAM_ID               (0x8000030Cu)

#define CapSense_1_BUTTON3_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button3[0u].bsln[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN0_OFFSET                (782u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON3_SNS0_BSLN0_PARAM_ID              (0x8C00030Eu)

#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button3[0u].bslnExt[0u])
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_OFFSET            (784u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON3_SNS0_BSLN_EXT0_PARAM_ID          (0x4E000310u)

#define CapSense_1_BUTTON3_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button3[0u].diff)
#define CapSense_1_BUTTON3_SNS0_DIFF_OFFSET                 (786u)
#define CapSense_1_BUTTON3_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON3_SNS0_DIFF_PARAM_ID               (0x8A000312u)

#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button3[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (788u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON3_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4F000314u)

#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button3[0u].idacComp[0u])
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_OFFSET           (789u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON3_SNS0_IDAC_COMP0_PARAM_ID         (0x49000315u)

#define CapSense_1_BUTTON4_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].raw[0u])
#define CapSense_1_BUTTON4_SNS0_RAW0_OFFSET                 (790u)
#define CapSense_1_BUTTON4_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_RAW0_PARAM_ID               (0x8B000316u)

#define CapSense_1_BUTTON4_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button4[0u].bsln[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN0_OFFSET                (792u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON4_SNS0_BSLN0_PARAM_ID              (0x84000318u)

#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button4[0u].bslnExt[0u])
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_OFFSET            (794u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON4_SNS0_BSLN_EXT0_PARAM_ID          (0x4000031Au)

#define CapSense_1_BUTTON4_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button4[0u].diff)
#define CapSense_1_BUTTON4_SNS0_DIFF_OFFSET                 (796u)
#define CapSense_1_BUTTON4_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON4_SNS0_DIFF_PARAM_ID               (0x8500031Cu)

#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button4[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (798u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON4_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4100031Eu)

#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button4[0u].idacComp[0u])
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_OFFSET           (799u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON4_SNS0_IDAC_COMP0_PARAM_ID         (0x4700031Fu)

#define CapSense_1_BUTTON5_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].raw[0u])
#define CapSense_1_BUTTON5_SNS0_RAW0_OFFSET                 (800u)
#define CapSense_1_BUTTON5_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_RAW0_PARAM_ID               (0x89000320u)

#define CapSense_1_BUTTON5_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button5[0u].bsln[0u])
#define CapSense_1_BUTTON5_SNS0_BSLN0_OFFSET                (802u)
#define CapSense_1_BUTTON5_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON5_SNS0_BSLN0_PARAM_ID              (0x85000322u)

#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button5[0u].bslnExt[0u])
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_OFFSET            (804u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON5_SNS0_BSLN_EXT0_PARAM_ID          (0x40000324u)

#define CapSense_1_BUTTON5_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button5[0u].diff)
#define CapSense_1_BUTTON5_SNS0_DIFF_OFFSET                 (806u)
#define CapSense_1_BUTTON5_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON5_SNS0_DIFF_PARAM_ID               (0x84000326u)

#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button5[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (808u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON5_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x43000328u)

#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button5[0u].idacComp[0u])
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_OFFSET           (809u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON5_SNS0_IDAC_COMP0_PARAM_ID         (0x45000329u)

#define CapSense_1_BUTTON6_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button6[0u].raw[0u])
#define CapSense_1_BUTTON6_SNS0_RAW0_OFFSET                 (810u)
#define CapSense_1_BUTTON6_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON6_SNS0_RAW0_PARAM_ID               (0x8700032Au)

#define CapSense_1_BUTTON6_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button6[0u].bsln[0u])
#define CapSense_1_BUTTON6_SNS0_BSLN0_OFFSET                (812u)
#define CapSense_1_BUTTON6_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON6_SNS0_BSLN0_PARAM_ID              (0x8A00032Cu)

#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button6[0u].bslnExt[0u])
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_OFFSET            (814u)
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON6_SNS0_BSLN_EXT0_PARAM_ID          (0x4E00032Eu)

#define CapSense_1_BUTTON6_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button6[0u].diff)
#define CapSense_1_BUTTON6_SNS0_DIFF_OFFSET                 (816u)
#define CapSense_1_BUTTON6_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON6_SNS0_DIFF_PARAM_ID               (0x8C000330u)

#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button6[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (818u)
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON6_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x48000332u)

#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button6[0u].idacComp[0u])
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_OFFSET           (819u)
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON6_SNS0_IDAC_COMP0_PARAM_ID         (0x4E000333u)

#define CapSense_1_BUTTON7_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button7[0u].raw[0u])
#define CapSense_1_BUTTON7_SNS0_RAW0_OFFSET                 (820u)
#define CapSense_1_BUTTON7_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON7_SNS0_RAW0_PARAM_ID               (0x8D000334u)

#define CapSense_1_BUTTON7_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button7[0u].bsln[0u])
#define CapSense_1_BUTTON7_SNS0_BSLN0_OFFSET                (822u)
#define CapSense_1_BUTTON7_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON7_SNS0_BSLN0_PARAM_ID              (0x81000336u)

#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button7[0u].bslnExt[0u])
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_OFFSET            (824u)
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON7_SNS0_BSLN_EXT0_PARAM_ID          (0x46000338u)

#define CapSense_1_BUTTON7_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button7[0u].diff)
#define CapSense_1_BUTTON7_SNS0_DIFF_OFFSET                 (826u)
#define CapSense_1_BUTTON7_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON7_SNS0_DIFF_PARAM_ID               (0x8200033Au)

#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button7[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (828u)
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON7_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4700033Cu)

#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button7[0u].idacComp[0u])
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_OFFSET           (829u)
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON7_SNS0_IDAC_COMP0_PARAM_ID         (0x4100033Du)

#define CapSense_1_BUTTON8_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button8[0u].raw[0u])
#define CapSense_1_BUTTON8_SNS0_RAW0_OFFSET                 (830u)
#define CapSense_1_BUTTON8_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON8_SNS0_RAW0_PARAM_ID               (0x8300033Eu)

#define CapSense_1_BUTTON8_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button8[0u].bsln[0u])
#define CapSense_1_BUTTON8_SNS0_BSLN0_OFFSET                (832u)
#define CapSense_1_BUTTON8_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON8_SNS0_BSLN0_PARAM_ID              (0x8E000340u)

#define CapSense_1_BUTTON8_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button8[0u].bslnExt[0u])
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT0_OFFSET            (834u)
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON8_SNS0_BSLN_EXT0_PARAM_ID          (0x4A000342u)

#define CapSense_1_BUTTON8_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button8[0u].diff)
#define CapSense_1_BUTTON8_SNS0_DIFF_OFFSET                 (836u)
#define CapSense_1_BUTTON8_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON8_SNS0_DIFF_PARAM_ID               (0x8F000344u)

#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button8[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (838u)
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON8_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x4B000346u)

#define CapSense_1_BUTTON8_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button8[0u].idacComp[0u])
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP0_OFFSET           (839u)
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON8_SNS0_IDAC_COMP0_PARAM_ID         (0x4D000347u)

#define CapSense_1_BUTTON9_SNS0_RAW0_VALUE                  (CapSense_1_dsRam.snsList.button9[0u].raw[0u])
#define CapSense_1_BUTTON9_SNS0_RAW0_OFFSET                 (840u)
#define CapSense_1_BUTTON9_SNS0_RAW0_SIZE                   (2u)
#define CapSense_1_BUTTON9_SNS0_RAW0_PARAM_ID               (0x8C000348u)

#define CapSense_1_BUTTON9_SNS0_BSLN0_VALUE                 (CapSense_1_dsRam.snsList.button9[0u].bsln[0u])
#define CapSense_1_BUTTON9_SNS0_BSLN0_OFFSET                (842u)
#define CapSense_1_BUTTON9_SNS0_BSLN0_SIZE                  (2u)
#define CapSense_1_BUTTON9_SNS0_BSLN0_PARAM_ID              (0x8000034Au)

#define CapSense_1_BUTTON9_SNS0_BSLN_EXT0_VALUE             (CapSense_1_dsRam.snsList.button9[0u].bslnExt[0u])
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT0_OFFSET            (844u)
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT0_SIZE              (1u)
#define CapSense_1_BUTTON9_SNS0_BSLN_EXT0_PARAM_ID          (0x4500034Cu)

#define CapSense_1_BUTTON9_SNS0_DIFF_VALUE                  (CapSense_1_dsRam.snsList.button9[0u].diff)
#define CapSense_1_BUTTON9_SNS0_DIFF_OFFSET                 (846u)
#define CapSense_1_BUTTON9_SNS0_DIFF_SIZE                   (2u)
#define CapSense_1_BUTTON9_SNS0_DIFF_PARAM_ID               (0x8100034Eu)

#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_VALUE     (CapSense_1_dsRam.snsList.button9[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_OFFSET    (848u)
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_SIZE      (1u)
#define CapSense_1_BUTTON9_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID  (0x43000350u)

#define CapSense_1_BUTTON9_SNS0_IDAC_COMP0_VALUE            (CapSense_1_dsRam.snsList.button9[0u].idacComp[0u])
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP0_OFFSET           (849u)
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP0_SIZE             (1u)
#define CapSense_1_BUTTON9_SNS0_IDAC_COMP0_PARAM_ID         (0x45000351u)

#define CapSense_1_BUTTON10_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button10[0u].raw[0u])
#define CapSense_1_BUTTON10_SNS0_RAW0_OFFSET                (850u)
#define CapSense_1_BUTTON10_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON10_SNS0_RAW0_PARAM_ID              (0x87000352u)

#define CapSense_1_BUTTON10_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button10[0u].bsln[0u])
#define CapSense_1_BUTTON10_SNS0_BSLN0_OFFSET               (852u)
#define CapSense_1_BUTTON10_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON10_SNS0_BSLN0_PARAM_ID             (0x8A000354u)

#define CapSense_1_BUTTON10_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button10[0u].bslnExt[0u])
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT0_OFFSET           (854u)
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON10_SNS0_BSLN_EXT0_PARAM_ID         (0x4E000356u)

#define CapSense_1_BUTTON10_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button10[0u].diff)
#define CapSense_1_BUTTON10_SNS0_DIFF_OFFSET                (856u)
#define CapSense_1_BUTTON10_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON10_SNS0_DIFF_PARAM_ID              (0x89000358u)

#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button10[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (858u)
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON10_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D00035Au)

#define CapSense_1_BUTTON10_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button10[0u].idacComp[0u])
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP0_OFFSET          (859u)
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON10_SNS0_IDAC_COMP0_PARAM_ID        (0x4B00035Bu)

#define CapSense_1_BUTTON11_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button11[0u].raw[0u])
#define CapSense_1_BUTTON11_SNS0_RAW0_OFFSET                (860u)
#define CapSense_1_BUTTON11_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON11_SNS0_RAW0_PARAM_ID              (0x8800035Cu)

#define CapSense_1_BUTTON11_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button11[0u].bsln[0u])
#define CapSense_1_BUTTON11_SNS0_BSLN0_OFFSET               (862u)
#define CapSense_1_BUTTON11_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON11_SNS0_BSLN0_PARAM_ID             (0x8400035Eu)

#define CapSense_1_BUTTON11_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button11[0u].bslnExt[0u])
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT0_OFFSET           (864u)
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON11_SNS0_BSLN_EXT0_PARAM_ID         (0x4C000360u)

#define CapSense_1_BUTTON11_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button11[0u].diff)
#define CapSense_1_BUTTON11_SNS0_DIFF_OFFSET                (866u)
#define CapSense_1_BUTTON11_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON11_SNS0_DIFF_PARAM_ID              (0x88000362u)

#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button11[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (868u)
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON11_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4D000364u)

#define CapSense_1_BUTTON11_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button11[0u].idacComp[0u])
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP0_OFFSET          (869u)
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON11_SNS0_IDAC_COMP0_PARAM_ID        (0x4B000365u)

#define CapSense_1_BUTTON12_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button12[0u].raw[0u])
#define CapSense_1_BUTTON12_SNS0_RAW0_OFFSET                (870u)
#define CapSense_1_BUTTON12_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON12_SNS0_RAW0_PARAM_ID              (0x89000366u)

#define CapSense_1_BUTTON12_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button12[0u].bsln[0u])
#define CapSense_1_BUTTON12_SNS0_BSLN0_OFFSET               (872u)
#define CapSense_1_BUTTON12_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON12_SNS0_BSLN0_PARAM_ID             (0x86000368u)

#define CapSense_1_BUTTON12_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button12[0u].bslnExt[0u])
#define CapSense_1_BUTTON12_SNS0_BSLN_EXT0_OFFSET           (874u)
#define CapSense_1_BUTTON12_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON12_SNS0_BSLN_EXT0_PARAM_ID         (0x4200036Au)

#define CapSense_1_BUTTON12_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button12[0u].diff)
#define CapSense_1_BUTTON12_SNS0_DIFF_OFFSET                (876u)
#define CapSense_1_BUTTON12_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON12_SNS0_DIFF_PARAM_ID              (0x8700036Cu)

#define CapSense_1_BUTTON12_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button12[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON12_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (878u)
#define CapSense_1_BUTTON12_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON12_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4300036Eu)

#define CapSense_1_BUTTON12_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button12[0u].idacComp[0u])
#define CapSense_1_BUTTON12_SNS0_IDAC_COMP0_OFFSET          (879u)
#define CapSense_1_BUTTON12_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON12_SNS0_IDAC_COMP0_PARAM_ID        (0x4500036Fu)

#define CapSense_1_BUTTON13_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button13[0u].raw[0u])
#define CapSense_1_BUTTON13_SNS0_RAW0_OFFSET                (880u)
#define CapSense_1_BUTTON13_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON13_SNS0_RAW0_PARAM_ID              (0x81000370u)

#define CapSense_1_BUTTON13_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button13[0u].bsln[0u])
#define CapSense_1_BUTTON13_SNS0_BSLN0_OFFSET               (882u)
#define CapSense_1_BUTTON13_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON13_SNS0_BSLN0_PARAM_ID             (0x8D000372u)

#define CapSense_1_BUTTON13_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button13[0u].bslnExt[0u])
#define CapSense_1_BUTTON13_SNS0_BSLN_EXT0_OFFSET           (884u)
#define CapSense_1_BUTTON13_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON13_SNS0_BSLN_EXT0_PARAM_ID         (0x48000374u)

#define CapSense_1_BUTTON13_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button13[0u].diff)
#define CapSense_1_BUTTON13_SNS0_DIFF_OFFSET                (886u)
#define CapSense_1_BUTTON13_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON13_SNS0_DIFF_PARAM_ID              (0x8C000376u)

#define CapSense_1_BUTTON13_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button13[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON13_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (888u)
#define CapSense_1_BUTTON13_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON13_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B000378u)

#define CapSense_1_BUTTON13_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button13[0u].idacComp[0u])
#define CapSense_1_BUTTON13_SNS0_IDAC_COMP0_OFFSET          (889u)
#define CapSense_1_BUTTON13_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON13_SNS0_IDAC_COMP0_PARAM_ID        (0x4D000379u)

#define CapSense_1_BUTTON14_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button14[0u].raw[0u])
#define CapSense_1_BUTTON14_SNS0_RAW0_OFFSET                (890u)
#define CapSense_1_BUTTON14_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON14_SNS0_RAW0_PARAM_ID              (0x8F00037Au)

#define CapSense_1_BUTTON14_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button14[0u].bsln[0u])
#define CapSense_1_BUTTON14_SNS0_BSLN0_OFFSET               (892u)
#define CapSense_1_BUTTON14_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON14_SNS0_BSLN0_PARAM_ID             (0x8200037Cu)

#define CapSense_1_BUTTON14_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button14[0u].bslnExt[0u])
#define CapSense_1_BUTTON14_SNS0_BSLN_EXT0_OFFSET           (894u)
#define CapSense_1_BUTTON14_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON14_SNS0_BSLN_EXT0_PARAM_ID         (0x4600037Eu)

#define CapSense_1_BUTTON14_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button14[0u].diff)
#define CapSense_1_BUTTON14_SNS0_DIFF_OFFSET                (896u)
#define CapSense_1_BUTTON14_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON14_SNS0_DIFF_PARAM_ID              (0x80000380u)

#define CapSense_1_BUTTON14_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button14[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON14_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (898u)
#define CapSense_1_BUTTON14_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON14_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x44000382u)

#define CapSense_1_BUTTON14_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button14[0u].idacComp[0u])
#define CapSense_1_BUTTON14_SNS0_IDAC_COMP0_OFFSET          (899u)
#define CapSense_1_BUTTON14_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON14_SNS0_IDAC_COMP0_PARAM_ID        (0x42000383u)

#define CapSense_1_BUTTON15_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button15[0u].raw[0u])
#define CapSense_1_BUTTON15_SNS0_RAW0_OFFSET                (900u)
#define CapSense_1_BUTTON15_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON15_SNS0_RAW0_PARAM_ID              (0x81000384u)

#define CapSense_1_BUTTON15_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button15[0u].bsln[0u])
#define CapSense_1_BUTTON15_SNS0_BSLN0_OFFSET               (902u)
#define CapSense_1_BUTTON15_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON15_SNS0_BSLN0_PARAM_ID             (0x8D000386u)

#define CapSense_1_BUTTON15_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button15[0u].bslnExt[0u])
#define CapSense_1_BUTTON15_SNS0_BSLN_EXT0_OFFSET           (904u)
#define CapSense_1_BUTTON15_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON15_SNS0_BSLN_EXT0_PARAM_ID         (0x4A000388u)

#define CapSense_1_BUTTON15_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button15[0u].diff)
#define CapSense_1_BUTTON15_SNS0_DIFF_OFFSET                (906u)
#define CapSense_1_BUTTON15_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON15_SNS0_DIFF_PARAM_ID              (0x8E00038Au)

#define CapSense_1_BUTTON15_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button15[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON15_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (908u)
#define CapSense_1_BUTTON15_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON15_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4B00038Cu)

#define CapSense_1_BUTTON15_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button15[0u].idacComp[0u])
#define CapSense_1_BUTTON15_SNS0_IDAC_COMP0_OFFSET          (909u)
#define CapSense_1_BUTTON15_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON15_SNS0_IDAC_COMP0_PARAM_ID        (0x4D00038Du)

#define CapSense_1_BUTTON16_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button16[0u].raw[0u])
#define CapSense_1_BUTTON16_SNS0_RAW0_OFFSET                (910u)
#define CapSense_1_BUTTON16_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON16_SNS0_RAW0_PARAM_ID              (0x8F00038Eu)

#define CapSense_1_BUTTON16_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button16[0u].bsln[0u])
#define CapSense_1_BUTTON16_SNS0_BSLN0_OFFSET               (912u)
#define CapSense_1_BUTTON16_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON16_SNS0_BSLN0_PARAM_ID             (0x85000390u)

#define CapSense_1_BUTTON16_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button16[0u].bslnExt[0u])
#define CapSense_1_BUTTON16_SNS0_BSLN_EXT0_OFFSET           (914u)
#define CapSense_1_BUTTON16_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON16_SNS0_BSLN_EXT0_PARAM_ID         (0x41000392u)

#define CapSense_1_BUTTON16_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button16[0u].diff)
#define CapSense_1_BUTTON16_SNS0_DIFF_OFFSET                (916u)
#define CapSense_1_BUTTON16_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON16_SNS0_DIFF_PARAM_ID              (0x84000394u)

#define CapSense_1_BUTTON16_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button16[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON16_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (918u)
#define CapSense_1_BUTTON16_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON16_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x40000396u)

#define CapSense_1_BUTTON16_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button16[0u].idacComp[0u])
#define CapSense_1_BUTTON16_SNS0_IDAC_COMP0_OFFSET          (919u)
#define CapSense_1_BUTTON16_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON16_SNS0_IDAC_COMP0_PARAM_ID        (0x46000397u)

#define CapSense_1_BUTTON17_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button17[0u].raw[0u])
#define CapSense_1_BUTTON17_SNS0_RAW0_OFFSET                (920u)
#define CapSense_1_BUTTON17_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON17_SNS0_RAW0_PARAM_ID              (0x87000398u)

#define CapSense_1_BUTTON17_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button17[0u].bsln[0u])
#define CapSense_1_BUTTON17_SNS0_BSLN0_OFFSET               (922u)
#define CapSense_1_BUTTON17_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON17_SNS0_BSLN0_PARAM_ID             (0x8B00039Au)

#define CapSense_1_BUTTON17_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button17[0u].bslnExt[0u])
#define CapSense_1_BUTTON17_SNS0_BSLN_EXT0_OFFSET           (924u)
#define CapSense_1_BUTTON17_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON17_SNS0_BSLN_EXT0_PARAM_ID         (0x4E00039Cu)

#define CapSense_1_BUTTON17_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button17[0u].diff)
#define CapSense_1_BUTTON17_SNS0_DIFF_OFFSET                (926u)
#define CapSense_1_BUTTON17_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON17_SNS0_DIFF_PARAM_ID              (0x8A00039Eu)

#define CapSense_1_BUTTON17_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button17[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON17_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (928u)
#define CapSense_1_BUTTON17_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON17_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x420003A0u)

#define CapSense_1_BUTTON17_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button17[0u].idacComp[0u])
#define CapSense_1_BUTTON17_SNS0_IDAC_COMP0_OFFSET          (929u)
#define CapSense_1_BUTTON17_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON17_SNS0_IDAC_COMP0_PARAM_ID        (0x440003A1u)

#define CapSense_1_BUTTON18_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button18[0u].raw[0u])
#define CapSense_1_BUTTON18_SNS0_RAW0_OFFSET                (930u)
#define CapSense_1_BUTTON18_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON18_SNS0_RAW0_PARAM_ID              (0x860003A2u)

#define CapSense_1_BUTTON18_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button18[0u].bsln[0u])
#define CapSense_1_BUTTON18_SNS0_BSLN0_OFFSET               (932u)
#define CapSense_1_BUTTON18_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON18_SNS0_BSLN0_PARAM_ID             (0x8B0003A4u)

#define CapSense_1_BUTTON18_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button18[0u].bslnExt[0u])
#define CapSense_1_BUTTON18_SNS0_BSLN_EXT0_OFFSET           (934u)
#define CapSense_1_BUTTON18_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON18_SNS0_BSLN_EXT0_PARAM_ID         (0x4F0003A6u)

#define CapSense_1_BUTTON18_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button18[0u].diff)
#define CapSense_1_BUTTON18_SNS0_DIFF_OFFSET                (936u)
#define CapSense_1_BUTTON18_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON18_SNS0_DIFF_PARAM_ID              (0x880003A8u)

#define CapSense_1_BUTTON18_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button18[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON18_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (938u)
#define CapSense_1_BUTTON18_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON18_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C0003AAu)

#define CapSense_1_BUTTON18_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button18[0u].idacComp[0u])
#define CapSense_1_BUTTON18_SNS0_IDAC_COMP0_OFFSET          (939u)
#define CapSense_1_BUTTON18_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON18_SNS0_IDAC_COMP0_PARAM_ID        (0x4A0003ABu)

#define CapSense_1_BUTTON19_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button19[0u].raw[0u])
#define CapSense_1_BUTTON19_SNS0_RAW0_OFFSET                (940u)
#define CapSense_1_BUTTON19_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON19_SNS0_RAW0_PARAM_ID              (0x890003ACu)

#define CapSense_1_BUTTON19_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button19[0u].bsln[0u])
#define CapSense_1_BUTTON19_SNS0_BSLN0_OFFSET               (942u)
#define CapSense_1_BUTTON19_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON19_SNS0_BSLN0_PARAM_ID             (0x850003AEu)

#define CapSense_1_BUTTON19_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button19[0u].bslnExt[0u])
#define CapSense_1_BUTTON19_SNS0_BSLN_EXT0_OFFSET           (944u)
#define CapSense_1_BUTTON19_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON19_SNS0_BSLN_EXT0_PARAM_ID         (0x470003B0u)

#define CapSense_1_BUTTON19_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button19[0u].diff)
#define CapSense_1_BUTTON19_SNS0_DIFF_OFFSET                (946u)
#define CapSense_1_BUTTON19_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON19_SNS0_DIFF_PARAM_ID              (0x830003B2u)

#define CapSense_1_BUTTON19_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button19[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON19_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (948u)
#define CapSense_1_BUTTON19_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON19_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x460003B4u)

#define CapSense_1_BUTTON19_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button19[0u].idacComp[0u])
#define CapSense_1_BUTTON19_SNS0_IDAC_COMP0_OFFSET          (949u)
#define CapSense_1_BUTTON19_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON19_SNS0_IDAC_COMP0_PARAM_ID        (0x400003B5u)

#define CapSense_1_BUTTON20_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button20[0u].raw[0u])
#define CapSense_1_BUTTON20_SNS0_RAW0_OFFSET                (950u)
#define CapSense_1_BUTTON20_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON20_SNS0_RAW0_PARAM_ID              (0x820003B6u)

#define CapSense_1_BUTTON20_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button20[0u].bsln[0u])
#define CapSense_1_BUTTON20_SNS0_BSLN0_OFFSET               (952u)
#define CapSense_1_BUTTON20_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON20_SNS0_BSLN0_PARAM_ID             (0x8D0003B8u)

#define CapSense_1_BUTTON20_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button20[0u].bslnExt[0u])
#define CapSense_1_BUTTON20_SNS0_BSLN_EXT0_OFFSET           (954u)
#define CapSense_1_BUTTON20_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON20_SNS0_BSLN_EXT0_PARAM_ID         (0x490003BAu)

#define CapSense_1_BUTTON20_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button20[0u].diff)
#define CapSense_1_BUTTON20_SNS0_DIFF_OFFSET                (956u)
#define CapSense_1_BUTTON20_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON20_SNS0_DIFF_PARAM_ID              (0x8C0003BCu)

#define CapSense_1_BUTTON20_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button20[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON20_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (958u)
#define CapSense_1_BUTTON20_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON20_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x480003BEu)

#define CapSense_1_BUTTON20_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button20[0u].idacComp[0u])
#define CapSense_1_BUTTON20_SNS0_IDAC_COMP0_OFFSET          (959u)
#define CapSense_1_BUTTON20_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON20_SNS0_IDAC_COMP0_PARAM_ID        (0x4E0003BFu)

#define CapSense_1_BUTTON21_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button21[0u].raw[0u])
#define CapSense_1_BUTTON21_SNS0_RAW0_OFFSET                (960u)
#define CapSense_1_BUTTON21_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON21_SNS0_RAW0_PARAM_ID              (0x8D0003C0u)

#define CapSense_1_BUTTON21_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button21[0u].bsln[0u])
#define CapSense_1_BUTTON21_SNS0_BSLN0_OFFSET               (962u)
#define CapSense_1_BUTTON21_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON21_SNS0_BSLN0_PARAM_ID             (0x810003C2u)

#define CapSense_1_BUTTON21_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button21[0u].bslnExt[0u])
#define CapSense_1_BUTTON21_SNS0_BSLN_EXT0_OFFSET           (964u)
#define CapSense_1_BUTTON21_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON21_SNS0_BSLN_EXT0_PARAM_ID         (0x440003C4u)

#define CapSense_1_BUTTON21_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button21[0u].diff)
#define CapSense_1_BUTTON21_SNS0_DIFF_OFFSET                (966u)
#define CapSense_1_BUTTON21_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON21_SNS0_DIFF_PARAM_ID              (0x800003C6u)

#define CapSense_1_BUTTON21_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button21[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON21_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (968u)
#define CapSense_1_BUTTON21_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON21_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x470003C8u)

#define CapSense_1_BUTTON21_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button21[0u].idacComp[0u])
#define CapSense_1_BUTTON21_SNS0_IDAC_COMP0_OFFSET          (969u)
#define CapSense_1_BUTTON21_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON21_SNS0_IDAC_COMP0_PARAM_ID        (0x410003C9u)

#define CapSense_1_BUTTON22_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button22[0u].raw[0u])
#define CapSense_1_BUTTON22_SNS0_RAW0_OFFSET                (970u)
#define CapSense_1_BUTTON22_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON22_SNS0_RAW0_PARAM_ID              (0x830003CAu)

#define CapSense_1_BUTTON22_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button22[0u].bsln[0u])
#define CapSense_1_BUTTON22_SNS0_BSLN0_OFFSET               (972u)
#define CapSense_1_BUTTON22_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON22_SNS0_BSLN0_PARAM_ID             (0x8E0003CCu)

#define CapSense_1_BUTTON22_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button22[0u].bslnExt[0u])
#define CapSense_1_BUTTON22_SNS0_BSLN_EXT0_OFFSET           (974u)
#define CapSense_1_BUTTON22_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON22_SNS0_BSLN_EXT0_PARAM_ID         (0x4A0003CEu)

#define CapSense_1_BUTTON22_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button22[0u].diff)
#define CapSense_1_BUTTON22_SNS0_DIFF_OFFSET                (976u)
#define CapSense_1_BUTTON22_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON22_SNS0_DIFF_PARAM_ID              (0x880003D0u)

#define CapSense_1_BUTTON22_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button22[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON22_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (978u)
#define CapSense_1_BUTTON22_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON22_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4C0003D2u)

#define CapSense_1_BUTTON22_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button22[0u].idacComp[0u])
#define CapSense_1_BUTTON22_SNS0_IDAC_COMP0_OFFSET          (979u)
#define CapSense_1_BUTTON22_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON22_SNS0_IDAC_COMP0_PARAM_ID        (0x4A0003D3u)

#define CapSense_1_BUTTON23_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button23[0u].raw[0u])
#define CapSense_1_BUTTON23_SNS0_RAW0_OFFSET                (980u)
#define CapSense_1_BUTTON23_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON23_SNS0_RAW0_PARAM_ID              (0x890003D4u)

#define CapSense_1_BUTTON23_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button23[0u].bsln[0u])
#define CapSense_1_BUTTON23_SNS0_BSLN0_OFFSET               (982u)
#define CapSense_1_BUTTON23_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON23_SNS0_BSLN0_PARAM_ID             (0x850003D6u)

#define CapSense_1_BUTTON23_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button23[0u].bslnExt[0u])
#define CapSense_1_BUTTON23_SNS0_BSLN_EXT0_OFFSET           (984u)
#define CapSense_1_BUTTON23_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON23_SNS0_BSLN_EXT0_PARAM_ID         (0x420003D8u)

#define CapSense_1_BUTTON23_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button23[0u].diff)
#define CapSense_1_BUTTON23_SNS0_DIFF_OFFSET                (986u)
#define CapSense_1_BUTTON23_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON23_SNS0_DIFF_PARAM_ID              (0x860003DAu)

#define CapSense_1_BUTTON23_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button23[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON23_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (988u)
#define CapSense_1_BUTTON23_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON23_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x430003DCu)

#define CapSense_1_BUTTON23_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button23[0u].idacComp[0u])
#define CapSense_1_BUTTON23_SNS0_IDAC_COMP0_OFFSET          (989u)
#define CapSense_1_BUTTON23_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON23_SNS0_IDAC_COMP0_PARAM_ID        (0x450003DDu)

#define CapSense_1_BUTTON24_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button24[0u].raw[0u])
#define CapSense_1_BUTTON24_SNS0_RAW0_OFFSET                (990u)
#define CapSense_1_BUTTON24_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON24_SNS0_RAW0_PARAM_ID              (0x870003DEu)

#define CapSense_1_BUTTON24_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button24[0u].bsln[0u])
#define CapSense_1_BUTTON24_SNS0_BSLN0_OFFSET               (992u)
#define CapSense_1_BUTTON24_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON24_SNS0_BSLN0_PARAM_ID             (0x870003E0u)

#define CapSense_1_BUTTON24_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button24[0u].bslnExt[0u])
#define CapSense_1_BUTTON24_SNS0_BSLN_EXT0_OFFSET           (994u)
#define CapSense_1_BUTTON24_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON24_SNS0_BSLN_EXT0_PARAM_ID         (0x430003E2u)

#define CapSense_1_BUTTON24_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button24[0u].diff)
#define CapSense_1_BUTTON24_SNS0_DIFF_OFFSET                (996u)
#define CapSense_1_BUTTON24_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON24_SNS0_DIFF_PARAM_ID              (0x860003E4u)

#define CapSense_1_BUTTON24_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button24[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON24_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (998u)
#define CapSense_1_BUTTON24_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON24_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x420003E6u)

#define CapSense_1_BUTTON24_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button24[0u].idacComp[0u])
#define CapSense_1_BUTTON24_SNS0_IDAC_COMP0_OFFSET          (999u)
#define CapSense_1_BUTTON24_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON24_SNS0_IDAC_COMP0_PARAM_ID        (0x440003E7u)

#define CapSense_1_BUTTON25_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button25[0u].raw[0u])
#define CapSense_1_BUTTON25_SNS0_RAW0_OFFSET                (1000u)
#define CapSense_1_BUTTON25_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON25_SNS0_RAW0_PARAM_ID              (0x850003E8u)

#define CapSense_1_BUTTON25_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button25[0u].bsln[0u])
#define CapSense_1_BUTTON25_SNS0_BSLN0_OFFSET               (1002u)
#define CapSense_1_BUTTON25_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON25_SNS0_BSLN0_PARAM_ID             (0x890003EAu)

#define CapSense_1_BUTTON25_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button25[0u].bslnExt[0u])
#define CapSense_1_BUTTON25_SNS0_BSLN_EXT0_OFFSET           (1004u)
#define CapSense_1_BUTTON25_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON25_SNS0_BSLN_EXT0_PARAM_ID         (0x4C0003ECu)

#define CapSense_1_BUTTON25_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button25[0u].diff)
#define CapSense_1_BUTTON25_SNS0_DIFF_OFFSET                (1006u)
#define CapSense_1_BUTTON25_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON25_SNS0_DIFF_PARAM_ID              (0x880003EEu)

#define CapSense_1_BUTTON25_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button25[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON25_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (1008u)
#define CapSense_1_BUTTON25_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON25_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A0003F0u)

#define CapSense_1_BUTTON25_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button25[0u].idacComp[0u])
#define CapSense_1_BUTTON25_SNS0_IDAC_COMP0_OFFSET          (1009u)
#define CapSense_1_BUTTON25_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON25_SNS0_IDAC_COMP0_PARAM_ID        (0x4C0003F1u)

#define CapSense_1_BUTTON26_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button26[0u].raw[0u])
#define CapSense_1_BUTTON26_SNS0_RAW0_OFFSET                (1010u)
#define CapSense_1_BUTTON26_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON26_SNS0_RAW0_PARAM_ID              (0x8E0003F2u)

#define CapSense_1_BUTTON26_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button26[0u].bsln[0u])
#define CapSense_1_BUTTON26_SNS0_BSLN0_OFFSET               (1012u)
#define CapSense_1_BUTTON26_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON26_SNS0_BSLN0_PARAM_ID             (0x830003F4u)

#define CapSense_1_BUTTON26_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button26[0u].bslnExt[0u])
#define CapSense_1_BUTTON26_SNS0_BSLN_EXT0_OFFSET           (1014u)
#define CapSense_1_BUTTON26_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON26_SNS0_BSLN_EXT0_PARAM_ID         (0x470003F6u)

#define CapSense_1_BUTTON26_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button26[0u].diff)
#define CapSense_1_BUTTON26_SNS0_DIFF_OFFSET                (1016u)
#define CapSense_1_BUTTON26_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON26_SNS0_DIFF_PARAM_ID              (0x800003F8u)

#define CapSense_1_BUTTON26_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button26[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON26_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (1018u)
#define CapSense_1_BUTTON26_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON26_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x440003FAu)

#define CapSense_1_BUTTON26_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button26[0u].idacComp[0u])
#define CapSense_1_BUTTON26_SNS0_IDAC_COMP0_OFFSET          (1019u)
#define CapSense_1_BUTTON26_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON26_SNS0_IDAC_COMP0_PARAM_ID        (0x420003FBu)

#define CapSense_1_BUTTON27_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button27[0u].raw[0u])
#define CapSense_1_BUTTON27_SNS0_RAW0_OFFSET                (1020u)
#define CapSense_1_BUTTON27_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON27_SNS0_RAW0_PARAM_ID              (0x810003FCu)

#define CapSense_1_BUTTON27_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button27[0u].bsln[0u])
#define CapSense_1_BUTTON27_SNS0_BSLN0_OFFSET               (1022u)
#define CapSense_1_BUTTON27_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON27_SNS0_BSLN0_PARAM_ID             (0x8D0003FEu)

#define CapSense_1_BUTTON27_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button27[0u].bslnExt[0u])
#define CapSense_1_BUTTON27_SNS0_BSLN_EXT0_OFFSET           (1024u)
#define CapSense_1_BUTTON27_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON27_SNS0_BSLN_EXT0_PARAM_ID         (0x48000400u)

#define CapSense_1_BUTTON27_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button27[0u].diff)
#define CapSense_1_BUTTON27_SNS0_DIFF_OFFSET                (1026u)
#define CapSense_1_BUTTON27_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON27_SNS0_DIFF_PARAM_ID              (0x8C000402u)

#define CapSense_1_BUTTON27_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button27[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON27_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (1028u)
#define CapSense_1_BUTTON27_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON27_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x49000404u)

#define CapSense_1_BUTTON27_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button27[0u].idacComp[0u])
#define CapSense_1_BUTTON27_SNS0_IDAC_COMP0_OFFSET          (1029u)
#define CapSense_1_BUTTON27_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON27_SNS0_IDAC_COMP0_PARAM_ID        (0x4F000405u)

#define CapSense_1_BUTTON28_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button28[0u].raw[0u])
#define CapSense_1_BUTTON28_SNS0_RAW0_OFFSET                (1030u)
#define CapSense_1_BUTTON28_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON28_SNS0_RAW0_PARAM_ID              (0x8D000406u)

#define CapSense_1_BUTTON28_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button28[0u].bsln[0u])
#define CapSense_1_BUTTON28_SNS0_BSLN0_OFFSET               (1032u)
#define CapSense_1_BUTTON28_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON28_SNS0_BSLN0_PARAM_ID             (0x82000408u)

#define CapSense_1_BUTTON28_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button28[0u].bslnExt[0u])
#define CapSense_1_BUTTON28_SNS0_BSLN_EXT0_OFFSET           (1034u)
#define CapSense_1_BUTTON28_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON28_SNS0_BSLN_EXT0_PARAM_ID         (0x4600040Au)

#define CapSense_1_BUTTON28_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button28[0u].diff)
#define CapSense_1_BUTTON28_SNS0_DIFF_OFFSET                (1036u)
#define CapSense_1_BUTTON28_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON28_SNS0_DIFF_PARAM_ID              (0x8300040Cu)

#define CapSense_1_BUTTON28_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button28[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON28_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (1038u)
#define CapSense_1_BUTTON28_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON28_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4700040Eu)

#define CapSense_1_BUTTON28_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button28[0u].idacComp[0u])
#define CapSense_1_BUTTON28_SNS0_IDAC_COMP0_OFFSET          (1039u)
#define CapSense_1_BUTTON28_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON28_SNS0_IDAC_COMP0_PARAM_ID        (0x4100040Fu)

#define CapSense_1_BUTTON29_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button29[0u].raw[0u])
#define CapSense_1_BUTTON29_SNS0_RAW0_OFFSET                (1040u)
#define CapSense_1_BUTTON29_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON29_SNS0_RAW0_PARAM_ID              (0x85000410u)

#define CapSense_1_BUTTON29_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button29[0u].bsln[0u])
#define CapSense_1_BUTTON29_SNS0_BSLN0_OFFSET               (1042u)
#define CapSense_1_BUTTON29_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON29_SNS0_BSLN0_PARAM_ID             (0x89000412u)

#define CapSense_1_BUTTON29_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button29[0u].bslnExt[0u])
#define CapSense_1_BUTTON29_SNS0_BSLN_EXT0_OFFSET           (1044u)
#define CapSense_1_BUTTON29_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON29_SNS0_BSLN_EXT0_PARAM_ID         (0x4C000414u)

#define CapSense_1_BUTTON29_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button29[0u].diff)
#define CapSense_1_BUTTON29_SNS0_DIFF_OFFSET                (1046u)
#define CapSense_1_BUTTON29_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON29_SNS0_DIFF_PARAM_ID              (0x88000416u)

#define CapSense_1_BUTTON29_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button29[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON29_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (1048u)
#define CapSense_1_BUTTON29_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON29_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4F000418u)

#define CapSense_1_BUTTON29_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button29[0u].idacComp[0u])
#define CapSense_1_BUTTON29_SNS0_IDAC_COMP0_OFFSET          (1049u)
#define CapSense_1_BUTTON29_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON29_SNS0_IDAC_COMP0_PARAM_ID        (0x49000419u)

#define CapSense_1_BUTTON30_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button30[0u].raw[0u])
#define CapSense_1_BUTTON30_SNS0_RAW0_OFFSET                (1050u)
#define CapSense_1_BUTTON30_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON30_SNS0_RAW0_PARAM_ID              (0x8B00041Au)

#define CapSense_1_BUTTON30_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button30[0u].bsln[0u])
#define CapSense_1_BUTTON30_SNS0_BSLN0_OFFSET               (1052u)
#define CapSense_1_BUTTON30_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON30_SNS0_BSLN0_PARAM_ID             (0x8600041Cu)

#define CapSense_1_BUTTON30_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button30[0u].bslnExt[0u])
#define CapSense_1_BUTTON30_SNS0_BSLN_EXT0_OFFSET           (1054u)
#define CapSense_1_BUTTON30_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON30_SNS0_BSLN_EXT0_PARAM_ID         (0x4200041Eu)

#define CapSense_1_BUTTON30_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button30[0u].diff)
#define CapSense_1_BUTTON30_SNS0_DIFF_OFFSET                (1056u)
#define CapSense_1_BUTTON30_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON30_SNS0_DIFF_PARAM_ID              (0x8A000420u)

#define CapSense_1_BUTTON30_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button30[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON30_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (1058u)
#define CapSense_1_BUTTON30_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON30_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4E000422u)

#define CapSense_1_BUTTON30_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button30[0u].idacComp[0u])
#define CapSense_1_BUTTON30_SNS0_IDAC_COMP0_OFFSET          (1059u)
#define CapSense_1_BUTTON30_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON30_SNS0_IDAC_COMP0_PARAM_ID        (0x48000423u)

#define CapSense_1_BUTTON31_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button31[0u].raw[0u])
#define CapSense_1_BUTTON31_SNS0_RAW0_OFFSET                (1060u)
#define CapSense_1_BUTTON31_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON31_SNS0_RAW0_PARAM_ID              (0x8B000424u)

#define CapSense_1_BUTTON31_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button31[0u].bsln[0u])
#define CapSense_1_BUTTON31_SNS0_BSLN0_OFFSET               (1062u)
#define CapSense_1_BUTTON31_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON31_SNS0_BSLN0_PARAM_ID             (0x87000426u)

#define CapSense_1_BUTTON31_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button31[0u].bslnExt[0u])
#define CapSense_1_BUTTON31_SNS0_BSLN_EXT0_OFFSET           (1064u)
#define CapSense_1_BUTTON31_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON31_SNS0_BSLN_EXT0_PARAM_ID         (0x40000428u)

#define CapSense_1_BUTTON31_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button31[0u].diff)
#define CapSense_1_BUTTON31_SNS0_DIFF_OFFSET                (1066u)
#define CapSense_1_BUTTON31_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON31_SNS0_DIFF_PARAM_ID              (0x8400042Au)

#define CapSense_1_BUTTON31_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button31[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON31_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (1068u)
#define CapSense_1_BUTTON31_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON31_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4100042Cu)

#define CapSense_1_BUTTON31_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button31[0u].idacComp[0u])
#define CapSense_1_BUTTON31_SNS0_IDAC_COMP0_OFFSET          (1069u)
#define CapSense_1_BUTTON31_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON31_SNS0_IDAC_COMP0_PARAM_ID        (0x4700042Du)

#define CapSense_1_BUTTON32_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button32[0u].raw[0u])
#define CapSense_1_BUTTON32_SNS0_RAW0_OFFSET                (1070u)
#define CapSense_1_BUTTON32_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON32_SNS0_RAW0_PARAM_ID              (0x8500042Eu)

#define CapSense_1_BUTTON32_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button32[0u].bsln[0u])
#define CapSense_1_BUTTON32_SNS0_BSLN0_OFFSET               (1072u)
#define CapSense_1_BUTTON32_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON32_SNS0_BSLN0_PARAM_ID             (0x8F000430u)

#define CapSense_1_BUTTON32_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button32[0u].bslnExt[0u])
#define CapSense_1_BUTTON32_SNS0_BSLN_EXT0_OFFSET           (1074u)
#define CapSense_1_BUTTON32_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON32_SNS0_BSLN_EXT0_PARAM_ID         (0x4B000432u)

#define CapSense_1_BUTTON32_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button32[0u].diff)
#define CapSense_1_BUTTON32_SNS0_DIFF_OFFSET                (1076u)
#define CapSense_1_BUTTON32_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON32_SNS0_DIFF_PARAM_ID              (0x8E000434u)

#define CapSense_1_BUTTON32_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button32[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON32_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (1078u)
#define CapSense_1_BUTTON32_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON32_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x4A000436u)

#define CapSense_1_BUTTON32_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button32[0u].idacComp[0u])
#define CapSense_1_BUTTON32_SNS0_IDAC_COMP0_OFFSET          (1079u)
#define CapSense_1_BUTTON32_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON32_SNS0_IDAC_COMP0_PARAM_ID        (0x4C000437u)

#define CapSense_1_BUTTON33_SNS0_RAW0_VALUE                 (CapSense_1_dsRam.snsList.button33[0u].raw[0u])
#define CapSense_1_BUTTON33_SNS0_RAW0_OFFSET                (1080u)
#define CapSense_1_BUTTON33_SNS0_RAW0_SIZE                  (2u)
#define CapSense_1_BUTTON33_SNS0_RAW0_PARAM_ID              (0x8D000438u)

#define CapSense_1_BUTTON33_SNS0_BSLN0_VALUE                (CapSense_1_dsRam.snsList.button33[0u].bsln[0u])
#define CapSense_1_BUTTON33_SNS0_BSLN0_OFFSET               (1082u)
#define CapSense_1_BUTTON33_SNS0_BSLN0_SIZE                 (2u)
#define CapSense_1_BUTTON33_SNS0_BSLN0_PARAM_ID             (0x8100043Au)

#define CapSense_1_BUTTON33_SNS0_BSLN_EXT0_VALUE            (CapSense_1_dsRam.snsList.button33[0u].bslnExt[0u])
#define CapSense_1_BUTTON33_SNS0_BSLN_EXT0_OFFSET           (1084u)
#define CapSense_1_BUTTON33_SNS0_BSLN_EXT0_SIZE             (1u)
#define CapSense_1_BUTTON33_SNS0_BSLN_EXT0_PARAM_ID         (0x4400043Cu)

#define CapSense_1_BUTTON33_SNS0_DIFF_VALUE                 (CapSense_1_dsRam.snsList.button33[0u].diff)
#define CapSense_1_BUTTON33_SNS0_DIFF_OFFSET                (1086u)
#define CapSense_1_BUTTON33_SNS0_DIFF_SIZE                  (2u)
#define CapSense_1_BUTTON33_SNS0_DIFF_PARAM_ID              (0x8000043Eu)

#define CapSense_1_BUTTON33_SNS0_NEG_BSLN_RST_CNT0_VALUE    (CapSense_1_dsRam.snsList.button33[0u].negBslnRstCnt[0u])
#define CapSense_1_BUTTON33_SNS0_NEG_BSLN_RST_CNT0_OFFSET   (1088u)
#define CapSense_1_BUTTON33_SNS0_NEG_BSLN_RST_CNT0_SIZE     (1u)
#define CapSense_1_BUTTON33_SNS0_NEG_BSLN_RST_CNT0_PARAM_ID (0x45000440u)

#define CapSense_1_BUTTON33_SNS0_IDAC_COMP0_VALUE           (CapSense_1_dsRam.snsList.button33[0u].idacComp[0u])
#define CapSense_1_BUTTON33_SNS0_IDAC_COMP0_OFFSET          (1089u)
#define CapSense_1_BUTTON33_SNS0_IDAC_COMP0_SIZE            (1u)
#define CapSense_1_BUTTON33_SNS0_IDAC_COMP0_PARAM_ID        (0x43000441u)

#define CapSense_1_SNR_TEST_WIDGET_ID_VALUE                 (CapSense_1_dsRam.snrTestWidgetId)
#define CapSense_1_SNR_TEST_WIDGET_ID_OFFSET                (1090u)
#define CapSense_1_SNR_TEST_WIDGET_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_WIDGET_ID_PARAM_ID              (0x62000442u)

#define CapSense_1_SNR_TEST_SENSOR_ID_VALUE                 (CapSense_1_dsRam.snrTestSensorId)
#define CapSense_1_SNR_TEST_SENSOR_ID_OFFSET                (1091u)
#define CapSense_1_SNR_TEST_SENSOR_ID_SIZE                  (1u)
#define CapSense_1_SNR_TEST_SENSOR_ID_PARAM_ID              (0x64000443u)

#define CapSense_1_SNR_TEST_SCAN_COUNTER_VALUE              (CapSense_1_dsRam.snrTestScanCounter)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_OFFSET             (1092u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_SIZE               (2u)
#define CapSense_1_SNR_TEST_SCAN_COUNTER_PARAM_ID           (0x8C000444u)

#define CapSense_1_SNR_TEST_RAW_COUNT0_VALUE                (CapSense_1_dsRam.snrTestRawCount[0u])
#define CapSense_1_SNR_TEST_RAW_COUNT0_OFFSET               (1094u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_SIZE                 (2u)
#define CapSense_1_SNR_TEST_RAW_COUNT0_PARAM_ID             (0x80000446u)

#define CapSense_1_SCAN_CSD_ISC_VALUE                       (CapSense_1_dsRam.scanCsdISC)
#define CapSense_1_SCAN_CSD_ISC_OFFSET                      (1096u)
#define CapSense_1_SCAN_CSD_ISC_SIZE                        (1u)
#define CapSense_1_SCAN_CSD_ISC_PARAM_ID                    (0x47000448u)

#define CapSense_1_SCAN_CURRENT_ISC_VALUE                   (CapSense_1_dsRam.scanCurrentISC)
#define CapSense_1_SCAN_CURRENT_ISC_OFFSET                  (1097u)
#define CapSense_1_SCAN_CURRENT_ISC_SIZE                    (1u)
#define CapSense_1_SCAN_CURRENT_ISC_PARAM_ID                (0x41000449u)


/*****************************************************************************/
/* Flash Data structure register definitions                                 */
/*****************************************************************************/
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsFlash)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_OFFSET             (0u)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON0_PTR2SNS_FLASH_PARAM_ID           (0xD1000000u)

#define CapSense_1_BUTTON0_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[0].ptr2WdgtRam)
#define CapSense_1_BUTTON0_PTR2WD_RAM_OFFSET                (4u)
#define CapSense_1_BUTTON0_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON0_PTR2WD_RAM_PARAM_ID              (0xD0000004u)

#define CapSense_1_BUTTON0_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[0].ptr2SnsRam)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_OFFSET               (8u)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON0_PTR2SNS_RAM_PARAM_ID             (0xD3000008u)

#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[0].ptr2FltrHistory)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_OFFSET          (12u)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON0_PTR2FLTR_HISTORY_PARAM_ID        (0xD200000Cu)

#define CapSense_1_BUTTON0_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[0].ptr2DebounceArr)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_OFFSET              (16u)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON0_PTR2DEBOUNCE_PARAM_ID            (0xD4000010u)

#define CapSense_1_BUTTON0_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[0].staticConfig)
#define CapSense_1_BUTTON0_STATIC_CONFIG_OFFSET             (20u)
#define CapSense_1_BUTTON0_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON0_STATIC_CONFIG_PARAM_ID           (0xD5000014u)

#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[0].totalNumSns)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_OFFSET             (24u)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON0_TOTAL_NUM_SNS_PARAM_ID           (0x99000018u)

#define CapSense_1_BUTTON0_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[0].wdgtType)
#define CapSense_1_BUTTON0_TYPE_OFFSET                      (26u)
#define CapSense_1_BUTTON0_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON0_TYPE_PARAM_ID                    (0x5D00001Au)

#define CapSense_1_BUTTON0_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[0].numCols)
#define CapSense_1_BUTTON0_NUM_COLS_OFFSET                  (27u)
#define CapSense_1_BUTTON0_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON0_NUM_COLS_PARAM_ID                (0x5B00001Bu)

#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[0].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_OFFSET           (28u)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON0_PTR2NOISE_ENVLP_PARAM_ID         (0xD700001Cu)

#define CapSense_1_BUTTON1_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsFlash)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_OFFSET             (32u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON1_PTR2SNS_FLASH_PARAM_ID           (0xD8010020u)

#define CapSense_1_BUTTON1_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[1].ptr2WdgtRam)
#define CapSense_1_BUTTON1_PTR2WD_RAM_OFFSET                (36u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON1_PTR2WD_RAM_PARAM_ID              (0xD9010024u)

#define CapSense_1_BUTTON1_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[1].ptr2SnsRam)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_OFFSET               (40u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON1_PTR2SNS_RAM_PARAM_ID             (0xDA010028u)

#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[1].ptr2FltrHistory)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_OFFSET          (44u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON1_PTR2FLTR_HISTORY_PARAM_ID        (0xDB01002Cu)

#define CapSense_1_BUTTON1_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[1].ptr2DebounceArr)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_OFFSET              (48u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON1_PTR2DEBOUNCE_PARAM_ID            (0xDD010030u)

#define CapSense_1_BUTTON1_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[1].staticConfig)
#define CapSense_1_BUTTON1_STATIC_CONFIG_OFFSET             (52u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON1_STATIC_CONFIG_PARAM_ID           (0xDC010034u)

#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[1].totalNumSns)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_OFFSET             (56u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON1_TOTAL_NUM_SNS_PARAM_ID           (0x90010038u)

#define CapSense_1_BUTTON1_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[1].wdgtType)
#define CapSense_1_BUTTON1_TYPE_OFFSET                      (58u)
#define CapSense_1_BUTTON1_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON1_TYPE_PARAM_ID                    (0x5401003Au)

#define CapSense_1_BUTTON1_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[1].numCols)
#define CapSense_1_BUTTON1_NUM_COLS_OFFSET                  (59u)
#define CapSense_1_BUTTON1_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON1_NUM_COLS_PARAM_ID                (0x5201003Bu)

#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[1].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_OFFSET           (60u)
#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON1_PTR2NOISE_ENVLP_PARAM_ID         (0xDE01003Cu)

#define CapSense_1_BUTTON2_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsFlash)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_OFFSET             (64u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON2_PTR2SNS_FLASH_PARAM_ID           (0xDA020040u)

#define CapSense_1_BUTTON2_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[2].ptr2WdgtRam)
#define CapSense_1_BUTTON2_PTR2WD_RAM_OFFSET                (68u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON2_PTR2WD_RAM_PARAM_ID              (0xDB020044u)

#define CapSense_1_BUTTON2_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[2].ptr2SnsRam)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_OFFSET               (72u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON2_PTR2SNS_RAM_PARAM_ID             (0xD8020048u)

#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[2].ptr2FltrHistory)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_OFFSET          (76u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON2_PTR2FLTR_HISTORY_PARAM_ID        (0xD902004Cu)

#define CapSense_1_BUTTON2_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[2].ptr2DebounceArr)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_OFFSET              (80u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON2_PTR2DEBOUNCE_PARAM_ID            (0xDF020050u)

#define CapSense_1_BUTTON2_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[2].staticConfig)
#define CapSense_1_BUTTON2_STATIC_CONFIG_OFFSET             (84u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON2_STATIC_CONFIG_PARAM_ID           (0xDE020054u)

#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[2].totalNumSns)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_OFFSET             (88u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON2_TOTAL_NUM_SNS_PARAM_ID           (0x92020058u)

#define CapSense_1_BUTTON2_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[2].wdgtType)
#define CapSense_1_BUTTON2_TYPE_OFFSET                      (90u)
#define CapSense_1_BUTTON2_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON2_TYPE_PARAM_ID                    (0x5602005Au)

#define CapSense_1_BUTTON2_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[2].numCols)
#define CapSense_1_BUTTON2_NUM_COLS_OFFSET                  (91u)
#define CapSense_1_BUTTON2_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON2_NUM_COLS_PARAM_ID                (0x5002005Bu)

#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[2].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_OFFSET           (92u)
#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON2_PTR2NOISE_ENVLP_PARAM_ID         (0xDC02005Cu)

#define CapSense_1_BUTTON3_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsFlash)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_OFFSET             (96u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON3_PTR2SNS_FLASH_PARAM_ID           (0xD3030060u)

#define CapSense_1_BUTTON3_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[3].ptr2WdgtRam)
#define CapSense_1_BUTTON3_PTR2WD_RAM_OFFSET                (100u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON3_PTR2WD_RAM_PARAM_ID              (0xD2030064u)

#define CapSense_1_BUTTON3_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[3].ptr2SnsRam)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_OFFSET               (104u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON3_PTR2SNS_RAM_PARAM_ID             (0xD1030068u)

#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[3].ptr2FltrHistory)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_OFFSET          (108u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON3_PTR2FLTR_HISTORY_PARAM_ID        (0xD003006Cu)

#define CapSense_1_BUTTON3_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[3].ptr2DebounceArr)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_OFFSET              (112u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON3_PTR2DEBOUNCE_PARAM_ID            (0xD6030070u)

#define CapSense_1_BUTTON3_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[3].staticConfig)
#define CapSense_1_BUTTON3_STATIC_CONFIG_OFFSET             (116u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON3_STATIC_CONFIG_PARAM_ID           (0xD7030074u)

#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[3].totalNumSns)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_OFFSET             (120u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON3_TOTAL_NUM_SNS_PARAM_ID           (0x9B030078u)

#define CapSense_1_BUTTON3_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[3].wdgtType)
#define CapSense_1_BUTTON3_TYPE_OFFSET                      (122u)
#define CapSense_1_BUTTON3_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON3_TYPE_PARAM_ID                    (0x5F03007Au)

#define CapSense_1_BUTTON3_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[3].numCols)
#define CapSense_1_BUTTON3_NUM_COLS_OFFSET                  (123u)
#define CapSense_1_BUTTON3_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON3_NUM_COLS_PARAM_ID                (0x5903007Bu)

#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[3].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_OFFSET           (124u)
#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON3_PTR2NOISE_ENVLP_PARAM_ID         (0xD503007Cu)

#define CapSense_1_BUTTON4_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsFlash)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_OFFSET             (128u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON4_PTR2SNS_FLASH_PARAM_ID           (0xDE040080u)

#define CapSense_1_BUTTON4_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[4].ptr2WdgtRam)
#define CapSense_1_BUTTON4_PTR2WD_RAM_OFFSET                (132u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON4_PTR2WD_RAM_PARAM_ID              (0xDF040084u)

#define CapSense_1_BUTTON4_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[4].ptr2SnsRam)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_OFFSET               (136u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON4_PTR2SNS_RAM_PARAM_ID             (0xDC040088u)

#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[4].ptr2FltrHistory)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_OFFSET          (140u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON4_PTR2FLTR_HISTORY_PARAM_ID        (0xDD04008Cu)

#define CapSense_1_BUTTON4_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[4].ptr2DebounceArr)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_OFFSET              (144u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON4_PTR2DEBOUNCE_PARAM_ID            (0xDB040090u)

#define CapSense_1_BUTTON4_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[4].staticConfig)
#define CapSense_1_BUTTON4_STATIC_CONFIG_OFFSET             (148u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON4_STATIC_CONFIG_PARAM_ID           (0xDA040094u)

#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[4].totalNumSns)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_OFFSET             (152u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON4_TOTAL_NUM_SNS_PARAM_ID           (0x96040098u)

#define CapSense_1_BUTTON4_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[4].wdgtType)
#define CapSense_1_BUTTON4_TYPE_OFFSET                      (154u)
#define CapSense_1_BUTTON4_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON4_TYPE_PARAM_ID                    (0x5204009Au)

#define CapSense_1_BUTTON4_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[4].numCols)
#define CapSense_1_BUTTON4_NUM_COLS_OFFSET                  (155u)
#define CapSense_1_BUTTON4_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON4_NUM_COLS_PARAM_ID                (0x5404009Bu)

#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[4].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_OFFSET           (156u)
#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON4_PTR2NOISE_ENVLP_PARAM_ID         (0xD804009Cu)

#define CapSense_1_BUTTON5_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsFlash)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_OFFSET             (160u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON5_PTR2SNS_FLASH_PARAM_ID           (0xD70500A0u)

#define CapSense_1_BUTTON5_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[5].ptr2WdgtRam)
#define CapSense_1_BUTTON5_PTR2WD_RAM_OFFSET                (164u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON5_PTR2WD_RAM_PARAM_ID              (0xD60500A4u)

#define CapSense_1_BUTTON5_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[5].ptr2SnsRam)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_OFFSET               (168u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON5_PTR2SNS_RAM_PARAM_ID             (0xD50500A8u)

#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[5].ptr2FltrHistory)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_OFFSET          (172u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON5_PTR2FLTR_HISTORY_PARAM_ID        (0xD40500ACu)

#define CapSense_1_BUTTON5_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[5].ptr2DebounceArr)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_OFFSET              (176u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON5_PTR2DEBOUNCE_PARAM_ID            (0xD20500B0u)

#define CapSense_1_BUTTON5_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[5].staticConfig)
#define CapSense_1_BUTTON5_STATIC_CONFIG_OFFSET             (180u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON5_STATIC_CONFIG_PARAM_ID           (0xD30500B4u)

#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[5].totalNumSns)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_OFFSET             (184u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON5_TOTAL_NUM_SNS_PARAM_ID           (0x9F0500B8u)

#define CapSense_1_BUTTON5_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[5].wdgtType)
#define CapSense_1_BUTTON5_TYPE_OFFSET                      (186u)
#define CapSense_1_BUTTON5_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON5_TYPE_PARAM_ID                    (0x5B0500BAu)

#define CapSense_1_BUTTON5_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[5].numCols)
#define CapSense_1_BUTTON5_NUM_COLS_OFFSET                  (187u)
#define CapSense_1_BUTTON5_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON5_NUM_COLS_PARAM_ID                (0x5D0500BBu)

#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[5].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_OFFSET           (188u)
#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON5_PTR2NOISE_ENVLP_PARAM_ID         (0xD10500BCu)

#define CapSense_1_BUTTON6_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[6].ptr2SnsFlash)
#define CapSense_1_BUTTON6_PTR2SNS_FLASH_OFFSET             (192u)
#define CapSense_1_BUTTON6_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON6_PTR2SNS_FLASH_PARAM_ID           (0xD50600C0u)

#define CapSense_1_BUTTON6_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[6].ptr2WdgtRam)
#define CapSense_1_BUTTON6_PTR2WD_RAM_OFFSET                (196u)
#define CapSense_1_BUTTON6_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON6_PTR2WD_RAM_PARAM_ID              (0xD40600C4u)

#define CapSense_1_BUTTON6_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[6].ptr2SnsRam)
#define CapSense_1_BUTTON6_PTR2SNS_RAM_OFFSET               (200u)
#define CapSense_1_BUTTON6_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON6_PTR2SNS_RAM_PARAM_ID             (0xD70600C8u)

#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[6].ptr2FltrHistory)
#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_OFFSET          (204u)
#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON6_PTR2FLTR_HISTORY_PARAM_ID        (0xD60600CCu)

#define CapSense_1_BUTTON6_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[6].ptr2DebounceArr)
#define CapSense_1_BUTTON6_PTR2DEBOUNCE_OFFSET              (208u)
#define CapSense_1_BUTTON6_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON6_PTR2DEBOUNCE_PARAM_ID            (0xD00600D0u)

#define CapSense_1_BUTTON6_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[6].staticConfig)
#define CapSense_1_BUTTON6_STATIC_CONFIG_OFFSET             (212u)
#define CapSense_1_BUTTON6_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON6_STATIC_CONFIG_PARAM_ID           (0xD10600D4u)

#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[6].totalNumSns)
#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_OFFSET             (216u)
#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON6_TOTAL_NUM_SNS_PARAM_ID           (0x9D0600D8u)

#define CapSense_1_BUTTON6_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[6].wdgtType)
#define CapSense_1_BUTTON6_TYPE_OFFSET                      (218u)
#define CapSense_1_BUTTON6_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON6_TYPE_PARAM_ID                    (0x590600DAu)

#define CapSense_1_BUTTON6_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[6].numCols)
#define CapSense_1_BUTTON6_NUM_COLS_OFFSET                  (219u)
#define CapSense_1_BUTTON6_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON6_NUM_COLS_PARAM_ID                (0x5F0600DBu)

#define CapSense_1_BUTTON6_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[6].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON6_PTR2NOISE_ENVLP_OFFSET           (220u)
#define CapSense_1_BUTTON6_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON6_PTR2NOISE_ENVLP_PARAM_ID         (0xD30600DCu)

#define CapSense_1_BUTTON7_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[7].ptr2SnsFlash)
#define CapSense_1_BUTTON7_PTR2SNS_FLASH_OFFSET             (224u)
#define CapSense_1_BUTTON7_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON7_PTR2SNS_FLASH_PARAM_ID           (0xDC0700E0u)

#define CapSense_1_BUTTON7_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[7].ptr2WdgtRam)
#define CapSense_1_BUTTON7_PTR2WD_RAM_OFFSET                (228u)
#define CapSense_1_BUTTON7_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON7_PTR2WD_RAM_PARAM_ID              (0xDD0700E4u)

#define CapSense_1_BUTTON7_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[7].ptr2SnsRam)
#define CapSense_1_BUTTON7_PTR2SNS_RAM_OFFSET               (232u)
#define CapSense_1_BUTTON7_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON7_PTR2SNS_RAM_PARAM_ID             (0xDE0700E8u)

#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[7].ptr2FltrHistory)
#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_OFFSET          (236u)
#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON7_PTR2FLTR_HISTORY_PARAM_ID        (0xDF0700ECu)

#define CapSense_1_BUTTON7_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[7].ptr2DebounceArr)
#define CapSense_1_BUTTON7_PTR2DEBOUNCE_OFFSET              (240u)
#define CapSense_1_BUTTON7_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON7_PTR2DEBOUNCE_PARAM_ID            (0xD90700F0u)

#define CapSense_1_BUTTON7_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[7].staticConfig)
#define CapSense_1_BUTTON7_STATIC_CONFIG_OFFSET             (244u)
#define CapSense_1_BUTTON7_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON7_STATIC_CONFIG_PARAM_ID           (0xD80700F4u)

#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[7].totalNumSns)
#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_OFFSET             (248u)
#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON7_TOTAL_NUM_SNS_PARAM_ID           (0x940700F8u)

#define CapSense_1_BUTTON7_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[7].wdgtType)
#define CapSense_1_BUTTON7_TYPE_OFFSET                      (250u)
#define CapSense_1_BUTTON7_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON7_TYPE_PARAM_ID                    (0x500700FAu)

#define CapSense_1_BUTTON7_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[7].numCols)
#define CapSense_1_BUTTON7_NUM_COLS_OFFSET                  (251u)
#define CapSense_1_BUTTON7_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON7_NUM_COLS_PARAM_ID                (0x560700FBu)

#define CapSense_1_BUTTON7_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[7].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON7_PTR2NOISE_ENVLP_OFFSET           (252u)
#define CapSense_1_BUTTON7_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON7_PTR2NOISE_ENVLP_PARAM_ID         (0xDA0700FCu)

#define CapSense_1_BUTTON8_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[8].ptr2SnsFlash)
#define CapSense_1_BUTTON8_PTR2SNS_FLASH_OFFSET             (256u)
#define CapSense_1_BUTTON8_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON8_PTR2SNS_FLASH_PARAM_ID           (0xDB080100u)

#define CapSense_1_BUTTON8_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[8].ptr2WdgtRam)
#define CapSense_1_BUTTON8_PTR2WD_RAM_OFFSET                (260u)
#define CapSense_1_BUTTON8_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON8_PTR2WD_RAM_PARAM_ID              (0xDA080104u)

#define CapSense_1_BUTTON8_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[8].ptr2SnsRam)
#define CapSense_1_BUTTON8_PTR2SNS_RAM_OFFSET               (264u)
#define CapSense_1_BUTTON8_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON8_PTR2SNS_RAM_PARAM_ID             (0xD9080108u)

#define CapSense_1_BUTTON8_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[8].ptr2FltrHistory)
#define CapSense_1_BUTTON8_PTR2FLTR_HISTORY_OFFSET          (268u)
#define CapSense_1_BUTTON8_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON8_PTR2FLTR_HISTORY_PARAM_ID        (0xD808010Cu)

#define CapSense_1_BUTTON8_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[8].ptr2DebounceArr)
#define CapSense_1_BUTTON8_PTR2DEBOUNCE_OFFSET              (272u)
#define CapSense_1_BUTTON8_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON8_PTR2DEBOUNCE_PARAM_ID            (0xDE080110u)

#define CapSense_1_BUTTON8_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[8].staticConfig)
#define CapSense_1_BUTTON8_STATIC_CONFIG_OFFSET             (276u)
#define CapSense_1_BUTTON8_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON8_STATIC_CONFIG_PARAM_ID           (0xDF080114u)

#define CapSense_1_BUTTON8_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[8].totalNumSns)
#define CapSense_1_BUTTON8_TOTAL_NUM_SNS_OFFSET             (280u)
#define CapSense_1_BUTTON8_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON8_TOTAL_NUM_SNS_PARAM_ID           (0x93080118u)

#define CapSense_1_BUTTON8_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[8].wdgtType)
#define CapSense_1_BUTTON8_TYPE_OFFSET                      (282u)
#define CapSense_1_BUTTON8_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON8_TYPE_PARAM_ID                    (0x5708011Au)

#define CapSense_1_BUTTON8_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[8].numCols)
#define CapSense_1_BUTTON8_NUM_COLS_OFFSET                  (283u)
#define CapSense_1_BUTTON8_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON8_NUM_COLS_PARAM_ID                (0x5108011Bu)

#define CapSense_1_BUTTON8_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[8].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON8_PTR2NOISE_ENVLP_OFFSET           (284u)
#define CapSense_1_BUTTON8_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON8_PTR2NOISE_ENVLP_PARAM_ID         (0xDD08011Cu)

#define CapSense_1_BUTTON9_PTR2SNS_FLASH_VALUE              (CapSense_1_dsFlash.wdgtArray[9].ptr2SnsFlash)
#define CapSense_1_BUTTON9_PTR2SNS_FLASH_OFFSET             (288u)
#define CapSense_1_BUTTON9_PTR2SNS_FLASH_SIZE               (4u)
#define CapSense_1_BUTTON9_PTR2SNS_FLASH_PARAM_ID           (0xD2090120u)

#define CapSense_1_BUTTON9_PTR2WD_RAM_VALUE                 (CapSense_1_dsFlash.wdgtArray[9].ptr2WdgtRam)
#define CapSense_1_BUTTON9_PTR2WD_RAM_OFFSET                (292u)
#define CapSense_1_BUTTON9_PTR2WD_RAM_SIZE                  (4u)
#define CapSense_1_BUTTON9_PTR2WD_RAM_PARAM_ID              (0xD3090124u)

#define CapSense_1_BUTTON9_PTR2SNS_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[9].ptr2SnsRam)
#define CapSense_1_BUTTON9_PTR2SNS_RAM_OFFSET               (296u)
#define CapSense_1_BUTTON9_PTR2SNS_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON9_PTR2SNS_RAM_PARAM_ID             (0xD0090128u)

#define CapSense_1_BUTTON9_PTR2FLTR_HISTORY_VALUE           (CapSense_1_dsFlash.wdgtArray[9].ptr2FltrHistory)
#define CapSense_1_BUTTON9_PTR2FLTR_HISTORY_OFFSET          (300u)
#define CapSense_1_BUTTON9_PTR2FLTR_HISTORY_SIZE            (4u)
#define CapSense_1_BUTTON9_PTR2FLTR_HISTORY_PARAM_ID        (0xD109012Cu)

#define CapSense_1_BUTTON9_PTR2DEBOUNCE_VALUE               (CapSense_1_dsFlash.wdgtArray[9].ptr2DebounceArr)
#define CapSense_1_BUTTON9_PTR2DEBOUNCE_OFFSET              (304u)
#define CapSense_1_BUTTON9_PTR2DEBOUNCE_SIZE                (4u)
#define CapSense_1_BUTTON9_PTR2DEBOUNCE_PARAM_ID            (0xD7090130u)

#define CapSense_1_BUTTON9_STATIC_CONFIG_VALUE              (CapSense_1_dsFlash.wdgtArray[9].staticConfig)
#define CapSense_1_BUTTON9_STATIC_CONFIG_OFFSET             (308u)
#define CapSense_1_BUTTON9_STATIC_CONFIG_SIZE               (4u)
#define CapSense_1_BUTTON9_STATIC_CONFIG_PARAM_ID           (0xD6090134u)

#define CapSense_1_BUTTON9_TOTAL_NUM_SNS_VALUE              (CapSense_1_dsFlash.wdgtArray[9].totalNumSns)
#define CapSense_1_BUTTON9_TOTAL_NUM_SNS_OFFSET             (312u)
#define CapSense_1_BUTTON9_TOTAL_NUM_SNS_SIZE               (2u)
#define CapSense_1_BUTTON9_TOTAL_NUM_SNS_PARAM_ID           (0x9A090138u)

#define CapSense_1_BUTTON9_TYPE_VALUE                       (CapSense_1_dsFlash.wdgtArray[9].wdgtType)
#define CapSense_1_BUTTON9_TYPE_OFFSET                      (314u)
#define CapSense_1_BUTTON9_TYPE_SIZE                        (1u)
#define CapSense_1_BUTTON9_TYPE_PARAM_ID                    (0x5E09013Au)

#define CapSense_1_BUTTON9_NUM_COLS_VALUE                   (CapSense_1_dsFlash.wdgtArray[9].numCols)
#define CapSense_1_BUTTON9_NUM_COLS_OFFSET                  (315u)
#define CapSense_1_BUTTON9_NUM_COLS_SIZE                    (1u)
#define CapSense_1_BUTTON9_NUM_COLS_PARAM_ID                (0x5809013Bu)

#define CapSense_1_BUTTON9_PTR2NOISE_ENVLP_VALUE            (CapSense_1_dsFlash.wdgtArray[9].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON9_PTR2NOISE_ENVLP_OFFSET           (316u)
#define CapSense_1_BUTTON9_PTR2NOISE_ENVLP_SIZE             (4u)
#define CapSense_1_BUTTON9_PTR2NOISE_ENVLP_PARAM_ID         (0xD409013Cu)

#define CapSense_1_BUTTON10_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[10].ptr2SnsFlash)
#define CapSense_1_BUTTON10_PTR2SNS_FLASH_OFFSET            (320u)
#define CapSense_1_BUTTON10_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON10_PTR2SNS_FLASH_PARAM_ID          (0xD00A0140u)

#define CapSense_1_BUTTON10_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[10].ptr2WdgtRam)
#define CapSense_1_BUTTON10_PTR2WD_RAM_OFFSET               (324u)
#define CapSense_1_BUTTON10_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON10_PTR2WD_RAM_PARAM_ID             (0xD10A0144u)

#define CapSense_1_BUTTON10_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[10].ptr2SnsRam)
#define CapSense_1_BUTTON10_PTR2SNS_RAM_OFFSET              (328u)
#define CapSense_1_BUTTON10_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON10_PTR2SNS_RAM_PARAM_ID            (0xD20A0148u)

#define CapSense_1_BUTTON10_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[10].ptr2FltrHistory)
#define CapSense_1_BUTTON10_PTR2FLTR_HISTORY_OFFSET         (332u)
#define CapSense_1_BUTTON10_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON10_PTR2FLTR_HISTORY_PARAM_ID       (0xD30A014Cu)

#define CapSense_1_BUTTON10_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[10].ptr2DebounceArr)
#define CapSense_1_BUTTON10_PTR2DEBOUNCE_OFFSET             (336u)
#define CapSense_1_BUTTON10_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON10_PTR2DEBOUNCE_PARAM_ID           (0xD50A0150u)

#define CapSense_1_BUTTON10_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[10].staticConfig)
#define CapSense_1_BUTTON10_STATIC_CONFIG_OFFSET            (340u)
#define CapSense_1_BUTTON10_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON10_STATIC_CONFIG_PARAM_ID          (0xD40A0154u)

#define CapSense_1_BUTTON10_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[10].totalNumSns)
#define CapSense_1_BUTTON10_TOTAL_NUM_SNS_OFFSET            (344u)
#define CapSense_1_BUTTON10_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON10_TOTAL_NUM_SNS_PARAM_ID          (0x980A0158u)

#define CapSense_1_BUTTON10_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[10].wdgtType)
#define CapSense_1_BUTTON10_TYPE_OFFSET                     (346u)
#define CapSense_1_BUTTON10_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON10_TYPE_PARAM_ID                   (0x5C0A015Au)

#define CapSense_1_BUTTON10_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[10].numCols)
#define CapSense_1_BUTTON10_NUM_COLS_OFFSET                 (347u)
#define CapSense_1_BUTTON10_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON10_NUM_COLS_PARAM_ID               (0x5A0A015Bu)

#define CapSense_1_BUTTON10_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[10].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON10_PTR2NOISE_ENVLP_OFFSET          (348u)
#define CapSense_1_BUTTON10_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON10_PTR2NOISE_ENVLP_PARAM_ID        (0xD60A015Cu)

#define CapSense_1_BUTTON11_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[11].ptr2SnsFlash)
#define CapSense_1_BUTTON11_PTR2SNS_FLASH_OFFSET            (352u)
#define CapSense_1_BUTTON11_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON11_PTR2SNS_FLASH_PARAM_ID          (0xD90B0160u)

#define CapSense_1_BUTTON11_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[11].ptr2WdgtRam)
#define CapSense_1_BUTTON11_PTR2WD_RAM_OFFSET               (356u)
#define CapSense_1_BUTTON11_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON11_PTR2WD_RAM_PARAM_ID             (0xD80B0164u)

#define CapSense_1_BUTTON11_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[11].ptr2SnsRam)
#define CapSense_1_BUTTON11_PTR2SNS_RAM_OFFSET              (360u)
#define CapSense_1_BUTTON11_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON11_PTR2SNS_RAM_PARAM_ID            (0xDB0B0168u)

#define CapSense_1_BUTTON11_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[11].ptr2FltrHistory)
#define CapSense_1_BUTTON11_PTR2FLTR_HISTORY_OFFSET         (364u)
#define CapSense_1_BUTTON11_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON11_PTR2FLTR_HISTORY_PARAM_ID       (0xDA0B016Cu)

#define CapSense_1_BUTTON11_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[11].ptr2DebounceArr)
#define CapSense_1_BUTTON11_PTR2DEBOUNCE_OFFSET             (368u)
#define CapSense_1_BUTTON11_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON11_PTR2DEBOUNCE_PARAM_ID           (0xDC0B0170u)

#define CapSense_1_BUTTON11_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[11].staticConfig)
#define CapSense_1_BUTTON11_STATIC_CONFIG_OFFSET            (372u)
#define CapSense_1_BUTTON11_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON11_STATIC_CONFIG_PARAM_ID          (0xDD0B0174u)

#define CapSense_1_BUTTON11_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[11].totalNumSns)
#define CapSense_1_BUTTON11_TOTAL_NUM_SNS_OFFSET            (376u)
#define CapSense_1_BUTTON11_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON11_TOTAL_NUM_SNS_PARAM_ID          (0x910B0178u)

#define CapSense_1_BUTTON11_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[11].wdgtType)
#define CapSense_1_BUTTON11_TYPE_OFFSET                     (378u)
#define CapSense_1_BUTTON11_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON11_TYPE_PARAM_ID                   (0x550B017Au)

#define CapSense_1_BUTTON11_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[11].numCols)
#define CapSense_1_BUTTON11_NUM_COLS_OFFSET                 (379u)
#define CapSense_1_BUTTON11_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON11_NUM_COLS_PARAM_ID               (0x530B017Bu)

#define CapSense_1_BUTTON11_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[11].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON11_PTR2NOISE_ENVLP_OFFSET          (380u)
#define CapSense_1_BUTTON11_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON11_PTR2NOISE_ENVLP_PARAM_ID        (0xDF0B017Cu)

#define CapSense_1_BUTTON12_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[12].ptr2SnsFlash)
#define CapSense_1_BUTTON12_PTR2SNS_FLASH_OFFSET            (384u)
#define CapSense_1_BUTTON12_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON12_PTR2SNS_FLASH_PARAM_ID          (0xD40C0180u)

#define CapSense_1_BUTTON12_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[12].ptr2WdgtRam)
#define CapSense_1_BUTTON12_PTR2WD_RAM_OFFSET               (388u)
#define CapSense_1_BUTTON12_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON12_PTR2WD_RAM_PARAM_ID             (0xD50C0184u)

#define CapSense_1_BUTTON12_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[12].ptr2SnsRam)
#define CapSense_1_BUTTON12_PTR2SNS_RAM_OFFSET              (392u)
#define CapSense_1_BUTTON12_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON12_PTR2SNS_RAM_PARAM_ID            (0xD60C0188u)

#define CapSense_1_BUTTON12_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[12].ptr2FltrHistory)
#define CapSense_1_BUTTON12_PTR2FLTR_HISTORY_OFFSET         (396u)
#define CapSense_1_BUTTON12_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON12_PTR2FLTR_HISTORY_PARAM_ID       (0xD70C018Cu)

#define CapSense_1_BUTTON12_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[12].ptr2DebounceArr)
#define CapSense_1_BUTTON12_PTR2DEBOUNCE_OFFSET             (400u)
#define CapSense_1_BUTTON12_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON12_PTR2DEBOUNCE_PARAM_ID           (0xD10C0190u)

#define CapSense_1_BUTTON12_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[12].staticConfig)
#define CapSense_1_BUTTON12_STATIC_CONFIG_OFFSET            (404u)
#define CapSense_1_BUTTON12_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON12_STATIC_CONFIG_PARAM_ID          (0xD00C0194u)

#define CapSense_1_BUTTON12_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[12].totalNumSns)
#define CapSense_1_BUTTON12_TOTAL_NUM_SNS_OFFSET            (408u)
#define CapSense_1_BUTTON12_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON12_TOTAL_NUM_SNS_PARAM_ID          (0x9C0C0198u)

#define CapSense_1_BUTTON12_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[12].wdgtType)
#define CapSense_1_BUTTON12_TYPE_OFFSET                     (410u)
#define CapSense_1_BUTTON12_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON12_TYPE_PARAM_ID                   (0x580C019Au)

#define CapSense_1_BUTTON12_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[12].numCols)
#define CapSense_1_BUTTON12_NUM_COLS_OFFSET                 (411u)
#define CapSense_1_BUTTON12_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON12_NUM_COLS_PARAM_ID               (0x5E0C019Bu)

#define CapSense_1_BUTTON12_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[12].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON12_PTR2NOISE_ENVLP_OFFSET          (412u)
#define CapSense_1_BUTTON12_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON12_PTR2NOISE_ENVLP_PARAM_ID        (0xD20C019Cu)

#define CapSense_1_BUTTON13_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[13].ptr2SnsFlash)
#define CapSense_1_BUTTON13_PTR2SNS_FLASH_OFFSET            (416u)
#define CapSense_1_BUTTON13_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON13_PTR2SNS_FLASH_PARAM_ID          (0xDD0D01A0u)

#define CapSense_1_BUTTON13_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[13].ptr2WdgtRam)
#define CapSense_1_BUTTON13_PTR2WD_RAM_OFFSET               (420u)
#define CapSense_1_BUTTON13_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON13_PTR2WD_RAM_PARAM_ID             (0xDC0D01A4u)

#define CapSense_1_BUTTON13_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[13].ptr2SnsRam)
#define CapSense_1_BUTTON13_PTR2SNS_RAM_OFFSET              (424u)
#define CapSense_1_BUTTON13_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON13_PTR2SNS_RAM_PARAM_ID            (0xDF0D01A8u)

#define CapSense_1_BUTTON13_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[13].ptr2FltrHistory)
#define CapSense_1_BUTTON13_PTR2FLTR_HISTORY_OFFSET         (428u)
#define CapSense_1_BUTTON13_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON13_PTR2FLTR_HISTORY_PARAM_ID       (0xDE0D01ACu)

#define CapSense_1_BUTTON13_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[13].ptr2DebounceArr)
#define CapSense_1_BUTTON13_PTR2DEBOUNCE_OFFSET             (432u)
#define CapSense_1_BUTTON13_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON13_PTR2DEBOUNCE_PARAM_ID           (0xD80D01B0u)

#define CapSense_1_BUTTON13_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[13].staticConfig)
#define CapSense_1_BUTTON13_STATIC_CONFIG_OFFSET            (436u)
#define CapSense_1_BUTTON13_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON13_STATIC_CONFIG_PARAM_ID          (0xD90D01B4u)

#define CapSense_1_BUTTON13_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[13].totalNumSns)
#define CapSense_1_BUTTON13_TOTAL_NUM_SNS_OFFSET            (440u)
#define CapSense_1_BUTTON13_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON13_TOTAL_NUM_SNS_PARAM_ID          (0x950D01B8u)

#define CapSense_1_BUTTON13_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[13].wdgtType)
#define CapSense_1_BUTTON13_TYPE_OFFSET                     (442u)
#define CapSense_1_BUTTON13_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON13_TYPE_PARAM_ID                   (0x510D01BAu)

#define CapSense_1_BUTTON13_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[13].numCols)
#define CapSense_1_BUTTON13_NUM_COLS_OFFSET                 (443u)
#define CapSense_1_BUTTON13_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON13_NUM_COLS_PARAM_ID               (0x570D01BBu)

#define CapSense_1_BUTTON13_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[13].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON13_PTR2NOISE_ENVLP_OFFSET          (444u)
#define CapSense_1_BUTTON13_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON13_PTR2NOISE_ENVLP_PARAM_ID        (0xDB0D01BCu)

#define CapSense_1_BUTTON14_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[14].ptr2SnsFlash)
#define CapSense_1_BUTTON14_PTR2SNS_FLASH_OFFSET            (448u)
#define CapSense_1_BUTTON14_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON14_PTR2SNS_FLASH_PARAM_ID          (0xDF0E01C0u)

#define CapSense_1_BUTTON14_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[14].ptr2WdgtRam)
#define CapSense_1_BUTTON14_PTR2WD_RAM_OFFSET               (452u)
#define CapSense_1_BUTTON14_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON14_PTR2WD_RAM_PARAM_ID             (0xDE0E01C4u)

#define CapSense_1_BUTTON14_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[14].ptr2SnsRam)
#define CapSense_1_BUTTON14_PTR2SNS_RAM_OFFSET              (456u)
#define CapSense_1_BUTTON14_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON14_PTR2SNS_RAM_PARAM_ID            (0xDD0E01C8u)

#define CapSense_1_BUTTON14_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[14].ptr2FltrHistory)
#define CapSense_1_BUTTON14_PTR2FLTR_HISTORY_OFFSET         (460u)
#define CapSense_1_BUTTON14_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON14_PTR2FLTR_HISTORY_PARAM_ID       (0xDC0E01CCu)

#define CapSense_1_BUTTON14_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[14].ptr2DebounceArr)
#define CapSense_1_BUTTON14_PTR2DEBOUNCE_OFFSET             (464u)
#define CapSense_1_BUTTON14_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON14_PTR2DEBOUNCE_PARAM_ID           (0xDA0E01D0u)

#define CapSense_1_BUTTON14_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[14].staticConfig)
#define CapSense_1_BUTTON14_STATIC_CONFIG_OFFSET            (468u)
#define CapSense_1_BUTTON14_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON14_STATIC_CONFIG_PARAM_ID          (0xDB0E01D4u)

#define CapSense_1_BUTTON14_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[14].totalNumSns)
#define CapSense_1_BUTTON14_TOTAL_NUM_SNS_OFFSET            (472u)
#define CapSense_1_BUTTON14_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON14_TOTAL_NUM_SNS_PARAM_ID          (0x970E01D8u)

#define CapSense_1_BUTTON14_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[14].wdgtType)
#define CapSense_1_BUTTON14_TYPE_OFFSET                     (474u)
#define CapSense_1_BUTTON14_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON14_TYPE_PARAM_ID                   (0x530E01DAu)

#define CapSense_1_BUTTON14_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[14].numCols)
#define CapSense_1_BUTTON14_NUM_COLS_OFFSET                 (475u)
#define CapSense_1_BUTTON14_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON14_NUM_COLS_PARAM_ID               (0x550E01DBu)

#define CapSense_1_BUTTON14_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[14].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON14_PTR2NOISE_ENVLP_OFFSET          (476u)
#define CapSense_1_BUTTON14_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON14_PTR2NOISE_ENVLP_PARAM_ID        (0xD90E01DCu)

#define CapSense_1_BUTTON15_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[15].ptr2SnsFlash)
#define CapSense_1_BUTTON15_PTR2SNS_FLASH_OFFSET            (480u)
#define CapSense_1_BUTTON15_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON15_PTR2SNS_FLASH_PARAM_ID          (0xD60F01E0u)

#define CapSense_1_BUTTON15_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[15].ptr2WdgtRam)
#define CapSense_1_BUTTON15_PTR2WD_RAM_OFFSET               (484u)
#define CapSense_1_BUTTON15_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON15_PTR2WD_RAM_PARAM_ID             (0xD70F01E4u)

#define CapSense_1_BUTTON15_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[15].ptr2SnsRam)
#define CapSense_1_BUTTON15_PTR2SNS_RAM_OFFSET              (488u)
#define CapSense_1_BUTTON15_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON15_PTR2SNS_RAM_PARAM_ID            (0xD40F01E8u)

#define CapSense_1_BUTTON15_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[15].ptr2FltrHistory)
#define CapSense_1_BUTTON15_PTR2FLTR_HISTORY_OFFSET         (492u)
#define CapSense_1_BUTTON15_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON15_PTR2FLTR_HISTORY_PARAM_ID       (0xD50F01ECu)

#define CapSense_1_BUTTON15_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[15].ptr2DebounceArr)
#define CapSense_1_BUTTON15_PTR2DEBOUNCE_OFFSET             (496u)
#define CapSense_1_BUTTON15_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON15_PTR2DEBOUNCE_PARAM_ID           (0xD30F01F0u)

#define CapSense_1_BUTTON15_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[15].staticConfig)
#define CapSense_1_BUTTON15_STATIC_CONFIG_OFFSET            (500u)
#define CapSense_1_BUTTON15_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON15_STATIC_CONFIG_PARAM_ID          (0xD20F01F4u)

#define CapSense_1_BUTTON15_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[15].totalNumSns)
#define CapSense_1_BUTTON15_TOTAL_NUM_SNS_OFFSET            (504u)
#define CapSense_1_BUTTON15_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON15_TOTAL_NUM_SNS_PARAM_ID          (0x9E0F01F8u)

#define CapSense_1_BUTTON15_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[15].wdgtType)
#define CapSense_1_BUTTON15_TYPE_OFFSET                     (506u)
#define CapSense_1_BUTTON15_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON15_TYPE_PARAM_ID                   (0x5A0F01FAu)

#define CapSense_1_BUTTON15_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[15].numCols)
#define CapSense_1_BUTTON15_NUM_COLS_OFFSET                 (507u)
#define CapSense_1_BUTTON15_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON15_NUM_COLS_PARAM_ID               (0x5C0F01FBu)

#define CapSense_1_BUTTON15_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[15].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON15_PTR2NOISE_ENVLP_OFFSET          (508u)
#define CapSense_1_BUTTON15_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON15_PTR2NOISE_ENVLP_PARAM_ID        (0xD00F01FCu)

#define CapSense_1_BUTTON16_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[16].ptr2SnsFlash)
#define CapSense_1_BUTTON16_PTR2SNS_FLASH_OFFSET            (512u)
#define CapSense_1_BUTTON16_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON16_PTR2SNS_FLASH_PARAM_ID          (0xD0100200u)

#define CapSense_1_BUTTON16_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[16].ptr2WdgtRam)
#define CapSense_1_BUTTON16_PTR2WD_RAM_OFFSET               (516u)
#define CapSense_1_BUTTON16_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON16_PTR2WD_RAM_PARAM_ID             (0xD1100204u)

#define CapSense_1_BUTTON16_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[16].ptr2SnsRam)
#define CapSense_1_BUTTON16_PTR2SNS_RAM_OFFSET              (520u)
#define CapSense_1_BUTTON16_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON16_PTR2SNS_RAM_PARAM_ID            (0xD2100208u)

#define CapSense_1_BUTTON16_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[16].ptr2FltrHistory)
#define CapSense_1_BUTTON16_PTR2FLTR_HISTORY_OFFSET         (524u)
#define CapSense_1_BUTTON16_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON16_PTR2FLTR_HISTORY_PARAM_ID       (0xD310020Cu)

#define CapSense_1_BUTTON16_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[16].ptr2DebounceArr)
#define CapSense_1_BUTTON16_PTR2DEBOUNCE_OFFSET             (528u)
#define CapSense_1_BUTTON16_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON16_PTR2DEBOUNCE_PARAM_ID           (0xD5100210u)

#define CapSense_1_BUTTON16_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[16].staticConfig)
#define CapSense_1_BUTTON16_STATIC_CONFIG_OFFSET            (532u)
#define CapSense_1_BUTTON16_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON16_STATIC_CONFIG_PARAM_ID          (0xD4100214u)

#define CapSense_1_BUTTON16_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[16].totalNumSns)
#define CapSense_1_BUTTON16_TOTAL_NUM_SNS_OFFSET            (536u)
#define CapSense_1_BUTTON16_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON16_TOTAL_NUM_SNS_PARAM_ID          (0x98100218u)

#define CapSense_1_BUTTON16_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[16].wdgtType)
#define CapSense_1_BUTTON16_TYPE_OFFSET                     (538u)
#define CapSense_1_BUTTON16_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON16_TYPE_PARAM_ID                   (0x5C10021Au)

#define CapSense_1_BUTTON16_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[16].numCols)
#define CapSense_1_BUTTON16_NUM_COLS_OFFSET                 (539u)
#define CapSense_1_BUTTON16_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON16_NUM_COLS_PARAM_ID               (0x5A10021Bu)

#define CapSense_1_BUTTON16_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[16].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON16_PTR2NOISE_ENVLP_OFFSET          (540u)
#define CapSense_1_BUTTON16_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON16_PTR2NOISE_ENVLP_PARAM_ID        (0xD610021Cu)

#define CapSense_1_BUTTON17_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[17].ptr2SnsFlash)
#define CapSense_1_BUTTON17_PTR2SNS_FLASH_OFFSET            (544u)
#define CapSense_1_BUTTON17_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON17_PTR2SNS_FLASH_PARAM_ID          (0xD9110220u)

#define CapSense_1_BUTTON17_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[17].ptr2WdgtRam)
#define CapSense_1_BUTTON17_PTR2WD_RAM_OFFSET               (548u)
#define CapSense_1_BUTTON17_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON17_PTR2WD_RAM_PARAM_ID             (0xD8110224u)

#define CapSense_1_BUTTON17_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[17].ptr2SnsRam)
#define CapSense_1_BUTTON17_PTR2SNS_RAM_OFFSET              (552u)
#define CapSense_1_BUTTON17_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON17_PTR2SNS_RAM_PARAM_ID            (0xDB110228u)

#define CapSense_1_BUTTON17_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[17].ptr2FltrHistory)
#define CapSense_1_BUTTON17_PTR2FLTR_HISTORY_OFFSET         (556u)
#define CapSense_1_BUTTON17_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON17_PTR2FLTR_HISTORY_PARAM_ID       (0xDA11022Cu)

#define CapSense_1_BUTTON17_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[17].ptr2DebounceArr)
#define CapSense_1_BUTTON17_PTR2DEBOUNCE_OFFSET             (560u)
#define CapSense_1_BUTTON17_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON17_PTR2DEBOUNCE_PARAM_ID           (0xDC110230u)

#define CapSense_1_BUTTON17_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[17].staticConfig)
#define CapSense_1_BUTTON17_STATIC_CONFIG_OFFSET            (564u)
#define CapSense_1_BUTTON17_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON17_STATIC_CONFIG_PARAM_ID          (0xDD110234u)

#define CapSense_1_BUTTON17_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[17].totalNumSns)
#define CapSense_1_BUTTON17_TOTAL_NUM_SNS_OFFSET            (568u)
#define CapSense_1_BUTTON17_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON17_TOTAL_NUM_SNS_PARAM_ID          (0x91110238u)

#define CapSense_1_BUTTON17_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[17].wdgtType)
#define CapSense_1_BUTTON17_TYPE_OFFSET                     (570u)
#define CapSense_1_BUTTON17_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON17_TYPE_PARAM_ID                   (0x5511023Au)

#define CapSense_1_BUTTON17_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[17].numCols)
#define CapSense_1_BUTTON17_NUM_COLS_OFFSET                 (571u)
#define CapSense_1_BUTTON17_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON17_NUM_COLS_PARAM_ID               (0x5311023Bu)

#define CapSense_1_BUTTON17_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[17].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON17_PTR2NOISE_ENVLP_OFFSET          (572u)
#define CapSense_1_BUTTON17_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON17_PTR2NOISE_ENVLP_PARAM_ID        (0xDF11023Cu)

#define CapSense_1_BUTTON18_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[18].ptr2SnsFlash)
#define CapSense_1_BUTTON18_PTR2SNS_FLASH_OFFSET            (576u)
#define CapSense_1_BUTTON18_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON18_PTR2SNS_FLASH_PARAM_ID          (0xDB120240u)

#define CapSense_1_BUTTON18_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[18].ptr2WdgtRam)
#define CapSense_1_BUTTON18_PTR2WD_RAM_OFFSET               (580u)
#define CapSense_1_BUTTON18_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON18_PTR2WD_RAM_PARAM_ID             (0xDA120244u)

#define CapSense_1_BUTTON18_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[18].ptr2SnsRam)
#define CapSense_1_BUTTON18_PTR2SNS_RAM_OFFSET              (584u)
#define CapSense_1_BUTTON18_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON18_PTR2SNS_RAM_PARAM_ID            (0xD9120248u)

#define CapSense_1_BUTTON18_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[18].ptr2FltrHistory)
#define CapSense_1_BUTTON18_PTR2FLTR_HISTORY_OFFSET         (588u)
#define CapSense_1_BUTTON18_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON18_PTR2FLTR_HISTORY_PARAM_ID       (0xD812024Cu)

#define CapSense_1_BUTTON18_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[18].ptr2DebounceArr)
#define CapSense_1_BUTTON18_PTR2DEBOUNCE_OFFSET             (592u)
#define CapSense_1_BUTTON18_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON18_PTR2DEBOUNCE_PARAM_ID           (0xDE120250u)

#define CapSense_1_BUTTON18_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[18].staticConfig)
#define CapSense_1_BUTTON18_STATIC_CONFIG_OFFSET            (596u)
#define CapSense_1_BUTTON18_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON18_STATIC_CONFIG_PARAM_ID          (0xDF120254u)

#define CapSense_1_BUTTON18_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[18].totalNumSns)
#define CapSense_1_BUTTON18_TOTAL_NUM_SNS_OFFSET            (600u)
#define CapSense_1_BUTTON18_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON18_TOTAL_NUM_SNS_PARAM_ID          (0x93120258u)

#define CapSense_1_BUTTON18_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[18].wdgtType)
#define CapSense_1_BUTTON18_TYPE_OFFSET                     (602u)
#define CapSense_1_BUTTON18_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON18_TYPE_PARAM_ID                   (0x5712025Au)

#define CapSense_1_BUTTON18_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[18].numCols)
#define CapSense_1_BUTTON18_NUM_COLS_OFFSET                 (603u)
#define CapSense_1_BUTTON18_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON18_NUM_COLS_PARAM_ID               (0x5112025Bu)

#define CapSense_1_BUTTON18_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[18].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON18_PTR2NOISE_ENVLP_OFFSET          (604u)
#define CapSense_1_BUTTON18_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON18_PTR2NOISE_ENVLP_PARAM_ID        (0xDD12025Cu)

#define CapSense_1_BUTTON19_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[19].ptr2SnsFlash)
#define CapSense_1_BUTTON19_PTR2SNS_FLASH_OFFSET            (608u)
#define CapSense_1_BUTTON19_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON19_PTR2SNS_FLASH_PARAM_ID          (0xD2130260u)

#define CapSense_1_BUTTON19_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[19].ptr2WdgtRam)
#define CapSense_1_BUTTON19_PTR2WD_RAM_OFFSET               (612u)
#define CapSense_1_BUTTON19_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON19_PTR2WD_RAM_PARAM_ID             (0xD3130264u)

#define CapSense_1_BUTTON19_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[19].ptr2SnsRam)
#define CapSense_1_BUTTON19_PTR2SNS_RAM_OFFSET              (616u)
#define CapSense_1_BUTTON19_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON19_PTR2SNS_RAM_PARAM_ID            (0xD0130268u)

#define CapSense_1_BUTTON19_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[19].ptr2FltrHistory)
#define CapSense_1_BUTTON19_PTR2FLTR_HISTORY_OFFSET         (620u)
#define CapSense_1_BUTTON19_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON19_PTR2FLTR_HISTORY_PARAM_ID       (0xD113026Cu)

#define CapSense_1_BUTTON19_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[19].ptr2DebounceArr)
#define CapSense_1_BUTTON19_PTR2DEBOUNCE_OFFSET             (624u)
#define CapSense_1_BUTTON19_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON19_PTR2DEBOUNCE_PARAM_ID           (0xD7130270u)

#define CapSense_1_BUTTON19_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[19].staticConfig)
#define CapSense_1_BUTTON19_STATIC_CONFIG_OFFSET            (628u)
#define CapSense_1_BUTTON19_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON19_STATIC_CONFIG_PARAM_ID          (0xD6130274u)

#define CapSense_1_BUTTON19_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[19].totalNumSns)
#define CapSense_1_BUTTON19_TOTAL_NUM_SNS_OFFSET            (632u)
#define CapSense_1_BUTTON19_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON19_TOTAL_NUM_SNS_PARAM_ID          (0x9A130278u)

#define CapSense_1_BUTTON19_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[19].wdgtType)
#define CapSense_1_BUTTON19_TYPE_OFFSET                     (634u)
#define CapSense_1_BUTTON19_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON19_TYPE_PARAM_ID                   (0x5E13027Au)

#define CapSense_1_BUTTON19_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[19].numCols)
#define CapSense_1_BUTTON19_NUM_COLS_OFFSET                 (635u)
#define CapSense_1_BUTTON19_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON19_NUM_COLS_PARAM_ID               (0x5813027Bu)

#define CapSense_1_BUTTON19_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[19].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON19_PTR2NOISE_ENVLP_OFFSET          (636u)
#define CapSense_1_BUTTON19_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON19_PTR2NOISE_ENVLP_PARAM_ID        (0xD413027Cu)

#define CapSense_1_BUTTON20_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[20].ptr2SnsFlash)
#define CapSense_1_BUTTON20_PTR2SNS_FLASH_OFFSET            (640u)
#define CapSense_1_BUTTON20_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON20_PTR2SNS_FLASH_PARAM_ID          (0xDF140280u)

#define CapSense_1_BUTTON20_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[20].ptr2WdgtRam)
#define CapSense_1_BUTTON20_PTR2WD_RAM_OFFSET               (644u)
#define CapSense_1_BUTTON20_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON20_PTR2WD_RAM_PARAM_ID             (0xDE140284u)

#define CapSense_1_BUTTON20_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[20].ptr2SnsRam)
#define CapSense_1_BUTTON20_PTR2SNS_RAM_OFFSET              (648u)
#define CapSense_1_BUTTON20_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON20_PTR2SNS_RAM_PARAM_ID            (0xDD140288u)

#define CapSense_1_BUTTON20_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[20].ptr2FltrHistory)
#define CapSense_1_BUTTON20_PTR2FLTR_HISTORY_OFFSET         (652u)
#define CapSense_1_BUTTON20_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON20_PTR2FLTR_HISTORY_PARAM_ID       (0xDC14028Cu)

#define CapSense_1_BUTTON20_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[20].ptr2DebounceArr)
#define CapSense_1_BUTTON20_PTR2DEBOUNCE_OFFSET             (656u)
#define CapSense_1_BUTTON20_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON20_PTR2DEBOUNCE_PARAM_ID           (0xDA140290u)

#define CapSense_1_BUTTON20_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[20].staticConfig)
#define CapSense_1_BUTTON20_STATIC_CONFIG_OFFSET            (660u)
#define CapSense_1_BUTTON20_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON20_STATIC_CONFIG_PARAM_ID          (0xDB140294u)

#define CapSense_1_BUTTON20_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[20].totalNumSns)
#define CapSense_1_BUTTON20_TOTAL_NUM_SNS_OFFSET            (664u)
#define CapSense_1_BUTTON20_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON20_TOTAL_NUM_SNS_PARAM_ID          (0x97140298u)

#define CapSense_1_BUTTON20_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[20].wdgtType)
#define CapSense_1_BUTTON20_TYPE_OFFSET                     (666u)
#define CapSense_1_BUTTON20_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON20_TYPE_PARAM_ID                   (0x5314029Au)

#define CapSense_1_BUTTON20_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[20].numCols)
#define CapSense_1_BUTTON20_NUM_COLS_OFFSET                 (667u)
#define CapSense_1_BUTTON20_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON20_NUM_COLS_PARAM_ID               (0x5514029Bu)

#define CapSense_1_BUTTON20_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[20].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON20_PTR2NOISE_ENVLP_OFFSET          (668u)
#define CapSense_1_BUTTON20_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON20_PTR2NOISE_ENVLP_PARAM_ID        (0xD914029Cu)

#define CapSense_1_BUTTON21_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[21].ptr2SnsFlash)
#define CapSense_1_BUTTON21_PTR2SNS_FLASH_OFFSET            (672u)
#define CapSense_1_BUTTON21_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON21_PTR2SNS_FLASH_PARAM_ID          (0xD61502A0u)

#define CapSense_1_BUTTON21_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[21].ptr2WdgtRam)
#define CapSense_1_BUTTON21_PTR2WD_RAM_OFFSET               (676u)
#define CapSense_1_BUTTON21_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON21_PTR2WD_RAM_PARAM_ID             (0xD71502A4u)

#define CapSense_1_BUTTON21_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[21].ptr2SnsRam)
#define CapSense_1_BUTTON21_PTR2SNS_RAM_OFFSET              (680u)
#define CapSense_1_BUTTON21_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON21_PTR2SNS_RAM_PARAM_ID            (0xD41502A8u)

#define CapSense_1_BUTTON21_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[21].ptr2FltrHistory)
#define CapSense_1_BUTTON21_PTR2FLTR_HISTORY_OFFSET         (684u)
#define CapSense_1_BUTTON21_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON21_PTR2FLTR_HISTORY_PARAM_ID       (0xD51502ACu)

#define CapSense_1_BUTTON21_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[21].ptr2DebounceArr)
#define CapSense_1_BUTTON21_PTR2DEBOUNCE_OFFSET             (688u)
#define CapSense_1_BUTTON21_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON21_PTR2DEBOUNCE_PARAM_ID           (0xD31502B0u)

#define CapSense_1_BUTTON21_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[21].staticConfig)
#define CapSense_1_BUTTON21_STATIC_CONFIG_OFFSET            (692u)
#define CapSense_1_BUTTON21_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON21_STATIC_CONFIG_PARAM_ID          (0xD21502B4u)

#define CapSense_1_BUTTON21_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[21].totalNumSns)
#define CapSense_1_BUTTON21_TOTAL_NUM_SNS_OFFSET            (696u)
#define CapSense_1_BUTTON21_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON21_TOTAL_NUM_SNS_PARAM_ID          (0x9E1502B8u)

#define CapSense_1_BUTTON21_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[21].wdgtType)
#define CapSense_1_BUTTON21_TYPE_OFFSET                     (698u)
#define CapSense_1_BUTTON21_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON21_TYPE_PARAM_ID                   (0x5A1502BAu)

#define CapSense_1_BUTTON21_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[21].numCols)
#define CapSense_1_BUTTON21_NUM_COLS_OFFSET                 (699u)
#define CapSense_1_BUTTON21_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON21_NUM_COLS_PARAM_ID               (0x5C1502BBu)

#define CapSense_1_BUTTON21_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[21].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON21_PTR2NOISE_ENVLP_OFFSET          (700u)
#define CapSense_1_BUTTON21_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON21_PTR2NOISE_ENVLP_PARAM_ID        (0xD01502BCu)

#define CapSense_1_BUTTON22_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[22].ptr2SnsFlash)
#define CapSense_1_BUTTON22_PTR2SNS_FLASH_OFFSET            (704u)
#define CapSense_1_BUTTON22_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON22_PTR2SNS_FLASH_PARAM_ID          (0xD41602C0u)

#define CapSense_1_BUTTON22_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[22].ptr2WdgtRam)
#define CapSense_1_BUTTON22_PTR2WD_RAM_OFFSET               (708u)
#define CapSense_1_BUTTON22_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON22_PTR2WD_RAM_PARAM_ID             (0xD51602C4u)

#define CapSense_1_BUTTON22_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[22].ptr2SnsRam)
#define CapSense_1_BUTTON22_PTR2SNS_RAM_OFFSET              (712u)
#define CapSense_1_BUTTON22_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON22_PTR2SNS_RAM_PARAM_ID            (0xD61602C8u)

#define CapSense_1_BUTTON22_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[22].ptr2FltrHistory)
#define CapSense_1_BUTTON22_PTR2FLTR_HISTORY_OFFSET         (716u)
#define CapSense_1_BUTTON22_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON22_PTR2FLTR_HISTORY_PARAM_ID       (0xD71602CCu)

#define CapSense_1_BUTTON22_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[22].ptr2DebounceArr)
#define CapSense_1_BUTTON22_PTR2DEBOUNCE_OFFSET             (720u)
#define CapSense_1_BUTTON22_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON22_PTR2DEBOUNCE_PARAM_ID           (0xD11602D0u)

#define CapSense_1_BUTTON22_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[22].staticConfig)
#define CapSense_1_BUTTON22_STATIC_CONFIG_OFFSET            (724u)
#define CapSense_1_BUTTON22_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON22_STATIC_CONFIG_PARAM_ID          (0xD01602D4u)

#define CapSense_1_BUTTON22_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[22].totalNumSns)
#define CapSense_1_BUTTON22_TOTAL_NUM_SNS_OFFSET            (728u)
#define CapSense_1_BUTTON22_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON22_TOTAL_NUM_SNS_PARAM_ID          (0x9C1602D8u)

#define CapSense_1_BUTTON22_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[22].wdgtType)
#define CapSense_1_BUTTON22_TYPE_OFFSET                     (730u)
#define CapSense_1_BUTTON22_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON22_TYPE_PARAM_ID                   (0x581602DAu)

#define CapSense_1_BUTTON22_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[22].numCols)
#define CapSense_1_BUTTON22_NUM_COLS_OFFSET                 (731u)
#define CapSense_1_BUTTON22_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON22_NUM_COLS_PARAM_ID               (0x5E1602DBu)

#define CapSense_1_BUTTON22_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[22].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON22_PTR2NOISE_ENVLP_OFFSET          (732u)
#define CapSense_1_BUTTON22_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON22_PTR2NOISE_ENVLP_PARAM_ID        (0xD21602DCu)

#define CapSense_1_BUTTON23_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[23].ptr2SnsFlash)
#define CapSense_1_BUTTON23_PTR2SNS_FLASH_OFFSET            (736u)
#define CapSense_1_BUTTON23_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON23_PTR2SNS_FLASH_PARAM_ID          (0xDD1702E0u)

#define CapSense_1_BUTTON23_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[23].ptr2WdgtRam)
#define CapSense_1_BUTTON23_PTR2WD_RAM_OFFSET               (740u)
#define CapSense_1_BUTTON23_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON23_PTR2WD_RAM_PARAM_ID             (0xDC1702E4u)

#define CapSense_1_BUTTON23_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[23].ptr2SnsRam)
#define CapSense_1_BUTTON23_PTR2SNS_RAM_OFFSET              (744u)
#define CapSense_1_BUTTON23_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON23_PTR2SNS_RAM_PARAM_ID            (0xDF1702E8u)

#define CapSense_1_BUTTON23_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[23].ptr2FltrHistory)
#define CapSense_1_BUTTON23_PTR2FLTR_HISTORY_OFFSET         (748u)
#define CapSense_1_BUTTON23_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON23_PTR2FLTR_HISTORY_PARAM_ID       (0xDE1702ECu)

#define CapSense_1_BUTTON23_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[23].ptr2DebounceArr)
#define CapSense_1_BUTTON23_PTR2DEBOUNCE_OFFSET             (752u)
#define CapSense_1_BUTTON23_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON23_PTR2DEBOUNCE_PARAM_ID           (0xD81702F0u)

#define CapSense_1_BUTTON23_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[23].staticConfig)
#define CapSense_1_BUTTON23_STATIC_CONFIG_OFFSET            (756u)
#define CapSense_1_BUTTON23_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON23_STATIC_CONFIG_PARAM_ID          (0xD91702F4u)

#define CapSense_1_BUTTON23_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[23].totalNumSns)
#define CapSense_1_BUTTON23_TOTAL_NUM_SNS_OFFSET            (760u)
#define CapSense_1_BUTTON23_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON23_TOTAL_NUM_SNS_PARAM_ID          (0x951702F8u)

#define CapSense_1_BUTTON23_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[23].wdgtType)
#define CapSense_1_BUTTON23_TYPE_OFFSET                     (762u)
#define CapSense_1_BUTTON23_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON23_TYPE_PARAM_ID                   (0x511702FAu)

#define CapSense_1_BUTTON23_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[23].numCols)
#define CapSense_1_BUTTON23_NUM_COLS_OFFSET                 (763u)
#define CapSense_1_BUTTON23_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON23_NUM_COLS_PARAM_ID               (0x571702FBu)

#define CapSense_1_BUTTON23_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[23].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON23_PTR2NOISE_ENVLP_OFFSET          (764u)
#define CapSense_1_BUTTON23_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON23_PTR2NOISE_ENVLP_PARAM_ID        (0xDB1702FCu)

#define CapSense_1_BUTTON24_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[24].ptr2SnsFlash)
#define CapSense_1_BUTTON24_PTR2SNS_FLASH_OFFSET            (768u)
#define CapSense_1_BUTTON24_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON24_PTR2SNS_FLASH_PARAM_ID          (0xDA180300u)

#define CapSense_1_BUTTON24_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[24].ptr2WdgtRam)
#define CapSense_1_BUTTON24_PTR2WD_RAM_OFFSET               (772u)
#define CapSense_1_BUTTON24_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON24_PTR2WD_RAM_PARAM_ID             (0xDB180304u)

#define CapSense_1_BUTTON24_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[24].ptr2SnsRam)
#define CapSense_1_BUTTON24_PTR2SNS_RAM_OFFSET              (776u)
#define CapSense_1_BUTTON24_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON24_PTR2SNS_RAM_PARAM_ID            (0xD8180308u)

#define CapSense_1_BUTTON24_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[24].ptr2FltrHistory)
#define CapSense_1_BUTTON24_PTR2FLTR_HISTORY_OFFSET         (780u)
#define CapSense_1_BUTTON24_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON24_PTR2FLTR_HISTORY_PARAM_ID       (0xD918030Cu)

#define CapSense_1_BUTTON24_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[24].ptr2DebounceArr)
#define CapSense_1_BUTTON24_PTR2DEBOUNCE_OFFSET             (784u)
#define CapSense_1_BUTTON24_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON24_PTR2DEBOUNCE_PARAM_ID           (0xDF180310u)

#define CapSense_1_BUTTON24_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[24].staticConfig)
#define CapSense_1_BUTTON24_STATIC_CONFIG_OFFSET            (788u)
#define CapSense_1_BUTTON24_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON24_STATIC_CONFIG_PARAM_ID          (0xDE180314u)

#define CapSense_1_BUTTON24_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[24].totalNumSns)
#define CapSense_1_BUTTON24_TOTAL_NUM_SNS_OFFSET            (792u)
#define CapSense_1_BUTTON24_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON24_TOTAL_NUM_SNS_PARAM_ID          (0x92180318u)

#define CapSense_1_BUTTON24_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[24].wdgtType)
#define CapSense_1_BUTTON24_TYPE_OFFSET                     (794u)
#define CapSense_1_BUTTON24_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON24_TYPE_PARAM_ID                   (0x5618031Au)

#define CapSense_1_BUTTON24_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[24].numCols)
#define CapSense_1_BUTTON24_NUM_COLS_OFFSET                 (795u)
#define CapSense_1_BUTTON24_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON24_NUM_COLS_PARAM_ID               (0x5018031Bu)

#define CapSense_1_BUTTON24_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[24].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON24_PTR2NOISE_ENVLP_OFFSET          (796u)
#define CapSense_1_BUTTON24_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON24_PTR2NOISE_ENVLP_PARAM_ID        (0xDC18031Cu)

#define CapSense_1_BUTTON25_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[25].ptr2SnsFlash)
#define CapSense_1_BUTTON25_PTR2SNS_FLASH_OFFSET            (800u)
#define CapSense_1_BUTTON25_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON25_PTR2SNS_FLASH_PARAM_ID          (0xD3190320u)

#define CapSense_1_BUTTON25_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[25].ptr2WdgtRam)
#define CapSense_1_BUTTON25_PTR2WD_RAM_OFFSET               (804u)
#define CapSense_1_BUTTON25_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON25_PTR2WD_RAM_PARAM_ID             (0xD2190324u)

#define CapSense_1_BUTTON25_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[25].ptr2SnsRam)
#define CapSense_1_BUTTON25_PTR2SNS_RAM_OFFSET              (808u)
#define CapSense_1_BUTTON25_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON25_PTR2SNS_RAM_PARAM_ID            (0xD1190328u)

#define CapSense_1_BUTTON25_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[25].ptr2FltrHistory)
#define CapSense_1_BUTTON25_PTR2FLTR_HISTORY_OFFSET         (812u)
#define CapSense_1_BUTTON25_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON25_PTR2FLTR_HISTORY_PARAM_ID       (0xD019032Cu)

#define CapSense_1_BUTTON25_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[25].ptr2DebounceArr)
#define CapSense_1_BUTTON25_PTR2DEBOUNCE_OFFSET             (816u)
#define CapSense_1_BUTTON25_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON25_PTR2DEBOUNCE_PARAM_ID           (0xD6190330u)

#define CapSense_1_BUTTON25_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[25].staticConfig)
#define CapSense_1_BUTTON25_STATIC_CONFIG_OFFSET            (820u)
#define CapSense_1_BUTTON25_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON25_STATIC_CONFIG_PARAM_ID          (0xD7190334u)

#define CapSense_1_BUTTON25_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[25].totalNumSns)
#define CapSense_1_BUTTON25_TOTAL_NUM_SNS_OFFSET            (824u)
#define CapSense_1_BUTTON25_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON25_TOTAL_NUM_SNS_PARAM_ID          (0x9B190338u)

#define CapSense_1_BUTTON25_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[25].wdgtType)
#define CapSense_1_BUTTON25_TYPE_OFFSET                     (826u)
#define CapSense_1_BUTTON25_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON25_TYPE_PARAM_ID                   (0x5F19033Au)

#define CapSense_1_BUTTON25_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[25].numCols)
#define CapSense_1_BUTTON25_NUM_COLS_OFFSET                 (827u)
#define CapSense_1_BUTTON25_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON25_NUM_COLS_PARAM_ID               (0x5919033Bu)

#define CapSense_1_BUTTON25_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[25].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON25_PTR2NOISE_ENVLP_OFFSET          (828u)
#define CapSense_1_BUTTON25_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON25_PTR2NOISE_ENVLP_PARAM_ID        (0xD519033Cu)

#define CapSense_1_BUTTON26_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[26].ptr2SnsFlash)
#define CapSense_1_BUTTON26_PTR2SNS_FLASH_OFFSET            (832u)
#define CapSense_1_BUTTON26_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON26_PTR2SNS_FLASH_PARAM_ID          (0xD11A0340u)

#define CapSense_1_BUTTON26_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[26].ptr2WdgtRam)
#define CapSense_1_BUTTON26_PTR2WD_RAM_OFFSET               (836u)
#define CapSense_1_BUTTON26_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON26_PTR2WD_RAM_PARAM_ID             (0xD01A0344u)

#define CapSense_1_BUTTON26_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[26].ptr2SnsRam)
#define CapSense_1_BUTTON26_PTR2SNS_RAM_OFFSET              (840u)
#define CapSense_1_BUTTON26_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON26_PTR2SNS_RAM_PARAM_ID            (0xD31A0348u)

#define CapSense_1_BUTTON26_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[26].ptr2FltrHistory)
#define CapSense_1_BUTTON26_PTR2FLTR_HISTORY_OFFSET         (844u)
#define CapSense_1_BUTTON26_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON26_PTR2FLTR_HISTORY_PARAM_ID       (0xD21A034Cu)

#define CapSense_1_BUTTON26_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[26].ptr2DebounceArr)
#define CapSense_1_BUTTON26_PTR2DEBOUNCE_OFFSET             (848u)
#define CapSense_1_BUTTON26_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON26_PTR2DEBOUNCE_PARAM_ID           (0xD41A0350u)

#define CapSense_1_BUTTON26_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[26].staticConfig)
#define CapSense_1_BUTTON26_STATIC_CONFIG_OFFSET            (852u)
#define CapSense_1_BUTTON26_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON26_STATIC_CONFIG_PARAM_ID          (0xD51A0354u)

#define CapSense_1_BUTTON26_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[26].totalNumSns)
#define CapSense_1_BUTTON26_TOTAL_NUM_SNS_OFFSET            (856u)
#define CapSense_1_BUTTON26_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON26_TOTAL_NUM_SNS_PARAM_ID          (0x991A0358u)

#define CapSense_1_BUTTON26_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[26].wdgtType)
#define CapSense_1_BUTTON26_TYPE_OFFSET                     (858u)
#define CapSense_1_BUTTON26_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON26_TYPE_PARAM_ID                   (0x5D1A035Au)

#define CapSense_1_BUTTON26_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[26].numCols)
#define CapSense_1_BUTTON26_NUM_COLS_OFFSET                 (859u)
#define CapSense_1_BUTTON26_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON26_NUM_COLS_PARAM_ID               (0x5B1A035Bu)

#define CapSense_1_BUTTON26_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[26].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON26_PTR2NOISE_ENVLP_OFFSET          (860u)
#define CapSense_1_BUTTON26_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON26_PTR2NOISE_ENVLP_PARAM_ID        (0xD71A035Cu)

#define CapSense_1_BUTTON27_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[27].ptr2SnsFlash)
#define CapSense_1_BUTTON27_PTR2SNS_FLASH_OFFSET            (864u)
#define CapSense_1_BUTTON27_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON27_PTR2SNS_FLASH_PARAM_ID          (0xD81B0360u)

#define CapSense_1_BUTTON27_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[27].ptr2WdgtRam)
#define CapSense_1_BUTTON27_PTR2WD_RAM_OFFSET               (868u)
#define CapSense_1_BUTTON27_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON27_PTR2WD_RAM_PARAM_ID             (0xD91B0364u)

#define CapSense_1_BUTTON27_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[27].ptr2SnsRam)
#define CapSense_1_BUTTON27_PTR2SNS_RAM_OFFSET              (872u)
#define CapSense_1_BUTTON27_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON27_PTR2SNS_RAM_PARAM_ID            (0xDA1B0368u)

#define CapSense_1_BUTTON27_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[27].ptr2FltrHistory)
#define CapSense_1_BUTTON27_PTR2FLTR_HISTORY_OFFSET         (876u)
#define CapSense_1_BUTTON27_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON27_PTR2FLTR_HISTORY_PARAM_ID       (0xDB1B036Cu)

#define CapSense_1_BUTTON27_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[27].ptr2DebounceArr)
#define CapSense_1_BUTTON27_PTR2DEBOUNCE_OFFSET             (880u)
#define CapSense_1_BUTTON27_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON27_PTR2DEBOUNCE_PARAM_ID           (0xDD1B0370u)

#define CapSense_1_BUTTON27_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[27].staticConfig)
#define CapSense_1_BUTTON27_STATIC_CONFIG_OFFSET            (884u)
#define CapSense_1_BUTTON27_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON27_STATIC_CONFIG_PARAM_ID          (0xDC1B0374u)

#define CapSense_1_BUTTON27_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[27].totalNumSns)
#define CapSense_1_BUTTON27_TOTAL_NUM_SNS_OFFSET            (888u)
#define CapSense_1_BUTTON27_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON27_TOTAL_NUM_SNS_PARAM_ID          (0x901B0378u)

#define CapSense_1_BUTTON27_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[27].wdgtType)
#define CapSense_1_BUTTON27_TYPE_OFFSET                     (890u)
#define CapSense_1_BUTTON27_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON27_TYPE_PARAM_ID                   (0x541B037Au)

#define CapSense_1_BUTTON27_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[27].numCols)
#define CapSense_1_BUTTON27_NUM_COLS_OFFSET                 (891u)
#define CapSense_1_BUTTON27_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON27_NUM_COLS_PARAM_ID               (0x521B037Bu)

#define CapSense_1_BUTTON27_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[27].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON27_PTR2NOISE_ENVLP_OFFSET          (892u)
#define CapSense_1_BUTTON27_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON27_PTR2NOISE_ENVLP_PARAM_ID        (0xDE1B037Cu)

#define CapSense_1_BUTTON28_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[28].ptr2SnsFlash)
#define CapSense_1_BUTTON28_PTR2SNS_FLASH_OFFSET            (896u)
#define CapSense_1_BUTTON28_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON28_PTR2SNS_FLASH_PARAM_ID          (0xD51C0380u)

#define CapSense_1_BUTTON28_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[28].ptr2WdgtRam)
#define CapSense_1_BUTTON28_PTR2WD_RAM_OFFSET               (900u)
#define CapSense_1_BUTTON28_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON28_PTR2WD_RAM_PARAM_ID             (0xD41C0384u)

#define CapSense_1_BUTTON28_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[28].ptr2SnsRam)
#define CapSense_1_BUTTON28_PTR2SNS_RAM_OFFSET              (904u)
#define CapSense_1_BUTTON28_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON28_PTR2SNS_RAM_PARAM_ID            (0xD71C0388u)

#define CapSense_1_BUTTON28_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[28].ptr2FltrHistory)
#define CapSense_1_BUTTON28_PTR2FLTR_HISTORY_OFFSET         (908u)
#define CapSense_1_BUTTON28_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON28_PTR2FLTR_HISTORY_PARAM_ID       (0xD61C038Cu)

#define CapSense_1_BUTTON28_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[28].ptr2DebounceArr)
#define CapSense_1_BUTTON28_PTR2DEBOUNCE_OFFSET             (912u)
#define CapSense_1_BUTTON28_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON28_PTR2DEBOUNCE_PARAM_ID           (0xD01C0390u)

#define CapSense_1_BUTTON28_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[28].staticConfig)
#define CapSense_1_BUTTON28_STATIC_CONFIG_OFFSET            (916u)
#define CapSense_1_BUTTON28_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON28_STATIC_CONFIG_PARAM_ID          (0xD11C0394u)

#define CapSense_1_BUTTON28_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[28].totalNumSns)
#define CapSense_1_BUTTON28_TOTAL_NUM_SNS_OFFSET            (920u)
#define CapSense_1_BUTTON28_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON28_TOTAL_NUM_SNS_PARAM_ID          (0x9D1C0398u)

#define CapSense_1_BUTTON28_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[28].wdgtType)
#define CapSense_1_BUTTON28_TYPE_OFFSET                     (922u)
#define CapSense_1_BUTTON28_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON28_TYPE_PARAM_ID                   (0x591C039Au)

#define CapSense_1_BUTTON28_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[28].numCols)
#define CapSense_1_BUTTON28_NUM_COLS_OFFSET                 (923u)
#define CapSense_1_BUTTON28_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON28_NUM_COLS_PARAM_ID               (0x5F1C039Bu)

#define CapSense_1_BUTTON28_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[28].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON28_PTR2NOISE_ENVLP_OFFSET          (924u)
#define CapSense_1_BUTTON28_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON28_PTR2NOISE_ENVLP_PARAM_ID        (0xD31C039Cu)

#define CapSense_1_BUTTON29_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[29].ptr2SnsFlash)
#define CapSense_1_BUTTON29_PTR2SNS_FLASH_OFFSET            (928u)
#define CapSense_1_BUTTON29_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON29_PTR2SNS_FLASH_PARAM_ID          (0xDC1D03A0u)

#define CapSense_1_BUTTON29_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[29].ptr2WdgtRam)
#define CapSense_1_BUTTON29_PTR2WD_RAM_OFFSET               (932u)
#define CapSense_1_BUTTON29_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON29_PTR2WD_RAM_PARAM_ID             (0xDD1D03A4u)

#define CapSense_1_BUTTON29_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[29].ptr2SnsRam)
#define CapSense_1_BUTTON29_PTR2SNS_RAM_OFFSET              (936u)
#define CapSense_1_BUTTON29_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON29_PTR2SNS_RAM_PARAM_ID            (0xDE1D03A8u)

#define CapSense_1_BUTTON29_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[29].ptr2FltrHistory)
#define CapSense_1_BUTTON29_PTR2FLTR_HISTORY_OFFSET         (940u)
#define CapSense_1_BUTTON29_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON29_PTR2FLTR_HISTORY_PARAM_ID       (0xDF1D03ACu)

#define CapSense_1_BUTTON29_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[29].ptr2DebounceArr)
#define CapSense_1_BUTTON29_PTR2DEBOUNCE_OFFSET             (944u)
#define CapSense_1_BUTTON29_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON29_PTR2DEBOUNCE_PARAM_ID           (0xD91D03B0u)

#define CapSense_1_BUTTON29_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[29].staticConfig)
#define CapSense_1_BUTTON29_STATIC_CONFIG_OFFSET            (948u)
#define CapSense_1_BUTTON29_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON29_STATIC_CONFIG_PARAM_ID          (0xD81D03B4u)

#define CapSense_1_BUTTON29_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[29].totalNumSns)
#define CapSense_1_BUTTON29_TOTAL_NUM_SNS_OFFSET            (952u)
#define CapSense_1_BUTTON29_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON29_TOTAL_NUM_SNS_PARAM_ID          (0x941D03B8u)

#define CapSense_1_BUTTON29_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[29].wdgtType)
#define CapSense_1_BUTTON29_TYPE_OFFSET                     (954u)
#define CapSense_1_BUTTON29_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON29_TYPE_PARAM_ID                   (0x501D03BAu)

#define CapSense_1_BUTTON29_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[29].numCols)
#define CapSense_1_BUTTON29_NUM_COLS_OFFSET                 (955u)
#define CapSense_1_BUTTON29_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON29_NUM_COLS_PARAM_ID               (0x561D03BBu)

#define CapSense_1_BUTTON29_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[29].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON29_PTR2NOISE_ENVLP_OFFSET          (956u)
#define CapSense_1_BUTTON29_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON29_PTR2NOISE_ENVLP_PARAM_ID        (0xDA1D03BCu)

#define CapSense_1_BUTTON30_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[30].ptr2SnsFlash)
#define CapSense_1_BUTTON30_PTR2SNS_FLASH_OFFSET            (960u)
#define CapSense_1_BUTTON30_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON30_PTR2SNS_FLASH_PARAM_ID          (0xDE1E03C0u)

#define CapSense_1_BUTTON30_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[30].ptr2WdgtRam)
#define CapSense_1_BUTTON30_PTR2WD_RAM_OFFSET               (964u)
#define CapSense_1_BUTTON30_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON30_PTR2WD_RAM_PARAM_ID             (0xDF1E03C4u)

#define CapSense_1_BUTTON30_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[30].ptr2SnsRam)
#define CapSense_1_BUTTON30_PTR2SNS_RAM_OFFSET              (968u)
#define CapSense_1_BUTTON30_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON30_PTR2SNS_RAM_PARAM_ID            (0xDC1E03C8u)

#define CapSense_1_BUTTON30_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[30].ptr2FltrHistory)
#define CapSense_1_BUTTON30_PTR2FLTR_HISTORY_OFFSET         (972u)
#define CapSense_1_BUTTON30_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON30_PTR2FLTR_HISTORY_PARAM_ID       (0xDD1E03CCu)

#define CapSense_1_BUTTON30_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[30].ptr2DebounceArr)
#define CapSense_1_BUTTON30_PTR2DEBOUNCE_OFFSET             (976u)
#define CapSense_1_BUTTON30_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON30_PTR2DEBOUNCE_PARAM_ID           (0xDB1E03D0u)

#define CapSense_1_BUTTON30_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[30].staticConfig)
#define CapSense_1_BUTTON30_STATIC_CONFIG_OFFSET            (980u)
#define CapSense_1_BUTTON30_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON30_STATIC_CONFIG_PARAM_ID          (0xDA1E03D4u)

#define CapSense_1_BUTTON30_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[30].totalNumSns)
#define CapSense_1_BUTTON30_TOTAL_NUM_SNS_OFFSET            (984u)
#define CapSense_1_BUTTON30_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON30_TOTAL_NUM_SNS_PARAM_ID          (0x961E03D8u)

#define CapSense_1_BUTTON30_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[30].wdgtType)
#define CapSense_1_BUTTON30_TYPE_OFFSET                     (986u)
#define CapSense_1_BUTTON30_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON30_TYPE_PARAM_ID                   (0x521E03DAu)

#define CapSense_1_BUTTON30_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[30].numCols)
#define CapSense_1_BUTTON30_NUM_COLS_OFFSET                 (987u)
#define CapSense_1_BUTTON30_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON30_NUM_COLS_PARAM_ID               (0x541E03DBu)

#define CapSense_1_BUTTON30_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[30].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON30_PTR2NOISE_ENVLP_OFFSET          (988u)
#define CapSense_1_BUTTON30_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON30_PTR2NOISE_ENVLP_PARAM_ID        (0xD81E03DCu)

#define CapSense_1_BUTTON31_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[31].ptr2SnsFlash)
#define CapSense_1_BUTTON31_PTR2SNS_FLASH_OFFSET            (992u)
#define CapSense_1_BUTTON31_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON31_PTR2SNS_FLASH_PARAM_ID          (0xD71F03E0u)

#define CapSense_1_BUTTON31_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[31].ptr2WdgtRam)
#define CapSense_1_BUTTON31_PTR2WD_RAM_OFFSET               (996u)
#define CapSense_1_BUTTON31_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON31_PTR2WD_RAM_PARAM_ID             (0xD61F03E4u)

#define CapSense_1_BUTTON31_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[31].ptr2SnsRam)
#define CapSense_1_BUTTON31_PTR2SNS_RAM_OFFSET              (1000u)
#define CapSense_1_BUTTON31_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON31_PTR2SNS_RAM_PARAM_ID            (0xD51F03E8u)

#define CapSense_1_BUTTON31_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[31].ptr2FltrHistory)
#define CapSense_1_BUTTON31_PTR2FLTR_HISTORY_OFFSET         (1004u)
#define CapSense_1_BUTTON31_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON31_PTR2FLTR_HISTORY_PARAM_ID       (0xD41F03ECu)

#define CapSense_1_BUTTON31_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[31].ptr2DebounceArr)
#define CapSense_1_BUTTON31_PTR2DEBOUNCE_OFFSET             (1008u)
#define CapSense_1_BUTTON31_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON31_PTR2DEBOUNCE_PARAM_ID           (0xD21F03F0u)

#define CapSense_1_BUTTON31_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[31].staticConfig)
#define CapSense_1_BUTTON31_STATIC_CONFIG_OFFSET            (1012u)
#define CapSense_1_BUTTON31_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON31_STATIC_CONFIG_PARAM_ID          (0xD31F03F4u)

#define CapSense_1_BUTTON31_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[31].totalNumSns)
#define CapSense_1_BUTTON31_TOTAL_NUM_SNS_OFFSET            (1016u)
#define CapSense_1_BUTTON31_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON31_TOTAL_NUM_SNS_PARAM_ID          (0x9F1F03F8u)

#define CapSense_1_BUTTON31_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[31].wdgtType)
#define CapSense_1_BUTTON31_TYPE_OFFSET                     (1018u)
#define CapSense_1_BUTTON31_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON31_TYPE_PARAM_ID                   (0x5B1F03FAu)

#define CapSense_1_BUTTON31_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[31].numCols)
#define CapSense_1_BUTTON31_NUM_COLS_OFFSET                 (1019u)
#define CapSense_1_BUTTON31_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON31_NUM_COLS_PARAM_ID               (0x5D1F03FBu)

#define CapSense_1_BUTTON31_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[31].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON31_PTR2NOISE_ENVLP_OFFSET          (1020u)
#define CapSense_1_BUTTON31_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON31_PTR2NOISE_ENVLP_PARAM_ID        (0xD11F03FCu)

#define CapSense_1_BUTTON32_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[32].ptr2SnsFlash)
#define CapSense_1_BUTTON32_PTR2SNS_FLASH_OFFSET            (1024u)
#define CapSense_1_BUTTON32_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON32_PTR2SNS_FLASH_PARAM_ID          (0xD3200400u)

#define CapSense_1_BUTTON32_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[32].ptr2WdgtRam)
#define CapSense_1_BUTTON32_PTR2WD_RAM_OFFSET               (1028u)
#define CapSense_1_BUTTON32_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON32_PTR2WD_RAM_PARAM_ID             (0xD2200404u)

#define CapSense_1_BUTTON32_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[32].ptr2SnsRam)
#define CapSense_1_BUTTON32_PTR2SNS_RAM_OFFSET              (1032u)
#define CapSense_1_BUTTON32_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON32_PTR2SNS_RAM_PARAM_ID            (0xD1200408u)

#define CapSense_1_BUTTON32_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[32].ptr2FltrHistory)
#define CapSense_1_BUTTON32_PTR2FLTR_HISTORY_OFFSET         (1036u)
#define CapSense_1_BUTTON32_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON32_PTR2FLTR_HISTORY_PARAM_ID       (0xD020040Cu)

#define CapSense_1_BUTTON32_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[32].ptr2DebounceArr)
#define CapSense_1_BUTTON32_PTR2DEBOUNCE_OFFSET             (1040u)
#define CapSense_1_BUTTON32_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON32_PTR2DEBOUNCE_PARAM_ID           (0xD6200410u)

#define CapSense_1_BUTTON32_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[32].staticConfig)
#define CapSense_1_BUTTON32_STATIC_CONFIG_OFFSET            (1044u)
#define CapSense_1_BUTTON32_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON32_STATIC_CONFIG_PARAM_ID          (0xD7200414u)

#define CapSense_1_BUTTON32_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[32].totalNumSns)
#define CapSense_1_BUTTON32_TOTAL_NUM_SNS_OFFSET            (1048u)
#define CapSense_1_BUTTON32_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON32_TOTAL_NUM_SNS_PARAM_ID          (0x9B200418u)

#define CapSense_1_BUTTON32_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[32].wdgtType)
#define CapSense_1_BUTTON32_TYPE_OFFSET                     (1050u)
#define CapSense_1_BUTTON32_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON32_TYPE_PARAM_ID                   (0x5F20041Au)

#define CapSense_1_BUTTON32_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[32].numCols)
#define CapSense_1_BUTTON32_NUM_COLS_OFFSET                 (1051u)
#define CapSense_1_BUTTON32_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON32_NUM_COLS_PARAM_ID               (0x5920041Bu)

#define CapSense_1_BUTTON32_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[32].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON32_PTR2NOISE_ENVLP_OFFSET          (1052u)
#define CapSense_1_BUTTON32_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON32_PTR2NOISE_ENVLP_PARAM_ID        (0xD520041Cu)

#define CapSense_1_BUTTON33_PTR2SNS_FLASH_VALUE             (CapSense_1_dsFlash.wdgtArray[33].ptr2SnsFlash)
#define CapSense_1_BUTTON33_PTR2SNS_FLASH_OFFSET            (1056u)
#define CapSense_1_BUTTON33_PTR2SNS_FLASH_SIZE              (4u)
#define CapSense_1_BUTTON33_PTR2SNS_FLASH_PARAM_ID          (0xDA210420u)

#define CapSense_1_BUTTON33_PTR2WD_RAM_VALUE                (CapSense_1_dsFlash.wdgtArray[33].ptr2WdgtRam)
#define CapSense_1_BUTTON33_PTR2WD_RAM_OFFSET               (1060u)
#define CapSense_1_BUTTON33_PTR2WD_RAM_SIZE                 (4u)
#define CapSense_1_BUTTON33_PTR2WD_RAM_PARAM_ID             (0xDB210424u)

#define CapSense_1_BUTTON33_PTR2SNS_RAM_VALUE               (CapSense_1_dsFlash.wdgtArray[33].ptr2SnsRam)
#define CapSense_1_BUTTON33_PTR2SNS_RAM_OFFSET              (1064u)
#define CapSense_1_BUTTON33_PTR2SNS_RAM_SIZE                (4u)
#define CapSense_1_BUTTON33_PTR2SNS_RAM_PARAM_ID            (0xD8210428u)

#define CapSense_1_BUTTON33_PTR2FLTR_HISTORY_VALUE          (CapSense_1_dsFlash.wdgtArray[33].ptr2FltrHistory)
#define CapSense_1_BUTTON33_PTR2FLTR_HISTORY_OFFSET         (1068u)
#define CapSense_1_BUTTON33_PTR2FLTR_HISTORY_SIZE           (4u)
#define CapSense_1_BUTTON33_PTR2FLTR_HISTORY_PARAM_ID       (0xD921042Cu)

#define CapSense_1_BUTTON33_PTR2DEBOUNCE_VALUE              (CapSense_1_dsFlash.wdgtArray[33].ptr2DebounceArr)
#define CapSense_1_BUTTON33_PTR2DEBOUNCE_OFFSET             (1072u)
#define CapSense_1_BUTTON33_PTR2DEBOUNCE_SIZE               (4u)
#define CapSense_1_BUTTON33_PTR2DEBOUNCE_PARAM_ID           (0xDF210430u)

#define CapSense_1_BUTTON33_STATIC_CONFIG_VALUE             (CapSense_1_dsFlash.wdgtArray[33].staticConfig)
#define CapSense_1_BUTTON33_STATIC_CONFIG_OFFSET            (1076u)
#define CapSense_1_BUTTON33_STATIC_CONFIG_SIZE              (4u)
#define CapSense_1_BUTTON33_STATIC_CONFIG_PARAM_ID          (0xDE210434u)

#define CapSense_1_BUTTON33_TOTAL_NUM_SNS_VALUE             (CapSense_1_dsFlash.wdgtArray[33].totalNumSns)
#define CapSense_1_BUTTON33_TOTAL_NUM_SNS_OFFSET            (1080u)
#define CapSense_1_BUTTON33_TOTAL_NUM_SNS_SIZE              (2u)
#define CapSense_1_BUTTON33_TOTAL_NUM_SNS_PARAM_ID          (0x92210438u)

#define CapSense_1_BUTTON33_TYPE_VALUE                      (CapSense_1_dsFlash.wdgtArray[33].wdgtType)
#define CapSense_1_BUTTON33_TYPE_OFFSET                     (1082u)
#define CapSense_1_BUTTON33_TYPE_SIZE                       (1u)
#define CapSense_1_BUTTON33_TYPE_PARAM_ID                   (0x5621043Au)

#define CapSense_1_BUTTON33_NUM_COLS_VALUE                  (CapSense_1_dsFlash.wdgtArray[33].numCols)
#define CapSense_1_BUTTON33_NUM_COLS_OFFSET                 (1083u)
#define CapSense_1_BUTTON33_NUM_COLS_SIZE                   (1u)
#define CapSense_1_BUTTON33_NUM_COLS_PARAM_ID               (0x5021043Bu)

#define CapSense_1_BUTTON33_PTR2NOISE_ENVLP_VALUE           (CapSense_1_dsFlash.wdgtArray[33].ptr2NoiseEnvlp)
#define CapSense_1_BUTTON33_PTR2NOISE_ENVLP_OFFSET          (1084u)
#define CapSense_1_BUTTON33_PTR2NOISE_ENVLP_SIZE            (4u)
#define CapSense_1_BUTTON33_PTR2NOISE_ENVLP_PARAM_ID        (0xDC21043Cu)


#endif /* End CY_SENSE_CapSense_1_REGISTER_MAP_H */


/* [] END OF FILE */
