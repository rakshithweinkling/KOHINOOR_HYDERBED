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
    { T1, 'a', 'b', false, false, 0, 4 },
    { T2, 'c', 'd', false, false, 1, 5 },
    { ALLOFF, 'e', 'f', false, false, 1, 4 },
    { T4, 'g', 'h', false, false, 1, 0 },
   
};

// ----------------------------- Fan Base Configuration -----------------------------
FanControl fans[2] = {
    { &fan1_state, &fan1, &ld1, &fn1, 'q', 'r', '0', 0, 7, 1, 7, 1, 3 },
    { &fan2_state, &fan2, &ld3, &fn2, 's', 't', '5', 0, 3, 1, 7, 1, 3 }
};

// ----------------------------- Touch Toggle Fan Controls -----------------------------
FanToggleControl fanToggles[NUM_FAN_TOGGLES] = {
    { T3, &f10, &f11, &fans[0] },
    { T6, &f20, &f21, &fans[1] }
};

// ----------------------------- Touch Toggle Fan Speed Controls -----------------------------
FanSpeedControl fanSpeedControls[NUM_FAN_SPEED_LEVELS * 2] = {
    { F15, '0', &fan1, &ld1, false },
    { F14, '1', &fan1, &ld1, false },
    { F13, '2', &fan1, &ld1, false },
    { F12, '3', &fan1, &ld1, false },
    { F11, '4', &fan1, &ld1, false },
    { F21, '5', &fan2, &ld3, false },
    { F22, '6', &fan2, &ld3, false },
    { F23, '7', &fan2, &ld3, false },
    { F24, '8', &fan2, &ld3, false },
    { F25, '9', &fan2, &ld3, false }
};

