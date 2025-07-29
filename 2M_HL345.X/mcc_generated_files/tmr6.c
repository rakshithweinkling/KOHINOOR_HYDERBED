#include <xc.h>
#include "tmr6.h"

// ? Global millisecond counter (increments every 1ms)
volatile uint32_t millis_counter = 0;

// Function pointer for optional user-defined ISR
void (*TMR6_InterruptHandler)(void);

void TMR6_Initialize(void)
{
    // Fosc = 32 MHz ? Fosc/4 = 8 MHz instruction clock
    // Prescaler = 1:64 ? 1 tick = 8 µs
    // 1ms = 1000 µs ? 1000 / 8 = 125 ticks
    PR6 = 125;        // Timer6 period register
    TMR6 = 0x00;      // Clear timer count

    PIR2bits.TMR6IF = 0;  // Clear interrupt flag
    PIE2bits.TMR6IE = 1;  // Enable interrupt

    // T6CON:
    // - T6CKPS = 1:64 (Prescaler)
    // - T6OUTPS = 1:1 (Postscaler)
    // - TMR6ON = 1 (Enable timer)
    T6CON = 0b00010010;

    // Optional: default handler setup
    TMR6_SetInterruptHandler(TMR6_DefaultInterruptHandler);
}

void TMR6_StartTimer(void)
{
    T6CONbits.TMR6ON = 1;
}

void TMR6_StopTimer(void)
{
    T6CONbits.TMR6ON = 0;
}

uint8_t TMR6_ReadTimer(void)
{
    return TMR6;
}

void TMR6_WriteTimer(uint8_t timerVal)
{
    TMR6 = timerVal;
}

void TMR6_LoadPeriodRegister(uint8_t periodVal)
{
   PR6 = periodVal;
}

void TMR6_ISR(void)
{
    // Clear interrupt flag
    PIR2bits.TMR6IF = 0;

    // ? Count milliseconds
    millis_counter++;

    if (TMR6_InterruptHandler)
    {
        TMR6_InterruptHandler();
    }
}

void TMR6_SetInterruptHandler(void (* InterruptHandler)(void))
{
    TMR6_InterruptHandler = InterruptHandler;
}

void TMR6_DefaultInterruptHandler(void)
{
    // Optional: do nothing by default
}
