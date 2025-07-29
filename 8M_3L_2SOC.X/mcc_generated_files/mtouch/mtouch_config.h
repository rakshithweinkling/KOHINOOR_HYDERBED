/*
    MICROCHIP SOFTWARE NOTICE AND DISCLAIMER:

    You may use this software, and any derivatives created by any person or
    entity by or on your behalf, exclusively with Microchip's products.
    Microchip and its subsidiaries ("Microchip"), and its licensors, retain all
    ownership and intellectual property rights in the accompanying software and
    in all derivatives hereto.

    This software and any accompanying information is for suggestion only. It
    does not modify Microchip's standard warranty for its products.  You agree
    that you are solely responsible for testing the software and determining
    its suitability.  Microchip has no obligation to modify, test, certify, or
    support the software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE APPLY TO THIS SOFTWARE, ITS INTERACTION WITH MICROCHIP'S
    PRODUCTS, COMBINATION WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT, WILL MICROCHIP BE LIABLE, WHETHER IN CONTRACT, WARRANTY, TORT
    (INCLUDING NEGLIGENCE OR BREACH OF STATUTORY DUTY), STRICT LIABILITY,
    INDEMNITY, CONTRIBUTION, OR OTHERWISE, FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    EXEMPLARY, INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, FOR COST OR EXPENSE OF
    ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWSOEVER CAUSED, EVEN IF
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE
    FORESEEABLE.  TO THE FULLEST EXTENT ALLOWABLE BY LAW, MICROCHIP'S TOTAL
    LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED
    THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR
    THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF
    THESE TERMS.
*/
#ifndef MTOUCH_CONFIG_H
#define MTOUCH_CONFIG_H

#include <stdint.h>
#include <stdbool.h>
#include "mtouch_sensor.h"
#include "mtouch_button.h"

/*
 * =======================================================================
 * Application / Configuration Settings
 * =======================================================================
 */
    #define MTOUCH_BUTTONS_ENABLE   1u

#if (MTOUCH_BUTTONS_ENABLE == 1u)    
    #define MTOUCH_BUTTONS          19u
#else
    #define MTOUCH_BUTTONS          0u
