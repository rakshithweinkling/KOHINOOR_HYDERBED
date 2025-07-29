#ifndef GLOBALS_H
#define GLOBALS_H

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include "mcc_generated_files/mcc.h"

// ----------------------------- Global Variable Declarations -----------------------------
extern volatile uint32_t millis_counter;
extern bool wipeTriggerFlag;
extern bool wipeEnabled;
extern bool touchEdgeDetected, mainToggleState;
extern uint8_t ustate;
extern uint16_t holdCounter;

extern uint8_t toggleState ;
extern uint8_t isPressed ;
extern uint32_t pressStartTime;

extern bool sentU ;
extern bool sentV ;
extern bool sentT ;

#define IR 20000UL
#define IROFF 30000UL
#define MATTER 50000UL


// ----------------------------- Structures -----------------------------

typedef struct {
    enum mtouch_button_names touchID;
    char uartOn;
    char uartOff;
    bool toggle;
    bool pressedLast;
    unsigned int c1, c2;  
} TouchIRControl;


#endif /* GLOBALS_H */
