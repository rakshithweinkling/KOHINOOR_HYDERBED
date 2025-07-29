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

char received = 0;

void handleUARTCommands(void) 
{
    if (EUSART_DataReady) 
    {
        char received = EUSART_Read();
        
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
    }
}