#endif
    #define MTOUCH_SENSORS          (MTOUCH_BUTTONS)
    #define MTOUCH_DEBUG_COMM_ENABLE      1u


    /* 
     * =======================================================================
     * Sensor Parameters
     * =======================================================================
     */

    
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANF6              0x2e
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANF6          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANF6        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANF6       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANF6      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANF4              0x2c
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANF4          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANF4        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANF4       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANF4      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANG6              0x36
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANG6          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANG6        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANG6       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANG6      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANE3              0x23
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANE3          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANE3        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANE3       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANE3      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANE5              0x25
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANE5          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANE5        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANE5       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANE5      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANE6              0x26
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANE6          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANE6        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANE6       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANE6      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANE7              0x27
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANE7          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANE7        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANE7       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANE7      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_AND0              0x18
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_AND0          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_AND0        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_AND0       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_AND0      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANB3              0xb
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANB3          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANB3        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANB3       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANB3      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANB4              0xc
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANB4          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANB4        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANB4       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANB4      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANB5              0xd
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANB5          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANB5        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANB5       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANB5      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANA6              0x6
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANA6          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANA6        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANA6       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANA6      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANA4              0x4
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANA4          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANA4        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANA4       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANA4      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANA5              0x5
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANA5          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANA5        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANA5       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANA5      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANA0              0x0
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANA0          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANA0        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANA0       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANA0      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANA1              0x1
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANA1          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANA1        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANA1       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANA1      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANA2              0x2
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANA2          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANA2        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANA2       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANA2      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANA3              0x3
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANA3          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANA3        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANA3       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANA3      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANF2              0x2a
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANF2          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANF2        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANF2       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANF2      0u
    /*-----------------------------------------------------------------------------*/
    #define MTOUCH_SENSOR_ACTIVE_THRESHOLD               100u  

    /* 
     * =======================================================================
     * Button Parameters
     * =======================================================================
     */

    #define MTOUCH_BUTTON_READING_GAIN              ((uint8_t)2u)
    #define MTOUCH_BUTTON_BASELINE_GAIN             ((uint8_t)4u)
    #define MTOUCH_BUTTON_BASELINE_INIT             ((mtouch_button_baselinecounter_t)16u)
    #define MTOUCH_BUTTON_BASELINE_RATE             ((mtouch_button_baselinecounter_t)64u)
    #define MTOUCH_BUTTON_BASELINE_HOLD             ((mtouch_button_baselinecounter_t)1024u)
    #define MTOUCH_BUTTON_NEGATIVEDEVIATION         ((mtouch_button_statecounter_t)64u)
    #define MTOUCH_BUTTON_PRESSTIMEOUT              ((mtouch_button_statecounter_t)1000u)

    #define MTOUCH_BUTTON_SENSOR_T1             Sensor_ANF6
    #define MTOUCH_BUTTON_SENSOR_TN             Sensor_ANF2
    #define MTOUCH_BUTTON_SENSOR_ALLOFF             Sensor_ANG6
    #define MTOUCH_BUTTON_SENSOR_F15             Sensor_ANE3
    #define MTOUCH_BUTTON_SENSOR_F14             Sensor_ANE5
    #define MTOUCH_BUTTON_SENSOR_F13             Sensor_ANE6
    #define MTOUCH_BUTTON_SENSOR_F12             Sensor_ANE7
    #define MTOUCH_BUTTON_SENSOR_F11             Sensor_AND0
    #define MTOUCH_BUTTON_SENSOR_T7             Sensor_ANB3
    #define MTOUCH_BUTTON_SENSOR_T6             Sensor_ANB4
    #define MTOUCH_BUTTON_SENSOR_T5             Sensor_ANB5
    #define MTOUCH_BUTTON_SENSOR_T8             Sensor_ANA6
    #define MTOUCH_BUTTON_SENSOR_F25             Sensor_ANA4
    #define MTOUCH_BUTTON_SENSOR_F24             Sensor_ANA5
    #define MTOUCH_BUTTON_SENSOR_F23             Sensor_ANA0
    #define MTOUCH_BUTTON_SENSOR_F22             Sensor_ANA1
    #define MTOUCH_BUTTON_SENSOR_F21             Sensor_ANA2
    #define MTOUCH_BUTTON_SENSOR_T4             Sensor_ANA3
    #define MTOUCH_BUTTON_SENSOR_T2             Sensor_ANF4

    #define MTOUCH_BUTTON_THRESHOLD_T1          40u
    #define MTOUCH_BUTTON_THRESHOLD_TN          40u
    #define MTOUCH_BUTTON_THRESHOLD_ALLOFF          40u
    #define MTOUCH_BUTTON_THRESHOLD_F15          40u
    #define MTOUCH_BUTTON_THRESHOLD_F14          40u
    #define MTOUCH_BUTTON_THRESHOLD_F13          40u
    #define MTOUCH_BUTTON_THRESHOLD_F12          40u
    #define MTOUCH_BUTTON_THRESHOLD_F11          40u
    #define MTOUCH_BUTTON_THRESHOLD_T7          40u
    #define MTOUCH_BUTTON_THRESHOLD_T6          40u
    #define MTOUCH_BUTTON_THRESHOLD_T5          40u
    #define MTOUCH_BUTTON_THRESHOLD_T8          40u
    #define MTOUCH_BUTTON_THRESHOLD_F25          40u
    #define MTOUCH_BUTTON_THRESHOLD_F24          40u
    #define MTOUCH_BUTTON_THRESHOLD_F23          40u
    #define MTOUCH_BUTTON_THRESHOLD_F22          40u
    #define MTOUCH_BUTTON_THRESHOLD_F21          40u
    #define MTOUCH_BUTTON_THRESHOLD_T4          40u
    #define MTOUCH_BUTTON_THRESHOLD_T2          40u
    
    #define MTOUCH_BUTTON_SCALING_T1            1u
    #define MTOUCH_BUTTON_SCALING_TN            1u
    #define MTOUCH_BUTTON_SCALING_ALLOFF            1u
    #define MTOUCH_BUTTON_SCALING_F15            1u
    #define MTOUCH_BUTTON_SCALING_F14            1u
    #define MTOUCH_BUTTON_SCALING_F13            1u
    #define MTOUCH_BUTTON_SCALING_F12            1u
    #define MTOUCH_BUTTON_SCALING_F11            1u
    #define MTOUCH_BUTTON_SCALING_T7            1u
    #define MTOUCH_BUTTON_SCALING_T6            1u
    #define MTOUCH_BUTTON_SCALING_T5            1u
    #define MTOUCH_BUTTON_SCALING_T8            1u
    #define MTOUCH_BUTTON_SCALING_F25            1u
    #define MTOUCH_BUTTON_SCALING_F24            1u
    #define MTOUCH_BUTTON_SCALING_F23            1u
    #define MTOUCH_BUTTON_SCALING_F22            1u
    #define MTOUCH_BUTTON_SCALING_F21            1u
    #define MTOUCH_BUTTON_SCALING_T4            1u
    #define MTOUCH_BUTTON_SCALING_T2            1u

    #define MTOUCH_BUTTON_HYSTERESIS_T1     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_TN     HYST_50_PERCENT
    #define MTOUCH_BUTTON_HYSTERESIS_ALLOFF     HYST_6_25_PERCENT
    #define MTOUCH_BUTTON_HYSTERESIS_F15     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_F14     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_F13     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_F12     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_F11     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_T7     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_T6     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_T5     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_T8     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_F25     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_F24     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_F23     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_F22     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_F21     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_T4     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_T2     HYST_MAX
    





#endif // MTOUCH_CONFIG_H
/**
 End of File
*/
