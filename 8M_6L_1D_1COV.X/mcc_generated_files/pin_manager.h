/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F65K40
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSELA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSELA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSELA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RA3 procedures
#define RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define RA3_GetValue()              PORTAbits.RA3
#define RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define RA3_SetPullup()             do { WPUAbits.WPUA3 = 1; } while(0)
#define RA3_ResetPullup()           do { WPUAbits.WPUA3 = 0; } while(0)
#define RA3_SetAnalogMode()         do { ANSELAbits.ANSELA3 = 1; } while(0)
#define RA3_SetDigitalMode()        do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set RA4 procedures
#define RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RA4_GetValue()              PORTAbits.RA4
#define RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define RA4_SetPullup()             do { WPUAbits.WPUA4 = 1; } while(0)
#define RA4_ResetPullup()           do { WPUAbits.WPUA4 = 0; } while(0)
#define RA4_SetAnalogMode()         do { ANSELAbits.ANSELA4 = 1; } while(0)
#define RA4_SetDigitalMode()        do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()              PORTAbits.RA5
#define RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()             do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()           do { WPUAbits.WPUA5 = 0; } while(0)
#define RA5_SetAnalogMode()         do { ANSELAbits.ANSELA5 = 1; } while(0)
#define RA5_SetDigitalMode()        do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RA6 procedures
#define RA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define RA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define RA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define RA6_GetValue()              PORTAbits.RA6
#define RA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define RA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define RA6_SetPullup()             do { WPUAbits.WPUA6 = 1; } while(0)
#define RA6_ResetPullup()           do { WPUAbits.WPUA6 = 0; } while(0)
#define RA6_SetAnalogMode()         do { ANSELAbits.ANSELA6 = 1; } while(0)
#define RA6_SetDigitalMode()        do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set RA7 procedures
#define RA7_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define RA7_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define RA7_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define RA7_GetValue()              PORTAbits.RA7
#define RA7_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define RA7_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define RA7_SetPullup()             do { WPUAbits.WPUA7 = 1; } while(0)
#define RA7_ResetPullup()           do { WPUAbits.WPUA7 = 0; } while(0)
#define RA7_SetAnalogMode()         do { ANSELAbits.ANSELA7 = 1; } while(0)
#define RA7_SetDigitalMode()        do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set ZC aliases
#define ZC_TRIS                 TRISBbits.TRISB0
#define ZC_LAT                  LATBbits.LATB0
#define ZC_PORT                 PORTBbits.RB0
#define ZC_WPU                  WPUBbits.WPUB0
#define ZC_OD                   ODCONBbits.ODCB0
#define ZC_ANS                  ANSELBbits.ANSELB0
#define ZC_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define ZC_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define ZC_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define ZC_GetValue()           PORTBbits.RB0
#define ZC_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define ZC_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define ZC_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define ZC_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define ZC_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define ZC_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define ZC_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define ZC_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set IR aliases
#define IR_TRIS                 TRISBbits.TRISB1
#define IR_LAT                  LATBbits.LATB1
#define IR_PORT                 PORTBbits.RB1
#define IR_WPU                  WPUBbits.WPUB1
#define IR_OD                   ODCONBbits.ODCB1
#define IR_ANS                  ANSELBbits.ANSELB1
#define IR_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IR_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IR_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IR_GetValue()           PORTBbits.RB1
#define IR_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IR_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IR_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define IR_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define IR_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define IR_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define IR_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define IR_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()              PORTBbits.RB3
#define RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()             do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()           do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode()         do { ANSELBbits.ANSELB3 = 1; } while(0)
#define RB3_SetDigitalMode()        do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSELB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)

// get/set RD0 procedures
#define RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define RD0_GetValue()              PORTDbits.RD0
#define RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define RD0_SetPullup()             do { WPUDbits.WPUD0 = 1; } while(0)
#define RD0_ResetPullup()           do { WPUDbits.WPUD0 = 0; } while(0)
#define RD0_SetAnalogMode()         do { ANSELDbits.ANSELD0 = 1; } while(0)
#define RD0_SetDigitalMode()        do { ANSELDbits.ANSELD0 = 0; } while(0)

