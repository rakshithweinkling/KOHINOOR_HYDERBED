#include <pic18.h>
#include <stdint.h>
#include <stdbool.h>
#include "ir_handler.h"
#include "fanspeed.h"
#include "mcc_generated_files/mcc.h"
#include "globals.h"
#include "moduleconfigfile.h"
#include "load_handler.h"
#include "touch_handler.h"


unsigned int d = 0;
unsigned int t1 = 0, a1 = 0, a2 = 0, c1 = 0, c2 = 0, d1 = 0, d2 = 0, r1 = 0, r2 = 0;
bool toggle;

// Active fan index based on last IR toggle
static int8_t activeFanIR = -1;

void decodeIRSignal() {
    uint8_t i;
    uint8_t address = 0;
    uint8_t command = 0;

    __delay_us(445);
    if (!PORTBbits.RB1)
        __delay_us(889);
    else return;

    if (PORTBbits.RB1)
        __delay_us(889);
    else return;

    if (!PORTBbits.RB1)
        __delay_us(1778);
    else return;

    for (i = 0; i < 12; i++) {
        if (i == 0) {
            toggle = !PORTBbits.RB1;
        } else {
            if (i < 6) {
                if (PORTBbits.RB1)
                    address &= ~(1U << (5 - i));
                else
                    address |= (1U << (5 - i));
            } else {
                if (PORTBbits.RB1)
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
        __delay_ms(650);
        DATAEE_WriteByte(0x01, a2);
        __delay_ms(650);
        r1 = DATAEE_ReadByte(0x00);
        __delay_ms(650);
        r2 = DATAEE_ReadByte(0x01);
        __delay_ms(650);
        EUSART1_Write('V');
        __delay_ms(650);
        d1 = r1;
        d2 = r2;
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

        // Global ON/OFF toggle
        if (t1 == 0 && a1 == d1 && a2 == d2 && c1 == 0 && c2 == 9) {
            mainToggleState = !mainToggleState;

            if (mainToggleState == 1) {
                EUSART1_Write('y');
            } else {
                EUSART1_Write('z');
                L1_SetLow();
                
                L4_SetLow();
                L5_SetLow();
                L6_SetLow();
                L7_SetLow();
                L8_SetLow();
                ld1 = 0;
                ld2 = 0;
                ld3=0;
                PWM3_SetLow();
                PWM1_SetLow();
                PWM2_SetLow();
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

            // Fan toggle IR (unique per fan)
            for (uint8_t k = 0; k < 2; k++) {
                if (c1 == fans[k].toggle_c1 && c2 == fans[k].toggle_c2) {
                    if (*fans[k].state == 1) {
                        *fans[k].state = 1;
                    }
                    handleFanToggle(&fans[k]);
                    syncFanToggleState();

                    // Set active fan index
                    activeFanIR = k;
                    sto = 0;
                    return;
                }
            }

            // Speed control - only active fan responds
            if (activeFanIR >= 0 && activeFanIR < 2) {
                if (c1 == fans[activeFanIR].speedup_c1 && c2 == fans[activeFanIR].speedup_c2) {
                    handleFanSpeedChange(&fans[activeFanIR], 1);
                    syncFanToggleState();
                } else if (c1 == fans[activeFanIR].speeddown_c1 && c2 == fans[activeFanIR].speeddown_c2) {
                    handleFanSpeedChange(&fans[activeFanIR], -1);
                    syncFanToggleState();
                }
            }
        }

        sto = 0;
    }
}
