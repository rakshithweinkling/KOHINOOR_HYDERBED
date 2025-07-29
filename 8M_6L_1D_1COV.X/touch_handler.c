#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include "fanspeed.h"
#include "ir_handler.h"
#include "moduleconfigfile.h"
#include "globals.h"
#include "load_handler.h"
#include "touch_handler.h"
#include "uart_handler.h"

void OnHold(bool touch) {
    static uint8_t irTriggered = 0;
    static uint8_t matterTriggered = 0;

    if (touch) {
        holdCounter++;
        if (holdCounter == IR && !irTriggered) {
            d = 1;
            EUSART1_Write('U');
            __delay_ms(1000);
            irTriggered = 1;
        }
        if(holdCounter == IROFF && irTriggered) {
            EUSART1_Write('V');
            d = 0;
        }
        if (holdCounter >= MATTER && !matterTriggered) {
            EUSART1_Write('T');
            __delay_ms(3000);
            matterTriggered = 1;
        }
    } else {
        holdCounter = 0;
        irTriggered = 0;
        matterTriggered = 0;
    }
}





void processToggle(TouchIRControl* ctrl, uint8_t index) {
    ctrl->toggle = !ctrl->toggle;
    EUSART1_Write(ctrl->toggle ? ctrl->uartOn : ctrl->uartOff);
    updateLight(index);  // Or setLightState() if needed
    ctrl->pressedLast = true;  // Prevent immediate re-triggering
}



void handleGeneralTouchControls(void) {
    for (uint8_t i = 0; i < NUM_GENERAL_TOUCH; i++) {
        TouchIRControl* ctrl = &controls[i];

        if (MTOUCH_Button_isPressed(ctrl->touchID)) {
            if (!ctrl->pressedLast) {
                processToggle(ctrl, i);
            }
        } else {
            // Reset only when fully released
            ctrl->pressedLast = false;
        }
    }
}
void processFanToggle(FanToggleControl* ft) {
    FanControl* fan = ft->fanCtrl;

    if (*fan->state == 1) {
        *fan->state = 1;  // Force ON state before toggling OFF
        handleFanToggle(fan);
    } else {
        handleFanToggle(fan);  // Turn ON
    }

    *(ft->toggleState) = *fan->state;  // Always sync toggleState
}

void handleFanToggleControls(void) {
    for (uint8_t i = 0; i < NUM_FAN_TOGGLES; i++) {
       // if (i == 0) continue;
        FanToggleControl* ft = &fanToggles[i];
        if (MTOUCH_Button_isPressed(ft->touchID)) {
            if (*(ft->toggleFlag) == 0) {
                processFanToggle(ft);
                *(ft->toggleFlag) = 1;
            }
        } else {
            *(ft->toggleFlag) = 0;
        }
    }
}

void processFanSpeedControl(FanSpeedControl* fc, uint8_t index) {
    *(fc->fanSpeed) = (index % NUM_FAN_SPEED_LEVELS) + 1;
    *(fc->ledStatus) = *(fc->fanSpeed);
    if(ustate == 1)
    {        
        ustate =0;
    }
    else
    {
        EUSART1_Write(fc->uartCode);
    }        
    FanControl* fan = (fc->fanSpeed == fans[0].fan) ? &fans[0] : &fans[1];
    if (*fan->state == 0)
    {
        handleFanToggle(fan);
        
    }

    syncFanToggleState(); // <- Ensures toggle states reflect actual states
}
void processFanSpeedControlU(FanSpeedControl* fc, uint8_t index) {
    *(fc->fanSpeed) = (index % NUM_FAN_SPEED_LEVELS) + 1;
    *(fc->ledStatus) = *(fc->fanSpeed);       
    FanControl* fan = (fc->fanSpeed == fans[0].fan) ? &fans[0] : &fans[1];
    if (*fan->state == 0)
    {
        handleFanToggleU(fan);
        
    }

    syncFanToggleState(); // <- Ensures toggle states reflect actual states
}

void handleFanSpeedControl(void) {
    for (uint8_t i = 0; i < NUM_FAN_SPEED_LEVELS * 2; i++) {
        FanSpeedControl* fc = &fanSpeedControls[i];

        if (MTOUCH_Button_isPressed(fc->touchID)) 
        {
            if (!fc->pressedFlag) 
            {
                processFanSpeedControl(fc, i);
                fc->pressedFlag = true;
            }
        }
        else {
            fc->pressedFlag = false;
        }
    }
}

void syncFanToggleState(void) {
    for (uint8_t i = 0; i < NUM_FAN_TOGGLES; i++) {
        FanToggleControl* ft = &fanToggles[i];
        *(ft->toggleState) = *ft->fanCtrl->state;
        *(ft->toggleFlag) = 0;
    }
}