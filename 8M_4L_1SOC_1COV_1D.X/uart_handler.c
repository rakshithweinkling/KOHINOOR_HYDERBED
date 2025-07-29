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

char received = 0;

void handleUARTCommands(void) 
{
    if (EUSART1_DataReady) 
    {
        char received = EUSART1_Read();
        switch (received) 
        {
            case 'q': // Fan1 ON
                if (*fans[0].state == 0)
                {
                    ustate=1;            
                    handleFanToggleU(&fans[0]);
                }
                 syncFanToggleState();
                break;

            case 'r': // Fan1 OFF
                if (*fans[0].state == 1) 
                {
                    ustate=1;           
                    handleFanToggleU(&fans[0]);
                }
                 syncFanToggleState();
                break;

            case 's': // Fan2 ON
                if (*fans[1].state == 0) 
                {
                    ustate=1;
                    handleFanToggleU(&fans[1]);
                }

                syncFanToggleState();
                break;

            case 't': // Fan2 OFF
                if (*fans[1].state == 1)
                {
                    ustate=1;
                    handleFanToggleU(&fans[1]);
                }
                 syncFanToggleState();
                break;

            case '0': case '1': case '2': case '3': case '4': {
                uint8_t index = received - '0';
                ustate = 1;
                processFanSpeedControlU(&fanSpeedControls[index], index);

                // Set toggleState to ensure touch stays in sync
                *(fanToggles[0].toggleState) = *fans[0].state;
                syncFanToggleState();
                break;
            }

            case '5': case '6': case '7': case '8': case '9':
            {
                uint8_t index = (received - '5') + 5;
                ustate = 1;
                processFanSpeedControlU(&fanSpeedControls[index], index);

                *(fanToggles[1].toggleState) = *fans[1].state;
                syncFanToggleState();
                break;
            }
            default:
                for (uint8_t i = 0; i < NUM_GENERAL_TOUCH; i++) 
                {
                    if (received == controls[i].uartOn || received == controls[i].uartOff) {
                        uartLight(received);
                        controls[i].toggle = (received == controls[i].uartOn);
                        setLightState(controls[i].touchID, controls[i].toggle);
                        //EUSART1_Write(received);
                        break;
                    }
                }
                break;
        }
       
    }
}
