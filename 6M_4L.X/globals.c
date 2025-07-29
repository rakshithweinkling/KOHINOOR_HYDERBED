#include "globals.h"

bool wipeTriggerFlag = 0;
bool wipeEnabled = 0;
unsigned int fn1 = 0, fn2 = 0;
unsigned char fan1_state = 0;
unsigned char fan2_state = 0;
uint8_t f10 = 0, f11 = 0, f20 = 0, f21 = 0;
bool touchEdgeDetected = 0, mainToggleState = 0;
uint8_t lastFanSpeed[2] = {0, 0};
uint8_t ustate = 0;
uint16_t holdCounter = 0;