// get/set L7 aliases
#define L7_TRIS                 TRISDbits.TRISD1
#define L7_LAT                  LATDbits.LATD1
#define L7_PORT                 PORTDbits.RD1
#define L7_WPU                  WPUDbits.WPUD1
#define L7_OD                   ODCONDbits.ODCD1
#define L7_ANS                  ANSELDbits.ANSELD1
#define L7_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define L7_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define L7_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define L7_GetValue()           PORTDbits.RD1
#define L7_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define L7_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define L7_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define L7_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define L7_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define L7_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define L7_SetAnalogMode()      do { ANSELDbits.ANSELD1 = 1; } while(0)
#define L7_SetDigitalMode()     do { ANSELDbits.ANSELD1 = 0; } while(0)

// get/set L6 aliases
#define L6_TRIS                 TRISDbits.TRISD2
#define L6_LAT                  LATDbits.LATD2
#define L6_PORT                 PORTDbits.RD2
#define L6_WPU                  WPUDbits.WPUD2
#define L6_OD                   ODCONDbits.ODCD2
#define L6_ANS                  ANSELDbits.ANSELD2
#define L6_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define L6_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define L6_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define L6_GetValue()           PORTDbits.RD2
#define L6_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define L6_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define L6_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define L6_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define L6_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define L6_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define L6_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define L6_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set L5 aliases
#define L5_TRIS                 TRISDbits.TRISD3
#define L5_LAT                  LATDbits.LATD3
#define L5_PORT                 PORTDbits.RD3
#define L5_WPU                  WPUDbits.WPUD3
#define L5_OD                   ODCONDbits.ODCD3
#define L5_ANS                  ANSELDbits.ANSELD3
#define L5_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define L5_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define L5_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define L5_GetValue()           PORTDbits.RD3
#define L5_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define L5_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define L5_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define L5_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define L5_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define L5_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define L5_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define L5_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set L4 aliases
#define L4_TRIS                 TRISDbits.TRISD4
#define L4_LAT                  LATDbits.LATD4
#define L4_PORT                 PORTDbits.RD4
#define L4_WPU                  WPUDbits.WPUD4
#define L4_OD                   ODCONDbits.ODCD4
#define L4_ANS                  ANSELDbits.ANSELD4
#define L4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define L4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define L4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define L4_GetValue()           PORTDbits.RD4
#define L4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define L4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define L4_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define L4_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define L4_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define L4_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define L4_SetAnalogMode()      do { ANSELDbits.ANSELD4 = 1; } while(0)
#define L4_SetDigitalMode()     do { ANSELDbits.ANSELD4 = 0; } while(0)

// get/set L3 aliases
#define L3_TRIS                 TRISDbits.TRISD5
#define L3_LAT                  LATDbits.LATD5
#define L3_PORT                 PORTDbits.RD5
#define L3_WPU                  WPUDbits.WPUD5
#define L3_OD                   ODCONDbits.ODCD5
#define L3_ANS                  ANSELDbits.ANSELD5
#define L3_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define L3_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define L3_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define L3_GetValue()           PORTDbits.RD5
#define L3_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define L3_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define L3_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define L3_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define L3_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define L3_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define L3_SetAnalogMode()      do { ANSELDbits.ANSELD5 = 1; } while(0)
#define L3_SetDigitalMode()     do { ANSELDbits.ANSELD5 = 0; } while(0)

