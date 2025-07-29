#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "fanspeed.h"
#include "ir_handler.h"
#include "moduleconfigfile.h"
#include "globals.h"
#include "load_handler.h"
#include "touch_handler.h"
#include "uart_handler.h"
#include "pwm_control.h"

void main(void) {
    // System Initialization
    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    InitExternal_INT();
    InitTimer1();
    InitTimer3();
    PWM3_Initialize();

    // Configure NVM for EEPROM access
    NVMCON1bits.NVMREG0 = 0;
    NVMCON1bits.NVMREG1 = 1;

    // Read IR configuration data from EEPROM
    d1 = DATAEE_ReadByte(0x00);
    __delay_ms(650);
    d2 = DATAEE_ReadByte(0x01);
    __delay_ms(650);

    while (1) {
       
        // Service touch sensors
        MTOUCH_Service_Mainloop();
                // Handle UART commands from ESP32S3 
        handleUARTCommands();

        // If wipe is requested, prioritize IR handler and skip the rest
        if (wipeTriggerFlag == 1) {
            ir_handler();
            continue;
        }

        bool touchDetected = MTOUCH_Button_isPressed(ALLOFF);
        OnHold(touchDetected);

        // Handle long press (All OFF)
        if (touchDetected) {
            touchEdgeDetected = 1;
        }

        if (touchEdgeDetected == 1 && !touchDetected) {
            touchEdgeDetected = 0;
            mainToggleState = !mainToggleState;

            if (mainToggleState == 1) {
                EUSART1_Write('y');
            } else {
                EUSART1_Write('z');
                L1_SetLow(); L2_SetLow(); L3_SetLow(); L4_SetLow();
                L5_SetLow(); L6_SetLow(); L7_SetLow(); L8_SetLow();
                PWM1_SetLow(); PWM2_SetLow();
                ld1 = 0; ld2 = 0;
                ld3=0;
                PWM3_SetLow();
            }
        }



        // Handle user input and control logic
        handleGeneralTouchControls();
        handleFanToggleControls();
        handleFanSpeedControl();
        fanscon();
        ir_handler();
    }
}