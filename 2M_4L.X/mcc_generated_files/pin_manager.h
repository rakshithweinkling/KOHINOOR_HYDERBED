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
        Device            :  PIC16F18855
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
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RA3 procedures
#define RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define RA3_GetValue()              PORTAbits.RA3
#define RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define RA3_SetPullup()             do { WPUAbits.WPUA3 = 1; } while(0)
#define RA3_ResetPullup()           do { WPUAbits.WPUA3 = 0; } while(0)
#define RA3_SetAnalogMode()         do { ANSELAbits.ANSA3 = 1; } while(0)
#define RA3_SetDigitalMode()        do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set RA4 procedures
#define RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RA4_GetValue()              PORTAbits.RA4
#define RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define RA4_SetPullup()             do { WPUAbits.WPUA4 = 1; } while(0)
#define RA4_ResetPullup()           do { WPUAbits.WPUA4 = 0; } while(0)
#define RA4_SetAnalogMode()         do { ANSELAbits.ANSA4 = 1; } while(0)
#define RA4_SetDigitalMode()        do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()              PORTAbits.RA5
#define RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()             do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()           do { WPUAbits.WPUA5 = 0; } while(0)
#define RA5_SetAnalogMode()         do { ANSELAbits.ANSA5 = 1; } while(0)
#define RA5_SetDigitalMode()        do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set IR_OUT aliases
#define IR_OUT_TRIS                 TRISBbits.TRISB0
#define IR_OUT_LAT                  LATBbits.LATB0
#define IR_OUT_PORT                 PORTBbits.RB0
#define IR_OUT_WPU                  WPUBbits.WPUB0
#define IR_OUT_OD                   ODCONBbits.ODCB0
#define IR_OUT_ANS                  ANSELBbits.ANSB0
#define IR_OUT_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define IR_OUT_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define IR_OUT_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define IR_OUT_GetValue()           PORTBbits.RB0
#define IR_OUT_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define IR_OUT_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define IR_OUT_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define IR_OUT_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define IR_OUT_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define IR_OUT_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define IR_OUT_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define IR_OUT_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set L1 aliases
#define L1_TRIS                 TRISCbits.TRISC0
#define L1_LAT                  LATCbits.LATC0
#define L1_PORT                 PORTCbits.RC0
#define L1_WPU                  WPUCbits.WPUC0
#define L1_OD                   ODCONCbits.ODCC0
#define L1_ANS                  ANSELCbits.ANSC0
#define L1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define L1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define L1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define L1_GetValue()           PORTCbits.RC0
#define L1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define L1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define L1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define L1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define L1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define L1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define L1_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define L1_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set L2 aliases
#define L2_TRIS                 TRISCbits.TRISC1
#define L2_LAT                  LATCbits.LATC1
#define L2_PORT                 PORTCbits.RC1
#define L2_WPU                  WPUCbits.WPUC1
#define L2_OD                   ODCONCbits.ODCC1
#define L2_ANS                  ANSELCbits.ANSC1
#define L2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define L2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define L2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define L2_GetValue()           PORTCbits.RC1
#define L2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define L2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define L2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define L2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define L2_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define L2_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define L2_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define L2_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set L3 aliases
#define L3_TRIS                 TRISCbits.TRISC2
#define L3_LAT                  LATCbits.LATC2
#define L3_PORT                 PORTCbits.RC2
#define L3_WPU                  WPUCbits.WPUC2
#define L3_OD                   ODCONCbits.ODCC2
#define L3_ANS                  ANSELCbits.ANSC2
#define L3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define L3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define L3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define L3_GetValue()           PORTCbits.RC2
#define L3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define L3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define L3_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define L3_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define L3_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define L3_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define L3_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define L3_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set L4 aliases
#define L4_TRIS                 TRISCbits.TRISC3
#define L4_LAT                  LATCbits.LATC3
#define L4_PORT                 PORTCbits.RC3
#define L4_WPU                  WPUCbits.WPUC3
#define L4_OD                   ODCONCbits.ODCC3
#define L4_ANS                  ANSELCbits.ANSC3
#define L4_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define L4_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define L4_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define L4_GetValue()           PORTCbits.RC3
#define L4_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define L4_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define L4_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define L4_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define L4_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define L4_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define L4_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define L4_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set IO_RC7 aliases
#define IO_RC7_TRIS                 TRISCbits.TRISC7
#define IO_RC7_LAT                  LATCbits.LATC7
#define IO_RC7_PORT                 PORTCbits.RC7
#define IO_RC7_WPU                  WPUCbits.WPUC7
#define IO_RC7_OD                   ODCONCbits.ODCC7
#define IO_RC7_ANS                  ANSELCbits.ANSC7
#define IO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RC7_GetValue()           PORTCbits.RC7
#define IO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_RC7_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define IO_RC7_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define IO_RC7_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define IO_RC7_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define IO_RC7_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define IO_RC7_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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