// get/set L2 aliases
#define L2_TRIS                 TRISDbits.TRISD6
#define L2_LAT                  LATDbits.LATD6
#define L2_PORT                 PORTDbits.RD6
#define L2_WPU                  WPUDbits.WPUD6
#define L2_OD                   ODCONDbits.ODCD6
#define L2_ANS                  ANSELDbits.ANSELD6
#define L2_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define L2_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define L2_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define L2_GetValue()           PORTDbits.RD6
#define L2_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define L2_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define L2_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define L2_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define L2_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define L2_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define L2_SetAnalogMode()      do { ANSELDbits.ANSELD6 = 1; } while(0)
#define L2_SetDigitalMode()     do { ANSELDbits.ANSELD6 = 0; } while(0)

// get/set L1 aliases
#define L1_TRIS                 TRISDbits.TRISD7
#define L1_LAT                  LATDbits.LATD7
#define L1_PORT                 PORTDbits.RD7
#define L1_WPU                  WPUDbits.WPUD7
#define L1_OD                   ODCONDbits.ODCD7
#define L1_ANS                  ANSELDbits.ANSELD7
#define L1_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define L1_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define L1_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define L1_GetValue()           PORTDbits.RD7
#define L1_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define L1_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define L1_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define L1_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define L1_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define L1_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define L1_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define L1_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set RE3 procedures
#define RE3_SetHigh()            do { LATEbits.LATE3 = 1; } while(0)
#define RE3_SetLow()             do { LATEbits.LATE3 = 0; } while(0)
#define RE3_Toggle()             do { LATEbits.LATE3 = ~LATEbits.LATE3; } while(0)
#define RE3_GetValue()              PORTEbits.RE3
#define RE3_SetDigitalInput()    do { TRISEbits.TRISE3 = 1; } while(0)
#define RE3_SetDigitalOutput()   do { TRISEbits.TRISE3 = 0; } while(0)
#define RE3_SetPullup()             do { WPUEbits.WPUE3 = 1; } while(0)
#define RE3_ResetPullup()           do { WPUEbits.WPUE3 = 0; } while(0)
#define RE3_SetAnalogMode()         do { ANSELEbits.ANSELE3 = 1; } while(0)
#define RE3_SetDigitalMode()        do { ANSELEbits.ANSELE3 = 0; } while(0)

// get/set PWM3 aliases
#define PWM3_TRIS                 TRISEbits.TRISE4
#define PWM3_LAT                  LATEbits.LATE4
#define PWM3_PORT                 PORTEbits.RE4
#define PWM3_WPU                  WPUEbits.WPUE4
#define PWM3_OD                   ODCONEbits.ODCE4
#define PWM3_ANS                  ANSELEbits.ANSELE4
#define PWM3_SetHigh()            do { LATEbits.LATE4 = 1; } while(0)
#define PWM3_SetLow()             do { LATEbits.LATE4 = 0; } while(0)
#define PWM3_Toggle()             do { LATEbits.LATE4 = ~LATEbits.LATE4; } while(0)
#define PWM3_GetValue()           PORTEbits.RE4
#define PWM3_SetDigitalInput()    do { TRISEbits.TRISE4 = 1; } while(0)
#define PWM3_SetDigitalOutput()   do { TRISEbits.TRISE4 = 0; } while(0)
#define PWM3_SetPullup()          do { WPUEbits.WPUE4 = 1; } while(0)
#define PWM3_ResetPullup()        do { WPUEbits.WPUE4 = 0; } while(0)
#define PWM3_SetPushPull()        do { ODCONEbits.ODCE4 = 0; } while(0)
#define PWM3_SetOpenDrain()       do { ODCONEbits.ODCE4 = 1; } while(0)
#define PWM3_SetAnalogMode()      do { ANSELEbits.ANSELE4 = 1; } while(0)
#define PWM3_SetDigitalMode()     do { ANSELEbits.ANSELE4 = 0; } while(0)

