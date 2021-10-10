/**
  
  @Generated PIC16F877A
  
  @Company Alfa Controls
  
  @File Name:
    pinManager.h

	@Auto generated file

  @Author
  Cesar Daltoe Berci
  October, 2021
  
  @Summary
  This is the pin configuration header, generated using a 
  parametric tool developed by Alfa Controls  
  
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>
#include <stdbool.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set O1 aliases
#define O1_TRIS                 TRISDbits.TRISD1
#define O1_PORT                 PORTDbits.RD1
#define O1_SetHigh()            do { PORTDbits.RD1 = 1; } while(0)
#define O1_SetLow()             do { PORTDbits.RD1 = 0; } while(0)
#define O1_Toggle()             do { PORTDbits.RD1 = ~PORTDbits.RD1; } while(0)
#define O1_GetValue()           PORTDbits.RD1
#define O1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define O1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
//implementations
void O1Set();
void O1Clear();
void O1Toogle();
bool O1Value();

// get/set O2 aliases
#define O2_TRIS                 TRISDbits.TRISD0
#define O2_PORT                 PORTDbits.RD0
#define O2_SetHigh()            do { PORTDbits.RD0 = 1; } while(0)
#define O2_SetLow()             do { PORTDbits.RD0 = 0; } while(0)
#define O2_Toggle()             do { PORTDbits.RD0 = ~PORTDbits.RD0; } while(0)
#define O2_GetValue()           PORTDbits.RD0
#define O2_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define O2_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
//implementations
void O2Set();
void O2Clear();
void O2Toogle();
bool O2Value();

// get/set O3 aliases
#define O3_TRIS                 TRISCbits.TRISC3
#define O3_PORT                 PORTCbits.RC3
#define O3_SetHigh()            do { PORTCbits.RC3 = 1; } while(0)
#define O3_SetLow()             do { PORTCbits.RC3 = 0; } while(0)
#define O3_Toggle()             do { PORTCbits.RC3 = ~PORTCbits.RC3; } while(0)
#define O3_GetValue()           PORTCbits.RC3
#define O3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define O3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
//implementations
void O3Set();
void O3Clear();
void O3Toogle();
bool O3Value();

// get/set O4 aliases
#define O4_TRIS                 TRISCbits.TRISC2
#define O4_PORT                 PORTCbits.RC2
#define O4_SetHigh()            do { PORTCbits.RC2 = 1; } while(0)
#define O4_SetLow()             do { PORTCbits.RC2 = 0; } while(0)
#define O4_Toggle()             do { PORTCbits.RC2 = ~PORTCbits.RC2; } while(0)
#define O4_GetValue()           PORTCbits.RC2
#define O4_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define O4_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
//implementations
void O4Set();
void O4Clear();
void O4Toogle();
bool O4Value();

// get/set O5 aliases
#define O5_TRIS                 TRISCbits.TRISC1
#define O5_PORT                 PORTCbits.RC1
#define O5_SetHigh()            do { PORTCbits.RC1 = 1; } while(0)
#define O5_SetLow()             do { PORTCbits.RC1 = 0; } while(0)
#define O5_Toggle()             do { PORTCbits.RC1 = ~PORTCbits.RC1; } while(0)
#define O5_GetValue()           PORTCbits.RC1
#define O5_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define O5_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
//implementations
void O5Set();
void O5Clear();
void O5Toogle();
bool O5Value();

// get/set O6 aliases
#define O6_TRIS                 TRISEbits.TRISE2
#define O6_PORT                 PORTEbits.RE2
#define O6_SetHigh()            do { PORTEbits.RE2 = 1; } while(0)
#define O6_SetLow()             do { PORTEbits.RE2 = 0; } while(0)
#define O6_Toggle()             do { PORTEbits.RE2 = ~PORTEbits.RE2; } while(0)
#define O6_GetValue()           PORTEbits.RE2
#define O6_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define O6_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
//implementations
void O6Set();
void O6Clear();
void O6Toogle();
bool O6Value();

// get/set O7 aliases
#define O7_TRIS                 TRISEbits.TRISE1
#define O7_PORT                 PORTEbits.RE1
#define O7_SetHigh()            do { PORTEbits.RE1 = 1; } while(0)
#define O7_SetLow()             do { PORTEbits.RE1 = 0; } while(0)
#define O7_Toggle()             do { PORTEbits.RE1 = ~PORTEbits.RE1; } while(0)
#define O7_GetValue()           PORTEbits.RE1
#define O7_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define O7_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
//implementations
void O7Set();
void O7Clear();
void O7Toogle();
bool O7Value();

// get/set O8 aliases
#define O8_TRIS                 TRISEbits.TRISE0
#define O8_PORT                 PORTEbits.RE0
#define O8_SetHigh()            do { PORTEbits.RE0 = 1; } while(0)
#define O8_SetLow()             do { PORTEbits.RE0 = 0; } while(0)
#define O8_Toggle()             do { PORTEbits.RE0 = ~PORTEbits.RE0; } while(0)
#define O8_GetValue()           PORTEbits.RE0
#define O8_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define O8_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
//implementations
void O8Set();
void O8Clear();
void O8Toogle();
bool O8Value();

// get/set O9 aliases
#define O9_TRIS                 TRISAbits.TRISA5
#define O9_PORT                 PORTAbits.RA5
#define O9_SetHigh()            do { PORTAbits.RA5 = 1; } while(0)
#define O9_SetLow()             do { PORTAbits.RA5 = 0; } while(0)
#define O9_Toggle()             do { PORTAbits.RA5 = ~PORTAbits.RA5; } while(0)
#define O9_GetValue()           PORTAbits.RA5
#define O9_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define O9_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
//implementations
void O9Set();
void O9Clear();
void O9Toogle();
bool O9Value();

// get/set O10 aliases
#define O10_TRIS                 TRISAbits.TRISA3
#define O10_PORT                 PORTAbits.RA3
#define O10_SetHigh()            do { PORTAbits.RA3 = 1; } while(0)
#define O10_SetLow()             do { PORTAbits.RA3 = 0; } while(0)
#define O10_Toggle()             do { PORTAbits.RA3 = ~PORTAbits.RA3; } while(0)
#define O10_GetValue()           PORTAbits.RA3
#define O10_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define O10_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
//implementations
void O10Set();
void O10Clear();
void O10Toogle();
bool O10Value();

// get/set O11 aliases
#define O11_TRIS                 TRISAbits.TRISA2
#define O11_PORT                 PORTAbits.RA2
#define O11_SetHigh()            do { PORTAbits.RA2 = 1; } while(0)
#define O11_SetLow()             do { PORTAbits.RA2 = 0; } while(0)
#define O11_Toggle()             do { PORTAbits.RA2 = ~PORTAbits.RA2; } while(0)
#define O11_GetValue()           PORTAbits.RA2
#define O11_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define O11_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
//implementations
void O11Set();
void O11Clear();
void O11Toogle();
bool O11Value();

// get/set O12 aliases
#define O12_TRIS                 TRISAbits.TRISA1
#define O12_PORT                 PORTAbits.RA1
#define O12_SetHigh()            do { PORTAbits.RA1 = 1; } while(0)
#define O12_SetLow()             do { PORTAbits.RA1 = 0; } while(0)
#define O12_Toggle()             do { PORTAbits.RA1 = ~PORTAbits.RA1; } while(0)
#define O12_GetValue()           PORTAbits.RA1
#define O12_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define O12_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
//implementations
void O12Set();
void O12Clear();
void O12Toogle();
bool O12Value();

// get/set O13 aliases
#define O13_TRIS                 TRISAbits.TRISA0
#define O13_PORT                 PORTAbits.RA0
#define O13_SetHigh()            do { PORTAbits.RA0 = 1; } while(0)
#define O13_SetLow()             do { PORTAbits.RA0 = 0; } while(0)
#define O13_Toggle()             do { PORTAbits.RA0 = ~PORTAbits.RA0; } while(0)
#define O13_GetValue()           PORTAbits.RA0
#define O13_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define O13_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
//implementations
void O13Set();
void O13Clear();
void O13Toogle();
bool O13Value();

// get/set I1 aliases
#define I1_TRIS                 TRISDbits.TRISD2
#define I1_PORT                 PORTDbits.RD2
#define I1_SetHigh()            do { PORTDbits.RD2 = 1; } while(0)
#define I1_SetLow()             do { PORTDbits.RD2 = 0; } while(0)
#define I1_Toggle()             do { PORTDbits.RD2 = ~PORTDbits.RD2; } while(0)
#define I1_GetValue()           PORTDbits.RD2
#define I1_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define I1_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
//implementations
void I1Set();
void I1Clear();
void I1Toogle();
bool I1Value();

// get/set I2 aliases
#define I2_TRIS                 TRISDbits.TRISD3
#define I2_PORT                 PORTDbits.RD3
#define I2_SetHigh()            do { PORTDbits.RD3 = 1; } while(0)
#define I2_SetLow()             do { PORTDbits.RD3 = 0; } while(0)
#define I2_Toggle()             do { PORTDbits.RD3 = ~PORTDbits.RD3; } while(0)
#define I2_GetValue()           PORTDbits.RD3
#define I2_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define I2_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
//implementations
void I2Set();
void I2Clear();
void I2Toogle();
bool I2Value();

// get/set I3 aliases
#define I3_TRIS                 TRISCbits.TRISC4
#define I3_PORT                 PORTCbits.RC4
#define I3_SetHigh()            do { PORTCbits.RC4 = 1; } while(0)
#define I3_SetLow()             do { PORTCbits.RC4 = 0; } while(0)
#define I3_Toggle()             do { PORTCbits.RC4 = ~PORTCbits.RC4; } while(0)
#define I3_GetValue()           PORTCbits.RC4
#define I3_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define I3_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
//implementations
void I3Set();
void I3Clear();
void I3Toogle();
bool I3Value();

// get/set I4 aliases
#define I4_TRIS                 TRISCbits.TRISC5
#define I4_PORT                 PORTCbits.RC5
#define I4_SetHigh()            do { PORTCbits.RC5 = 1; } while(0)
#define I4_SetLow()             do { PORTCbits.RC5 = 0; } while(0)
#define I4_Toggle()             do { PORTCbits.RC5 = ~PORTCbits.RC5; } while(0)
#define I4_GetValue()           PORTCbits.RC5
#define I4_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define I4_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
//implementations
void I4Set();
void I4Clear();
void I4Toogle();
bool I4Value();

// get/set I5 aliases
#define I5_TRIS                 TRISCbits.TRISC6
#define I5_PORT                 PORTCbits.RC6
#define I5_SetHigh()            do { PORTCbits.RC6 = 1; } while(0)
#define I5_SetLow()             do { PORTCbits.RC6 = 0; } while(0)
#define I5_Toggle()             do { PORTCbits.RC6 = ~PORTCbits.RC6; } while(0)
#define I5_GetValue()           PORTCbits.RC6
#define I5_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define I5_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
//implementations
void I5Set();
void I5Clear();
void I5Toogle();
bool I5Value();

// get/set I6 aliases
#define I6_TRIS                 TRISCbits.TRISC7
#define I6_PORT                 PORTCbits.RC7
#define I6_SetHigh()            do { PORTCbits.RC7 = 1; } while(0)
#define I6_SetLow()             do { PORTCbits.RC7 = 0; } while(0)
#define I6_Toggle()             do { PORTCbits.RC7 = ~PORTCbits.RC7; } while(0)
#define I6_GetValue()           PORTCbits.RC7
#define I6_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define I6_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
//implementations
void I6Set();
void I6Clear();
void I6Toogle();
bool I6Value();

// get/set I7 aliases
#define I7_TRIS                 TRISDbits.TRISD4
#define I7_PORT                 PORTDbits.RD4
#define I7_SetHigh()            do { PORTDbits.RD4 = 1; } while(0)
#define I7_SetLow()             do { PORTDbits.RD4 = 0; } while(0)
#define I7_Toggle()             do { PORTDbits.RD4 = ~PORTDbits.RD4; } while(0)
#define I7_GetValue()           PORTDbits.RD4
#define I7_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define I7_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
//implementations
void I7Set();
void I7Clear();
void I7Toogle();
bool I7Value();

// get/set I8 aliases
#define I8_TRIS                 TRISDbits.TRISD5
#define I8_PORT                 PORTDbits.RD5
#define I8_SetHigh()            do { PORTDbits.RD5 = 1; } while(0)
#define I8_SetLow()             do { PORTDbits.RD5 = 0; } while(0)
#define I8_Toggle()             do { PORTDbits.RD5 = ~PORTDbits.RD5; } while(0)
#define I8_GetValue()           PORTDbits.RD5
#define I8_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define I8_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
//implementations
void I8Set();
void I8Clear();
void I8Toogle();
bool I8Value();

// get/set I9 aliases
#define I9_TRIS                 TRISDbits.TRISD6
#define I9_PORT                 PORTDbits.RD6
#define I9_SetHigh()            do { PORTDbits.RD6 = 1; } while(0)
#define I9_SetLow()             do { PORTDbits.RD6 = 0; } while(0)
#define I9_Toggle()             do { PORTDbits.RD6 = ~PORTDbits.RD6; } while(0)
#define I9_GetValue()           PORTDbits.RD6
#define I9_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define I9_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
//implementations
void I9Set();
void I9Clear();
void I9Toogle();
bool I9Value();

// get/set I10 aliases
#define I10_TRIS                 TRISDbits.TRISD7
#define I10_PORT                 PORTDbits.RD7
#define I10_SetHigh()            do { PORTDbits.RD7 = 1; } while(0)
#define I10_SetLow()             do { PORTDbits.RD7 = 0; } while(0)
#define I10_Toggle()             do { PORTDbits.RD7 = ~PORTDbits.RD7; } while(0)
#define I10_GetValue()           PORTDbits.RD7
#define I10_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define I10_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
//implementations
void I10Set();
void I10Clear();
void I10Toogle();
bool I10Value();

// get/set I11 aliases
#define I11_TRIS                 TRISBbits.TRISB0
#define I11_PORT                 PORTBbits.RB0
#define I11_SetHigh()            do { PORTBbits.RB0 = 1; } while(0)
#define I11_SetLow()             do { PORTBbits.RB0 = 0; } while(0)
#define I11_Toggle()             do { PORTBbits.RB0 = ~PORTBbits.RB0; } while(0)
#define I11_GetValue()           PORTBbits.RB0
#define I11_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define I11_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
//implementations
void I11Set();
void I11Clear();
void I11Toogle();
bool I11Value();

// get/set I12 aliases
#define I12_TRIS                 TRISBbits.TRISB1
#define I12_PORT                 PORTBbits.RB1
#define I12_SetHigh()            do { PORTBbits.RB1 = 1; } while(0)
#define I12_SetLow()             do { PORTBbits.RB1 = 0; } while(0)
#define I12_Toggle()             do { PORTBbits.RB1 = ~PORTBbits.RB1; } while(0)
#define I12_GetValue()           PORTBbits.RB1
#define I12_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define I12_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
//implementations
void I12Set();
void I12Clear();
void I12Toogle();
bool I12Value();

// get/set I13 aliases
#define I13_TRIS                 TRISBbits.TRISB2
#define I13_PORT                 PORTBbits.RB2
#define I13_SetHigh()            do { PORTBbits.RB2 = 1; } while(0)
#define I13_SetLow()             do { PORTBbits.RB2 = 0; } while(0)
#define I13_Toggle()             do { PORTBbits.RB2 = ~PORTBbits.RB2; } while(0)
#define I13_GetValue()           PORTBbits.RB2
#define I13_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define I13_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
//implementations
void I13Set();
void I13Clear();
void I13Toogle();
bool I13Value();



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
