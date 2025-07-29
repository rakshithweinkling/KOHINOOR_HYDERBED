#include "moduleconfigfile.h"
#include "mcc_generated_files/mcc.h"
#include "globals.h"
#include "ir_handler.h"
#include "fanspeed.h"

TouchIRControl controls[NUM_GENERAL_TOUCH];
FanSpeedControl fanSpeedControls[NUM_FAN_SPEED_LEVELS * 2];
FanToggleControl fanToggles[NUM_FAN_TOGGLES];
FanControl fans[NUM_FAN_TOGGLES];

TouchIRControl controls[NUM_GENERAL_TOUCH] = {
    { T1, 'a', 'b', false, false, 1, 5 },
    { T2, 'c', 'd', false, false, 1, 0 },
    { T3, 'e', 'f', false, false, 0, 5 },
    { T4, 'g', 'h', false, false, 0, 1 }
    
};