// get/set RE5 procedures
#define RE5_SetHigh()            do { LATEbits.LATE5 = 1; } while(0)
#define RE5_SetLow()             do { LATEbits.LATE5 = 0; } while(0)
#define RE5_Toggle()             do { LATEbits.LATE5 = ~LATEbits.LATE5; } while(0)
#define RE5_GetValue()              PORTEbits.RE5
#define RE5_SetDigitalInput()    do { TRISEbits.TRISE5 = 1; } while(0)
#define RE5_SetDigitalOutput()   do { TRISEbits.TRISE5 = 0; } while(0)
#define RE5_SetPullup()             do { WPUEbits.WPUE5 = 1; } while(0)
#define RE5_ResetPullup()           do { WPUEbits.WPUE5 = 0; } while(0)
#define RE5_SetAnalogMode()         do { ANSELEbits.ANSELE5 = 1; } while(0)
#define RE5_SetDigitalMode()        do { ANSELEbits.ANSELE5 = 0; } while(0)

// get/set RE6 procedures
#define RE6_SetHigh()            do { LATEbits.LATE6 = 1; } while(0)
#define RE6_SetLow()             do { LATEbits.LATE6 = 0; } while(0)
#define RE6_Toggle()             do { LATEbits.LATE6 = ~LATEbits.LATE6; } while(0)
#define RE6_GetValue()              PORTEbits.RE6
#define RE6_SetDigitalInput()    do { TRISEbits.TRISE6 = 1; } while(0)
#define RE6_SetDigitalOutput()   do { TRISEbits.TRISE6 = 0; } while(0)
#define RE6_SetPullup()             do { WPUEbits.WPUE6 = 1; } while(0)
#define RE6_ResetPullup()           do { WPUEbits.WPUE6 = 0; } while(0)
#define RE6_SetAnalogMode()         do { ANSELEbits.ANSELE6 = 1; } while(0)
#define RE6_SetDigitalMode()        do { ANSELEbits.ANSELE6 = 0; } while(0)

// get/set RE7 procedures
#define RE7_SetHigh()            do { LATEbits.LATE7 = 1; } while(0)
#define RE7_SetLow()             do { LATEbits.LATE7 = 0; } while(0)
#define RE7_Toggle()             do { LATEbits.LATE7 = ~LATEbits.LATE7; } while(0)
#define RE7_GetValue()              PORTEbits.RE7
#define RE7_SetDigitalInput()    do { TRISEbits.TRISE7 = 1; } while(0)
#define RE7_SetDigitalOutput()   do { TRISEbits.TRISE7 = 0; } while(0)
#define RE7_SetPullup()             do { WPUEbits.WPUE7 = 1; } while(0)
#define RE7_ResetPullup()           do { WPUEbits.WPUE7 = 0; } while(0)
#define RE7_SetAnalogMode()         do { ANSELEbits.ANSELE7 = 1; } while(0)
#define RE7_SetDigitalMode()        do { ANSELEbits.ANSELE7 = 0; } while(0)

// get/set RF2 procedures
#define RF2_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define RF2_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define RF2_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define RF2_GetValue()              PORTFbits.RF2
#define RF2_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define RF2_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define RF2_SetPullup()             do { WPUFbits.WPUF2 = 1; } while(0)
#define RF2_ResetPullup()           do { WPUFbits.WPUF2 = 0; } while(0)
#define RF2_SetAnalogMode()         do { ANSELFbits.ANSELF2 = 1; } while(0)
#define RF2_SetDigitalMode()        do { ANSELFbits.ANSELF2 = 0; } while(0)

// get/set RF4 procedures
#define RF4_SetHigh()            do { LATFbits.LATF4 = 1; } while(0)
#define RF4_SetLow()             do { LATFbits.LATF4 = 0; } while(0)
#define RF4_Toggle()             do { LATFbits.LATF4 = ~LATFbits.LATF4; } while(0)
#define RF4_GetValue()              PORTFbits.RF4
#define RF4_SetDigitalInput()    do { TRISFbits.TRISF4 = 1; } while(0)
#define RF4_SetDigitalOutput()   do { TRISFbits.TRISF4 = 0; } while(0)
#define RF4_SetPullup()             do { WPUFbits.WPUF4 = 1; } while(0)
#define RF4_ResetPullup()           do { WPUFbits.WPUF4 = 0; } while(0)
#define RF4_SetAnalogMode()         do { ANSELFbits.ANSELF4 = 1; } while(0)
#define RF4_SetDigitalMode()        do { ANSELFbits.ANSELF4 = 0; } while(0)

