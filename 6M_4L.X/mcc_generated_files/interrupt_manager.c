/**
  Generated Interrupt Manager Source File

  @Company:
    Microchip Technology Inc.

  @File Name:
    interrupt_manager.c

  @Summary:
    This is the Interrupt Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description:
    This header file provides implementations for global interrupt handling.
    For individual peripheral handlers please see the peripheral driver for
    all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F65K40
        Driver Version    :  2.04
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above or later
        MPLAB 	          :  MPLAB X 6.00
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

#include "interrupt_manager.h"
#include "mcc.h"

void INTERRUPT_Initialize(void)
{
    // Disable Interrupt Priority Vectors (16CXXX Compatibility Mode)
    INTCONbits.IPEN = 0;
}

void interrupt INTERRUPT_InterruptManager(void)
{
    // interrupt handler
    if (INTCONbits.PEIE == 1)
    {
        if (PIE1bits.ADTIE == 1 && PIR1bits.ADTIF == 1)
        {
            ADCC_ThresholdISR();
        }

        if (PIR0bits.INT1IF == 1) // IR Interrupt
        {
            if (!sto)
            {
                decodeIRSignal();
            }
            PIR0bits.INT1IF = 0;
        }

        if (PIR0bits.INT0IF == 1) // Zero Crossing
        {
            PIR0bits.INT0IF = 0;

            TMR1H = temp1h;
            TMR1L = temp1l;
            TMR3H = temp2h;
            TMR3L = temp2l;

            T3CONbits.TMR3ON = 1;
            T1CONbits.TMR1ON = 1;
        }


        if (PIR5bits.TMR1IF)
        {
            while (!PIR5bits.TMR1IF);

            PIR5bits.TMR1IF = 0;

            if (ld1 == 0)
            {
                PWM1_SetLow();
                // PWM2_SetLow();
            }
            else
            {
                PWM1_SetHigh();
                // PWM2_SetHigh();

                #asm
                    nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                #endasm
                PWM1_SetLow();
                // PWM2_SetLow();

                T1CONbits.TMR1ON = 0;
            }
        }

        if (PIR5bits.TMR3IF)
        {
            while (!PIR5bits.TMR3IF);

            PIR5bits.TMR3IF = 0;

            if (ld2 == 0)
            {
                PWM2_SetLow();
                // PWM2_SetLow();
            }
            else
            {
                PWM2_SetHigh();
                // PWM2_SetHigh();

                #asm
                    nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                    nop;nop;nop;nop;nop;nop;
                #endasm
                PWM2_SetLow();
                // PWM2_SetLow();

                T3CONbits.TMR3ON = 0;
            }
        }
        else
        {
            // Unhandled Interrupt
        }
    }
    else
    {
        // Unhandled Interrupt
    }
}

void InitExternal_INT(void)
{
    INTCONbits.INT1EDG = 0;    // Interrupt on falling edge
    INTCONbits.IPEN = 0;       // Disable priority mode
    INTCONbits.GIEL = 1;       // Enable low priority interrupts globally

    PIR0bits.INT1IF = 0;       // Clear INT1 flag
    PIE0bits.INT1IE = 1;       // Enable INT1 interrupts
    IPR0bits.INT1IP = 0;       // Set INT1 as low priority

    INTCONbits.INT0EDG = 0;    // Interrupt on falling edge
    PIR0bits.INT0IF = 0;       // Clear INT0 flag
    PIE0bits.INT0IE = 1;       // Enable INT0 interrupts
    IPR0bits.INT0IP = 0;       // Set INT0 as low priority
}

void Init_intoc(void)
{
    IOCBFbits.IOCBF1 = 0;
    IOCBPbits.IOCBP1 = 0;

    PIE0bits.IOCIE = 1;        // Enable interrupt-on-change
    PIR0bits.IOCIF = 0;        // Clear interrupt flag
    IPR0bits.INT0IP = 0;       // Set interrupt priority (low)
}

void InitTimer1(void)
{
    TMR1CLK = 0x01;
    T1CON = 0x80;
    PIR5bits.TMR1IF = 0;
    PIE5bits.TMR1IE = 1;
    INTCON = 0xC0;
}

void InitTimer3(void)
{
    TMR3CLK = 0x01;
    T3CON = 0x80;
    PIR5bits.TMR3IF = 0;
    PIE5bits.TMR3IE = 1;
    INTCON = 0xC0;
}

// Commented out InitTimer5 - you can uncomment if needed
/*
void InitTimer5(void)
{
    TMR5CLK = 0x01;
    T5CON = 0x80;
    PIR5bits.TMR5IF = 0;
    TMR5H = 0xFF;
    TMR5L = 0xF8;
    PIE5bits.TMR5IE = 1;
    INTCON = 0xC0;
    T5CONbits.TMR5ON = 1;
}
*/

/**
 End of File
*/
