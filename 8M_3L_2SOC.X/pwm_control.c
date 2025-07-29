#include <xc.h>
#include "pwm_control.h"
#define TMR2PRESCALE 4

unsigned int H = 0x05;
unsigned int L = 0x00;
PWM3_Initialize()
{
       RE4PPS=0X09;
       // TRISC=0X00;  
       // Set the PWM to the options selected in the PIC10 / PIC12 / PIC16 / PIC18 MCUs 
       // MODE PWM; EN enabled; FMT right_aligned; 
       CCP5CON = 0x9C;    
       // RH 0; 
       // CCPR1H = H;    
       // RL 93; 
       //CCPR1L =L;    
       // Selecting Timer 2
       CCPTMRS0=0X00;//CCPTMRS = 0x05;
       T2CON = 0x30;//0x34/0x30/with sync external then 0x34
       // T2CS FOSC/4; 
       T2CLKCON = 0x01;//0x03//0x01//internal is 0x03 extenal clos fosc/4 =0x01;
       // T2PSYNC Not Synchronized; T2MODE Software control; T2CKPOL Rising Edge; T2CKSYNC Not Synchronized; 
       T2HLT = 0x00;
       // T2RSEL T2CKIPPS pin; 
       T2RST = 0x00;
       // PR2 204; 
       T2PR = 0xCC;
       // TMR2 0; 
       T2TMR = 0x00;
       // Clearing IF flag.
       PIR5bits.TMR2IF = 0;
       T2CONbits.T2ON=1;
       // TRISC=0X00;
}
