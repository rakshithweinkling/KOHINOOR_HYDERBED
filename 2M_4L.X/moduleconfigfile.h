#ifndef MODULE_CONFIG_FILE_H
#define MODULE_CONFIG_FILE_H

#include <stdbool.h>
#include "mcc_generated_files/mcc.h"
#include "globals.h"

// ------------------ Configuration Constants ------------------
#define NUM_GENERAL_TOUCH    4
#define NUM_FAN_SPEED_LEVELS 5
#define NUM_FAN_TOGGLES      2

// ------------------ External Variable Declarations ------------------

extern TouchIRControl controls[NUM_GENERAL_TOUCH];
extern FanSpeedControl fanSpeedControls[NUM_FAN_SPEED_LEVELS * 2];
extern FanToggleControl fanToggles[NUM_FAN_TOGGLES];
extern FanControl fans[NUM_FAN_TOGGLES];

#endif // MODULE_CONFIG_FILE_H