// get/set RF6 procedures
#define RF6_SetHigh()            do { LATFbits.LATF6 = 1; } while(0)
#define RF6_SetLow()             do { LATFbits.LATF6 = 0; } while(0)
#define RF6_Toggle()             do { LATFbits.LATF6 = ~LATFbits.LATF6; } while(0)
#define RF6_GetValue()              PORTFbits.RF6
#define RF6_SetDigitalInput()    do { TRISFbits.TRISF6 = 1; } while(0)
#define RF6_SetDigitalOutput()   do { TRISFbits.TRISF6 = 0; } while(0)
#define RF6_SetPullup()             do { WPUFbits.WPUF6 = 1; } while(0)
#define RF6_ResetPullup()           do { WPUFbits.WPUF6 = 0; } while(0)
#define RF6_SetAnalogMode()         do { ANSELFbits.ANSELF6 = 1; } while(0)
#define RF6_SetDigitalMode()        do { ANSELFbits.ANSELF6 = 0; } while(0)

// get/set RG1 procedures
#define RG1_SetHigh()            do { LATGbits.LATG1 = 1; } while(0)
#define RG1_SetLow()             do { LATGbits.LATG1 = 0; } while(0)
#define RG1_Toggle()             do { LATGbits.LATG1 = ~LATGbits.LATG1; } while(0)
#define RG1_GetValue()              PORTGbits.RG1
#define RG1_SetDigitalInput()    do { TRISGbits.TRISG1 = 1; } while(0)
#define RG1_SetDigitalOutput()   do { TRISGbits.TRISG1 = 0; } while(0)
#define RG1_SetPullup()             do { WPUGbits.WPUG1 = 1; } while(0)
#define RG1_ResetPullup()           do { WPUGbits.WPUG1 = 0; } while(0)
#define RG1_SetAnalogMode()         do { ANSELGbits.ANSELG1 = 1; } while(0)
#define RG1_SetDigitalMode()        do { ANSELGbits.ANSELG1 = 0; } while(0)

// get/set PWM2 aliases
#define PWM2_TRIS                 TRISGbits.TRISG3
#define PWM2_LAT                  LATGbits.LATG3
#define PWM2_PORT                 PORTGbits.RG3
#define PWM2_WPU                  WPUGbits.WPUG3
#define PWM2_OD                   ODCONGbits.ODCG3
#define PWM2_ANS                  ANSELGbits.ANSELG3
#define PWM2_SetHigh()            do { LATGbits.LATG3 = 1; } while(0)
#define PWM2_SetLow()             do { LATGbits.LATG3 = 0; } while(0)
#define PWM2_Toggle()             do { LATGbits.LATG3 = ~LATGbits.LATG3; } while(0)
#define PWM2_GetValue()           PORTGbits.RG3
#define PWM2_SetDigitalInput()    do { TRISGbits.TRISG3 = 1; } while(0)
#define PWM2_SetDigitalOutput()   do { TRISGbits.TRISG3 = 0; } while(0)
#define PWM2_SetPullup()          do { WPUGbits.WPUG3 = 1; } while(0)
#define PWM2_ResetPullup()        do { WPUGbits.WPUG3 = 0; } while(0)
#define PWM2_SetPushPull()        do { ODCONGbits.ODCG3 = 0; } while(0)
#define PWM2_SetOpenDrain()       do { ODCONGbits.ODCG3 = 1; } while(0)
#define PWM2_SetAnalogMode()      do { ANSELGbits.ANSELG3 = 1; } while(0)
#define PWM2_SetDigitalMode()     do { ANSELGbits.ANSELG3 = 0; } while(0)

