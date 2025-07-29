#ifndef LOAD_HANDLER_H
#define LOAD_HANDLER_H

#include <stdint.h>
#include <stdbool.h>
#include "touch_handler.h"
#include "uart_handler.h"

// ----------------------------- Function Prototypes -----------------------------

/**
 * @brief Sets the light state for the specified touch ID.
 * @param touchID The touch input identifier.
 * @param state   true to turn on, false to turn off.
 */
void setLightState(uint8_t touchID, bool state);

/**
 * @brief Handles UART command for light control.
 * @param received The received UART character command.
 */
void uartLight(char received);

/**
 * @brief Updates the light output based on internal logic or state.
 * @param i Index or touch input reference.
 */
void updateLight(uint8_t i);

/**
 * @brief Handles toggle behavior between two fan controls.
 * @param fan       The selected fan to toggle.
 * @param otherFan  The other fan to manage exclusive toggling.
 */
void handleFanToggle(FanControl *fan);

/**
 * @brief Adjusts fan speed up or down.
 * @param fan       The fan control structure.
 * @param direction +1 to increase, -1 to decrease.
 */
void handleFanSpeedChange(FanControl *fan, int8_t direction);
void handleFanToggleU(FanControl *fan);

#endif // LOAD_HANDLER_H
