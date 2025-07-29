#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include "ir_handler.h"
#include "moduleconfigfile.h"
#include "globals.h"
#include "load_handler.h"
#include "touch_handler.h"
#include "uart_handler.h"

void OnHold(bool touch) {
   
        if (touch && isPressed == 0)
        {
            isPressed = 1;
            pressStartTime = millis_counter;
            sentU = false;
            sentV = false;
            sentT = false;
        }

        if (touch && isPressed == 1)
        {
            uint32_t heldTime = millis_counter - pressStartTime;

            if (!sentU && heldTime >= IR)
            {
                d = 1;
                EUSART_Write('U');
                sentU = true;
               
            }

            if (!sentV && heldTime >= IROFF)
            {
                d = 0;
                EUSART_Write('V');
                sentV = true;
                
            }

            if (!sentT && heldTime >= MATTER)
            {
                EUSART_Write('T');
                sentT = true;
               
                
            }
            
        }
}





void processToggle(TouchIRControl* ctrl, uint8_t index) {
    ctrl->toggle = !ctrl->toggle;
    EUSART_Write(ctrl->toggle ? ctrl->uartOn : ctrl->uartOff);
    updateLight(index);  // Or setLightState() if needed
    ctrl->pressedLast = true;  // Prevent immediate re-triggering
}



void handleGeneralTouchControls(void) {
    for (uint8_t i = 0; i < NUM_GENERAL_TOUCH; i++) {
        TouchIRControl* ctrl = &controls[i];

        if (!MTOUCH_Button_isPressed(ctrl->touchID) && isPressed==1) {
            isPressed = 0;
            if (!ctrl->pressedLast && !sentU && !sentV && !sentT) {
                processToggle(ctrl, i);
            }
        } else {
            // Reset only when fully released
            ctrl->pressedLast = false;
        }
    }
}
