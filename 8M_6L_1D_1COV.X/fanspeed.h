#ifndef FANSPEED_H
#define FANSPEED_H

#include <stdint.h>

// Declarations only ? do not define globals here
extern uint8_t fan1, fan2, fan3;
extern unsigned int x1, x2;

// Function declaration
void fanscon(void);

#endif /* FANSPEED_H */
