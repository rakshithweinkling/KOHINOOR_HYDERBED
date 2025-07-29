#ifndef MODULE_CONFIG_FILE_H
#define MODULE_CONFIG_FILE_H

#include <stdbool.h>
#include "mcc_generated_files/mcc.h"
#include "globals.h"

// ------------------ Configuration Constants ------------------
#define NUM_GENERAL_TOUCH    1


// ------------------ External Variable Declarations ------------------

extern TouchIRControl controls[NUM_GENERAL_TOUCH];

#endif // MODULE_CONFIG_FILE_H
