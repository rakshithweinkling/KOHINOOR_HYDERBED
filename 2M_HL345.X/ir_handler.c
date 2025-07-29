#include <stdint.h>
#include <stdbool.h>
#include "ir_handler.h"
#include "mcc_generated_files/mcc.h"
#include "globals.h"
#include "load_handler.h"



unsigned int d = 0;
unsigned int t1 = 0, a1 = 0, a2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0, r1 = 0, r2 = 0;

bool toggle;
bool togir=0;

void decodeIRSignal() {
    uint8_t i;
    uint8_t address = 0;
    uint8_t command = 0;

    __delay_us(445);
    if (!PORTAbits.RA2)
        __delay_us(889);
    else return;

    if (PORTAbits.RA2)
        __delay_us(889);
    else return;

    if (!PORTAbits.RA2)
        __delay_us(1778);
    else return;

    for (i = 0; i < 12; i++) {
        if (i == 0) {
            toggle = !PORTAbits.RA2;
        } else {
            if (i < 6) {
                if (PORTAbits.RA2)
                    address &= ~(1U << (5 - i));
                else
                    address |= (1U << (5 - i));
            } else {
                if (PORTAbits.RA2)
                    command &= ~(1U << (11 - i));
                else
                    command |= (1U << (11 - i));
            }
        }
        __delay_us(1778);
    }

    t1 = toggle;
    a1 = (uint8_t)((address / 10) % 10);
    a2 = (uint8_t)(address % 10);
    c1 = (uint8_t)((command / 10) % 10);
    c2 = (uint8_t)(command % 10);
    sto = 1;

    if (d == 1) {
        d = 0;
        DATAEE_WriteByte(0x00, a1);
        __delay_ms(750);
        DATAEE_WriteByte(0x01, a2);
        __delay_ms(750);
        d1 = DATAEE_ReadByte(0x00);
        __delay_ms(650);
        d2 = DATAEE_ReadByte(0x01);
        __delay_ms(650);
        EUSART_Write('V');
        __delay_ms(650);
    }
}


void ir_handler(void) {
    
    if (sto == 1) {
            
        // Special wipe toggle
        if (t1 == 0 && a1 == d1 && a2 == d2 && c1 == 0 && c2 == 8) {
            wipeEnabled = !wipeEnabled;
            wipeTriggerFlag = (wipeEnabled == 1) ? 1 : 0;
            sto = 0;
            return;
        }  
        if (t1 == 0 && a1 == d1 && a2 == d2 && c1 == 0 && c2 == 9) {
            mainToggleState = !mainToggleState;

            if (mainToggleState == 1) {
                EUSART_Write('y');
            } else {
                EUSART_Write('z');
                L1_SetLow();
                
            }

            sto = 0;
            return;
        }
                // General IR toggle controls
        if (t1 == 0 && a1 == d1 && a2 == d2) {
            for (uint8_t i = 0; i < NUM_GENERAL_TOUCH; i++) {
                TouchIRControl* ctrl = &controls[i];
                if (c1 == ctrl->c1 && c2 == ctrl->c2 && !ctrl->pressedLast) {
                    processToggle(ctrl, i);
                    sto = 0;
                    return;
                }
            }          
        }    
        sto = 0;
    }
}
