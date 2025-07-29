#ifndef IR_HANDLER_H
#define IR_HANDLER_H

#include <stdint.h>
#include <stdbool.h>

#define _XTAL_FREQ 32000000

// Global variable declarations
extern unsigned int d;
extern unsigned int t1, a1, a2, c1, c2, d1, d2, r1, r2;

// Function declaration
void ir_handler(void);

#endif // IR_HANDLER_H
