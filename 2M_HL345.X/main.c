/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F18855
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include "ir_handler.h"
#include "moduleconfigfile.h"
#include "globals.h"
#include "load_handler.h"
#include "touch_handler.h"
#include "uart_handler.h"
/*
                         Main application
 */




void main(void)
{
    SYSTEM_Initialize();
    TMR6_Initialize();
    TMR6_StartTimer();
    InitExternal_INT();    

    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();

    d1 = DATAEE_ReadByte(0x00);
    __delay_ms(650);
    d2 = DATAEE_ReadByte(0x01);
    __delay_ms(650);

    while (1)
    {
        MTOUCH_Service_Mainloop();
                handleUARTCommands();

        // If wipe is requested, prioritize IR handler and skip the rest
        if (wipeTriggerFlag == 1) {
            ir_handler();
            continue;
        }

                    
        bool buttonPressed = MTOUCH_Button_isPressed(T1);
        OnHold(buttonPressed);
            if (touchEdgeDetected == 1 && !buttonPressed) {
            touchEdgeDetected = 0;
            mainToggleState = !mainToggleState;

            if (mainToggleState == 1) {
                EUSART_Write('y');
            } else {
                EUSART_Write('z');
                L1_SetLow(); 
            }
        }
        

        
        handleGeneralTouchControls();
        ir_handler();

        __delay_ms(1);
    }
}
