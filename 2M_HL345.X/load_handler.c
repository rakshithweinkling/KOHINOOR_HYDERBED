#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include "ir_handler.h"
#include "moduleconfigfile.h"
#include "globals.h"
#include "load_handler.h"
// ----------------------------- LED Control Helpers -----------------------------
void setLightState(uint8_t touchID, bool state) {
    switch (touchID) {
        case T1: if (state) L1_SetHigh(); else L1_SetLow(); break;
//        case T3: if (state) L2_SetHigh(); else L2_SetLow(); break;
//        case T1: if (state) L3_SetHigh(); else L3_SetLow(); break;
//        case T2: if (state) L4_SetHigh(); else L4_SetLow(); break;
       
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
//        case 'c': L2_SetHigh(); break;
//        case 'd': L2_SetLow(); break;
//        case 'e': L3_SetHigh(); break;
//        case 'f': L3_SetLow(); break;
//        case 'g': L4_SetHigh(); break;
//        case 'h': L4_SetLow(); break;       
        case 'y': 
        case 'z':
            L1_SetLow(); //L2_SetLow(); L3_SetLow(); L4_SetLow();
            break;
        default: break;
    }
}

