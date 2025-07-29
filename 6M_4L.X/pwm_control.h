#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // Include processor files - each processor file is guarded.

#define TMR2PRESCALE 4

// Declare (not define) global variables
extern unsigned int H;
extern unsigned int L;

// Declare (not call) functions
void PWM2_Initialize(void);

#endif	/* XC_HEADER_TEMPLATE_H */
