#ifndef GLOBALS_H
#define GLOBALS_H

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include "mcc_generated_files/mcc.h"

// ----------------------------- Global Variable Declarations -----------------------------

extern bool wipeTriggerFlag;
extern bool wipeEnabled;
extern unsigned int fn1, fn2;
extern unsigned char fan1_state;
extern unsigned char fan2_state;
extern uint8_t f10, f11, f20, f21;

extern bool touchEdgeDetected, mainToggleState;
extern uint8_t lastFanSpeed[2];
extern uint8_t ustate;
extern uint16_t holdCounter;


#define IR 10000
#define IROFF 15000
#define MATTER 20000

// ----------------------------- Structures -----------------------------

typedef struct {
    enum mtouch_button_names touchID;
    char uartOn;
    char uartOff;
    bool toggle;
    bool pressedLast;
    unsigned int c1, c2;  
} TouchIRControl;

typedef struct {
    uint8_t* state;
    uint8_t* fan;
    uint8_t* led;
    uint8_t* fn;
    char toggleChar;
    char offChar;
    char baseChar;
    uint8_t toggle_c1, toggle_c2;
    uint8_t speedup_c1, speedup_c2;
    uint8_t speeddown_c1, speeddown_c2;
} FanControl;

typedef struct {
    enum mtouch_button_names touchID;
    uint8_t* toggleFlag;
    uint8_t* toggleState;
    FanControl* fanCtrl;
} FanToggleControl;

typedef struct {
    enum mtouch_button_names touchID;
    char uartCode;
    uint8_t* fanSpeed;
    uint8_t* ledStatus;
    bool pressedFlag;
} FanSpeedControl;

#endif /* GLOBALS_H */
