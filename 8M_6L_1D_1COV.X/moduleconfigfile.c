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
    { T1, 'a', 'b', false, false, 1, 2 },
    { T3, 'c', 'd', false, false, 1, 5 },
    { T4, 'e', 'f', false, false, 1, 0 },
    { T5, 'g', 'h', false, false, 0, 5 },
    { T6, 'i', 'j', false, false, 0, 1 },
    { T7, 'k', 'l', false, false, 1, 6 },
    { T8, 'm', 'n', false, false, 1, 1 },
};

// ----------------------------- Fan Base Configuration -----------------------------
FanControl fans[2] = {
    { &fan1_state, &fan1, &ld1, &fn1, 'q', 'r', '0', 0, 7, 1, 7, 1, 3 },
    { &fan2_state, &fan2, &ld3, &fn2, 's', 't', '5', 0, 3, 1, 7, 1, 3 }
};

// ----------------------------- Touch Toggle Fan Controls -----------------------------
FanToggleControl fanToggles[NUM_FAN_TOGGLES] = {
    { T2, &f10, &f11, &fans[0] },
    { T10, &f20, &f21, &fans[1] }
};

// ----------------------------- Touch Toggle Fan Speed Controls -----------------------------
FanSpeedControl fanSpeedControls[NUM_FAN_SPEED_LEVELS * 2] = {
    { F15, '0', &fan1, &ld1, false },
    { F14, '1', &fan1, &ld1, false },
    { F13, '2', &fan1, &ld1, false },
    { F12, '3', &fan1, &ld1, false },
    { F11, '4', &fan1, &ld1, false },
    { F25, '5', &fan2, &ld3, false },
    { F24, '6', &fan2, &ld3, false },
    { F23, '7', &fan2, &ld3, false },
    { F22, '8', &fan2, &ld3, false },
    { F21, '9', &fan2, &ld3, false }
};

