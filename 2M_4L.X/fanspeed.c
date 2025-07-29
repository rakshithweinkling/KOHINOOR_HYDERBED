
#include "fanspeed.h"
#include "mcc_generated_files/mcc.h"

// Variable definitions (only once in the project)
uint8_t fan1 = 0, fan2 = 0, fan3 = 0;
unsigned int x1 = 0, x2 = 0;

// Define a structure for delay values
typedef struct {
    uint8_t high;
    uint8_t low;
} TimerValue;

// Delay table for speed levels 0?5
const TimerValue speedDelays[] = {
    {0x00, 0x00}, // Level 0 (OFF)
    {0x82, 0xDC}, // Level 1 (~6ms)
    {0x8C, 0xA0}, // Level 2 (~5ms)
    {0xA2, 0x40}, // Level 3 (~4ms)
    {0xD8, 0xF0}, // Level 4 (~3ms)
   
};

void fanscon(void) {
    // Bounds checking
     l1 = (ld1 <= 5) ? ld1 : 0;
     l2 = (ld2 <= 5) ? ld2 : 0;

    // Apply delay for Fan1
    temp1h = speedDelays[l1].high;
    temp1l = speedDelays[l1].low;

    // Apply delay for Fan2
    temp2h = speedDelays[l2].high;
    temp2l = speedDelays[l2].low;
    
    if(ld1 == 5)
    {
      //  PWM1_SetHigh();
    }
    if(ld2 == 5)
    {
      //  PWM2_SetHigh();
    }
    
    
    if (ld3 == 0)
    {
        CCPR5H = 0X00; 
        CCPR5L = 0X00;
    }
    if (ld3 == 1)
    {
        CCPR5H = 0X33;
        CCPR2L = 0X33;
    }          
    if (ld3 == 2) 
    {
        CCPR5H = 0X4C;
        CCPR2L = 0X20;
    }    
    if (ld3 == 3) 
    {
        CCPR5H = 0X61;
        CCPR2L = 0XA8;
    }
    if (ld3 == 4) {
        CCPR5H = 0X88;
        CCPR2L = 0XB8;
    }    
    if (ld3 == 5)//100%
    {
        CCPR5H = 0XFF;
        CCPR2L = 0XFF;
    }   
        
}
