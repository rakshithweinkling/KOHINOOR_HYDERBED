#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include "fanspeed.h"
#include "ir_handler.h"
#include "moduleconfigfile.h"
#include "globals.h"
#include "load_handler.h"
uint8_t lastFanSpeed[2] = {1, 1};
// ----------------------------- LED Control Helpers -----------------------------
void setLightState(uint8_t touchID, bool state) {
    switch (touchID) {
        case T3: if (state) L1_SetHigh(); else L1_SetLow(); break;
        case T4: if (state) L2_SetHigh(); else L2_SetLow(); break;
        case T8: if (state) L3_SetHigh(); else L3_SetLow(); break;
        case T7: if (state) L4_SetHigh(); else L4_SetLow(); break;
//        case T1: if (state) L5_SetHigh(); else L5_SetLow(); break;
//        case T2: if (state) L6_SetHigh(); else L6_SetLow(); break;
//        case T1: if (state) L7_SetHigh(); else L7_SetLow(); break;
        case T1: if (state) L6_SetHigh(); else L6_SetLow(); break;        
        default: break;
    }
}
void updateLight(uint8_t i) {
    setLightState(controls[i].touchID, controls[i].toggle);
}


void uartLight(char received) {
    switch (received) {
        case 'a': L1_SetHigh(); break;
        case 'b': L1_SetLow(); break;
        case 'c': L2_SetHigh(); break;
        case 'd': L2_SetLow(); break;
        case 'e': L3_SetHigh(); break;
        case 'f': L3_SetLow(); break;
        case 'g': L4_SetHigh(); break;
        case 'h': L4_SetLow(); break;
//        case 'i': L5_SetHigh(); break;
//        case 'j': L5_SetLow(); break;
//        case 'k': L6_SetHigh(); break;
//        case 'l': L6_SetLow(); break;
//        case 'm': L7_SetHigh(); break;
//        case 'n': L7_SetLow(); break;
//        case 'o': L8_SetHigh(); break;
//        case 'p': L8_SetLow(); break;
        case 'I': L6_SetHigh(); break;
        case 'J': L6_SetLow(); break;
        case 'K': L8_SetHigh(); break;
        case 'L': L8_SetLow(); break;
        case 'y': 
        case 'z':
            L1_SetLow(); L2_SetLow(); L3_SetLow(); L4_SetLow();L5_SetLow();L6_SetLow();L7_SetLow();L8_SetLow();
            PWM1_SetLow(); PWM2_SetLow();ld1=0;ld2=0;
                ld3=0;
                PWM3_SetLow();
            break;
        default: break;
    }
}

void handleFanToggle(FanControl *fan) {
     
    uint8_t index = (fan == &fans[1]) ? 1 : 0;

    if (*fan->state == 1) {
        // Turn OFF

      
            EUSART1_Write(fan->offChar);
        
        
        *fan->fn = 0;
        *fan->led = 0;
        lastFanSpeed[index] = *fan->fan;
        *fan->fan = 0;
        *fan->state = 0;
    } else {
        // Turn ON
        *fan->fn = 1;

        if (*fan->fan < 1 || *fan->fan > 5) {
            *fan->fan = (lastFanSpeed[index] >= 1 && lastFanSpeed[index] <= 5) ? lastFanSpeed[index] : 1;
        }

        lastFanSpeed[index] = *fan->fan;
        *fan->led = *fan->fan;
        
        

           EUSART1_Write(fan->toggleChar);
           EUSART1_Write(fan->baseChar + (*fan->fan - 1));
       
        
        
        *fan->state = 1;
        
    }
}


void handleFanToggleU(FanControl *fan) {
     
    uint8_t index = (fan == &fans[1]) ? 1 : 0;

    if (*fan->state == 1) {
        // Turn OFF
        
        *fan->fn = 0;
        *fan->led = 0;
        lastFanSpeed[index] = *fan->fan;
        *fan->fan = 0;
        *fan->state = 0;
    } else {
        // Turn ON
        *fan->fn = 1;

        if (*fan->fan < 1 || *fan->fan > 5) {
            *fan->fan = (lastFanSpeed[index] >= 1 && lastFanSpeed[index] <= 5) ? lastFanSpeed[index] : 1;
        }

        lastFanSpeed[index] = *fan->fan;
        *fan->led = *fan->fan;            
        *fan->state = 1;
        
    }
}


void handleFanSpeedChange(FanControl *fan, int8_t direction) 
{
    if (*fan->state == 1) {
        if ((direction > 0 && *fan->fan < 5) ||
            (direction < 0 && *fan->fan > 0)) {
            *fan->fan += direction;
            *fan->led = *fan->fan;
            if (ustate == 1)
            {
                ustate =0;
            }
            else 
            {              
                if (*fan->fan == 0 ) 
                {
                    EUSART1_Write(fan->offChar);
                }
                if(*fan->fan != 0)  
                {
                    EUSART1_Write(fan->baseChar + (*fan->fan - 1));
                }
            }
        }
    }
}

