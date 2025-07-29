#ifndef TOUCH_HANDLER_H
#define TOUCH_HANDLER_H

#include <stdint.h>
#include <stdbool.h>
#include "moduleconfigfile.h"  // For control structs and defines
#include "globals.h"
// Function prototypes for the handlers and utilities defined in touch_handler.c

/**
 * @brief Handles actions when a touch is held.
 * @param touch True if touch is currently pressed, false otherwise.
 */
void OnHold(bool touch);


/**
 * @brief Handles toggling fan ON/OFF for all fan toggle controls.
 */
void handleFanToggleControls(void);


/**
 * @brief Changes fan speed in a given direction if fan is ON.
 * @param fan Pointer to the FanControl.
 * @param direction +1 to increase speed, -1 to decrease speed.
 */


/**
 * @brief Handles fan speed button presses for all fan speed controls.
 */
void handleFanSpeedControl(void);

void syncFanToggleState(void);


void processToggle(TouchIRControl* ctrl, uint8_t index);



/**
 * @brief Handles general touch toggle controls and updates lights accordingly.
 */

void handleGeneralTouchControls(void);

void processFanToggle(FanToggleControl* ft);
void processFanSpeedControl(FanSpeedControl* fc, uint8_t index);
void processFanSpeedControlU(FanSpeedControl* fc, uint8_t index);



#endif // TOUCH_HANDLER_H