// get/set PWM1 aliases
#define PWM1_TRIS                 TRISGbits.TRISG4
#define PWM1_LAT                  LATGbits.LATG4
#define PWM1_PORT                 PORTGbits.RG4
#define PWM1_WPU                  WPUGbits.WPUG4
#define PWM1_OD                   ODCONGbits.ODCG4
#define PWM1_ANS                  ANSELGbits.ANSELG4
#define PWM1_SetHigh()            do { LATGbits.LATG4 = 1; } while(0)
#define PWM1_SetLow()             do { LATGbits.LATG4 = 0; } while(0)
#define PWM1_Toggle()             do { LATGbits.LATG4 = ~LATGbits.LATG4; } while(0)
#define PWM1_GetValue()           PORTGbits.RG4
#define PWM1_SetDigitalInput()    do { TRISGbits.TRISG4 = 1; } while(0)
#define PWM1_SetDigitalOutput()   do { TRISGbits.TRISG4 = 0; } while(0)
#define PWM1_SetPullup()          do { WPUGbits.WPUG4 = 1; } while(0)
#define PWM1_ResetPullup()        do { WPUGbits.WPUG4 = 0; } while(0)
#define PWM1_SetPushPull()        do { ODCONGbits.ODCG4 = 0; } while(0)
#define PWM1_SetOpenDrain()       do { ODCONGbits.ODCG4 = 1; } while(0)
#define PWM1_SetAnalogMode()      do { ANSELGbits.ANSELG4 = 1; } while(0)
#define PWM1_SetDigitalMode()     do { ANSELGbits.ANSELG4 = 0; } while(0)

// get/set RG6 procedures
#define RG6_SetHigh()            do { LATGbits.LATG6 = 1; } while(0)
#define RG6_SetLow()             do { LATGbits.LATG6 = 0; } while(0)
#define RG6_Toggle()             do { LATGbits.LATG6 = ~LATGbits.LATG6; } while(0)
#define RG6_GetValue()              PORTGbits.RG6
#define RG6_SetDigitalInput()    do { TRISGbits.TRISG6 = 1; } while(0)
#define RG6_SetDigitalOutput()   do { TRISGbits.TRISG6 = 0; } while(0)
#define RG6_SetPullup()             do { WPUGbits.WPUG6 = 1; } while(0)
#define RG6_ResetPullup()           do { WPUGbits.WPUG6 = 0; } while(0)
#define RG6_SetAnalogMode()         do { ANSELGbits.ANSELG6 = 1; } while(0)
#define RG6_SetDigitalMode()        do { ANSELGbits.ANSELG6 = 0; } while(0)

// get/set L8 aliases
#define L8_TRIS                 TRISHbits.TRISH3
#define L8_LAT                  LATHbits.LATH3
#define L8_PORT                 PORTHbits.RH3
#define L8_WPU                  WPUHbits.WPUH3
#define L8_OD                   ODCONHbits.ODCH3
#define L8_SetHigh()            do { LATHbits.LATH3 = 1; } while(0)
#define L8_SetLow()             do { LATHbits.LATH3 = 0; } while(0)
#define L8_Toggle()             do { LATHbits.LATH3 = ~LATHbits.LATH3; } while(0)
#define L8_GetValue()           PORTHbits.RH3
#define L8_SetDigitalInput()    do { TRISHbits.TRISH3 = 1; } while(0)
#define L8_SetDigitalOutput()   do { TRISHbits.TRISH3 = 0; } while(0)
#define L8_SetPullup()          do { WPUHbits.WPUH3 = 1; } while(0)
#define L8_ResetPullup()        do { WPUHbits.WPUH3 = 0; } while(0)
#define L8_SetPushPull()        do { ODCONHbits.ODCH3 = 0; } while(0)
#define L8_SetOpenDrain()       do { ODCONHbits.ODCH3 = 1; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/