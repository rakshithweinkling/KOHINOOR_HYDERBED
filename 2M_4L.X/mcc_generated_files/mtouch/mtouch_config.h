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
    #define MTOUCH_BUTTONS          5u
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
    #define MTOUCH_SENSOR_ADPCH_Sensor_ANA4              0x4
    #define MTOUCH_SENSOR_PRECHARGE_Sensor_ANA4          48u
    #define MTOUCH_SENSOR_ACQUISITION_Sensor_ANA4        16u
    #define MTOUCH_SENSOR_OVERSAMPLING_Sensor_ANA4       32u
    #define MTOUCH_SENSOR_ADDITIONALCAP_Sensor_ANA4      0u
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

    #define MTOUCH_BUTTON_SENSOR_T4             Sensor_ANA3
    #define MTOUCH_BUTTON_SENSOR_T2             Sensor_ANA1
    #define MTOUCH_BUTTON_SENSOR_T3             Sensor_ANA4
    #define MTOUCH_BUTTON_SENSOR_T1             Sensor_ANA0
    #define MTOUCH_BUTTON_SENSOR_ALLOFF             Sensor_ANA2

    #define MTOUCH_BUTTON_THRESHOLD_T4          30u
    #define MTOUCH_BUTTON_THRESHOLD_T2          30u
    #define MTOUCH_BUTTON_THRESHOLD_T3          30u
    #define MTOUCH_BUTTON_THRESHOLD_T1          30u
    #define MTOUCH_BUTTON_THRESHOLD_ALLOFF          30u
    
    #define MTOUCH_BUTTON_SCALING_T4            1u
    #define MTOUCH_BUTTON_SCALING_T2            1u
    #define MTOUCH_BUTTON_SCALING_T3            1u
    #define MTOUCH_BUTTON_SCALING_T1            1u
    #define MTOUCH_BUTTON_SCALING_ALLOFF            1u

    #define MTOUCH_BUTTON_HYSTERESIS_T4     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_T2     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_T3     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_T1     HYST_MAX
    #define MTOUCH_BUTTON_HYSTERESIS_ALLOFF     HYST_6_25_PERCENT
    





#endif // MTOUCH_CONFIG_H
/**
 End of File
*/
