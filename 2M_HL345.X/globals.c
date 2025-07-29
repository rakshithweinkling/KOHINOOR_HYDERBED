#include "globals.h"

bool wipeTriggerFlag = 0;
bool wipeEnabled = 0;

uint8_t toggleState = 0;
uint8_t isPressed = 0;
uint32_t pressStartTime = 0;
bool touchEdgeDetected = 0, mainToggleState = 0;

bool sentU = false;
bool sentV = false;
bool sentT = false;