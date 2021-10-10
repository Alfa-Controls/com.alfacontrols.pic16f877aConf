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
#define O1_SetHigh()            do { PORTDbits.PORTD1 = 1; } while(0)
#define O1_SetLow()             do { PORTDbits.PORTD1 = 0; } while(0)
#define O1_Toggle()             do { PORTDbits.PORTD1 = ~PORTDbits.PORTD1; } while(0)
#define O1_GetValue()           PORTDbits.RD1
#define O1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define O1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
// get/set O2 aliases
#define O2_TRIS                 TRISDbits.TRISD0
#define O2_PORT                 PORTDbits.RD0
#define O2_SetHigh()            do { PORTDbits.PORTD0 = 1; } while(0)
#define O2_SetLow()             do { PORTDbits.PORTD0 = 0; } while(0)
#define O2_Toggle()             do { PORTDbits.PORTD0 = ~PORTDbits.PORTD0; } while(0)
#define O2_GetValue()           PORTDbits.RD0
#define O2_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define O2_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
// get/set O3 aliases
#define O3_TRIS                 TRISCbits.TRISC3
#define O3_PORT                 PORTCbits.RC3
#define O3_SetHigh()            do { PORTCbits.PORTC3 = 1; } while(0)
#define O3_SetLow()             do { PORTCbits.PORTC3 = 0; } while(0)
#define O3_Toggle()             do { PORTCbits.PORTC3 = ~PORTCbits.PORTC3; } while(0)
#define O3_GetValue()           PORTCbits.RC3
#define O3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define O3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
// get/set O4 aliases
#define O4_TRIS                 TRISCbits.TRISC2
#define O4_PORT                 PORTCbits.RC2
#define O4_SetHigh()            do { PORTCbits.PORTC2 = 1; } while(0)
#define O4_SetLow()             do { PORTCbits.PORTC2 = 0; } while(0)
#define O4_Toggle()             do { PORTCbits.PORTC2 = ~PORTCbits.PORTC2; } while(0)
#define O4_GetValue()           PORTCbits.RC2
#define O4_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define O4_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
// get/set O5 aliases
#define O5_TRIS                 TRISCbits.TRISC1
#define O5_PORT                 PORTCbits.RC1
#define O5_SetHigh()            do { PORTCbits.PORTC1 = 1; } while(0)
#define O5_SetLow()             do { PORTCbits.PORTC1 = 0; } while(0)
#define O5_Toggle()             do { PORTCbits.PORTC1 = ~PORTCbits.PORTC1; } while(0)
#define O5_GetValue()           PORTCbits.RC1
#define O5_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define O5_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
// get/set O6 aliases
#define O6_TRIS                 TRISEbits.TRISE2
#define O6_PORT                 PORTEbits.RE2
#define O6_SetHigh()            do { PORTEbits.PORTE2 = 1; } while(0)
#define O6_SetLow()             do { PORTEbits.PORTE2 = 0; } while(0)
#define O6_Toggle()             do { PORTEbits.PORTE2 = ~PORTEbits.PORTE2; } while(0)
#define O6_GetValue()           PORTEbits.RE2
#define O6_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define O6_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
// get/set O7 aliases
#define O7_TRIS                 TRISEbits.TRISE1
#define O7_PORT                 PORTEbits.RE1
#define O7_SetHigh()            do { PORTEbits.PORTE1 = 1; } while(0)
#define O7_SetLow()             do { PORTEbits.PORTE1 = 0; } while(0)
#define O7_Toggle()             do { PORTEbits.PORTE1 = ~PORTEbits.PORTE1; } while(0)
#define O7_GetValue()           PORTEbits.RE1
#define O7_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define O7_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
// get/set O8 aliases
#define O8_TRIS                 TRISEbits.TRISE0
#define O8_PORT                 PORTEbits.RE0
#define O8_SetHigh()            do { PORTEbits.PORTE0 = 1; } while(0)
#define O8_SetLow()             do { PORTEbits.PORTE0 = 0; } while(0)
#define O8_Toggle()             do { PORTEbits.PORTE0 = ~PORTEbits.PORTE0; } while(0)
#define O8_GetValue()           PORTEbits.RE0
#define O8_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define O8_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
// get/set O9 aliases
#define O9_TRIS                 TRISAbits.TRISA5
#define O9_PORT                 PORTAbits.RA5
#define O9_SetHigh()            do { PORTAbits.PORTA5 = 1; } while(0)
#define O9_SetLow()             do { PORTAbits.PORTA5 = 0; } while(0)
#define O9_Toggle()             do { PORTAbits.PORTA5 = ~PORTAbits.PORTA5; } while(0)
#define O9_GetValue()           PORTAbits.RA5
#define O9_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define O9_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
// get/set O10 aliases
#define O10_TRIS                 TRISAbits.TRISA3
#define O10_PORT                 PORTAbits.RA3
#define O10_SetHigh()            do { PORTAbits.PORTA3 = 1; } while(0)
#define O10_SetLow()             do { PORTAbits.PORTA3 = 0; } while(0)
#define O10_Toggle()             do { PORTAbits.PORTA3 = ~PORTAbits.PORTA3; } while(0)
#define O10_GetValue()           PORTAbits.RA3
#define O10_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define O10_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
// get/set O11 aliases
#define O11_TRIS                 TRISAbits.TRISA2
#define O11_PORT                 PORTAbits.RA2
#define O11_SetHigh()            do { PORTAbits.PORTA2 = 1; } while(0)
#define O11_SetLow()             do { PORTAbits.PORTA2 = 0; } while(0)
#define O11_Toggle()             do { PORTAbits.PORTA2 = ~PORTAbits.PORTA2; } while(0)
#define O11_GetValue()           PORTAbits.RA2
#define O11_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define O11_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
// get/set O12 aliases
#define O12_TRIS                 TRISAbits.TRISA1
#define O12_PORT                 PORTAbits.RA1
#define O12_SetHigh()            do { PORTAbits.PORTA1 = 1; } while(0)
#define O12_SetLow()             do { PORTAbits.PORTA1 = 0; } while(0)
#define O12_Toggle()             do { PORTAbits.PORTA1 = ~PORTAbits.PORTA1; } while(0)
#define O12_GetValue()           PORTAbits.RA1
#define O12_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define O12_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
// get/set O13 aliases
#define O13_TRIS                 TRISAbits.TRISA0
#define O13_PORT                 PORTAbits.RA0
#define O13_SetHigh()            do { PORTAbits.PORTA0 = 1; } while(0)
#define O13_SetLow()             do { PORTAbits.PORTA0 = 0; } while(0)
#define O13_Toggle()             do { PORTAbits.PORTA0 = ~PORTAbits.PORTA0; } while(0)
#define O13_GetValue()           PORTAbits.RA0
#define O13_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define O13_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
// get/set I1 aliases
#define I1_TRIS                 TRISDbits.TRISD2
#define I1_PORT                 PORTDbits.RD2
#define I1_SetHigh()            do { PORTDbits.PORTD2 = 1; } while(0)
#define I1_SetLow()             do { PORTDbits.PORTD2 = 0; } while(0)
#define I1_Toggle()             do { PORTDbits.PORTD2 = ~PORTDbits.PORTD2; } while(0)
#define I1_GetValue()           PORTDbits.RD2
#define I1_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define I1_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
// get/set I2 aliases
#define I2_TRIS                 TRISDbits.TRISD3
#define I2_PORT                 PORTDbits.RD3
#define I2_SetHigh()            do { PORTDbits.PORTD3 = 1; } while(0)
#define I2_SetLow()             do { PORTDbits.PORTD3 = 0; } while(0)
#define I2_Toggle()             do { PORTDbits.PORTD3 = ~PORTDbits.PORTD3; } while(0)
#define I2_GetValue()           PORTDbits.RD3
#define I2_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define I2_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
// get/set I3 aliases
#define I3_TRIS                 TRISCbits.TRISC4
#define I3_PORT                 PORTCbits.RC4
#define I3_SetHigh()            do { PORTCbits.PORTC4 = 1; } while(0)
#define I3_SetLow()             do { PORTCbits.PORTC4 = 0; } while(0)
#define I3_Toggle()             do { PORTCbits.PORTC4 = ~PORTCbits.PORTC4; } while(0)
#define I3_GetValue()           PORTCbits.RC4
#define I3_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define I3_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
// get/set I4 aliases
#define I4_TRIS                 TRISCbits.TRISC5
#define I4_PORT                 PORTCbits.RC5
#define I4_SetHigh()            do { PORTCbits.PORTC5 = 1; } while(0)
#define I4_SetLow()             do { PORTCbits.PORTC5 = 0; } while(0)
#define I4_Toggle()             do { PORTCbits.PORTC5 = ~PORTCbits.PORTC5; } while(0)
#define I4_GetValue()           PORTCbits.RC5
#define I4_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define I4_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
// get/set I5 aliases
#define I5_TRIS                 TRISCbits.TRISC6
#define I5_PORT                 PORTCbits.RC6
#define I5_SetHigh()            do { PORTCbits.PORTC6 = 1; } while(0)
#define I5_SetLow()             do { PORTCbits.PORTC6 = 0; } while(0)
#define I5_Toggle()             do { PORTCbits.PORTC6 = ~PORTCbits.PORTC6; } while(0)
#define I5_GetValue()           PORTCbits.RC6
#define I5_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define I5_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
// get/set I6 aliases
#define I6_TRIS                 TRISCbits.TRISC7
#define I6_PORT                 PORTCbits.RC7
#define I6_SetHigh()            do { PORTCbits.PORTC7 = 1; } while(0)
#define I6_SetLow()             do { PORTCbits.PORTC7 = 0; } while(0)
#define I6_Toggle()             do { PORTCbits.PORTC7 = ~PORTCbits.PORTC7; } while(0)
#define I6_GetValue()           PORTCbits.RC7
#define I6_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define I6_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
// get/set I7 aliases
#define I7_TRIS                 TRISDbits.TRISD4
#define I7_PORT                 PORTDbits.RD4
#define I7_SetHigh()            do { PORTDbits.PORTD4 = 1; } while(0)
#define I7_SetLow()             do { PORTDbits.PORTD4 = 0; } while(0)
#define I7_Toggle()             do { PORTDbits.PORTD4 = ~PORTDbits.PORTD4; } while(0)
#define I7_GetValue()           PORTDbits.RD4
#define I7_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define I7_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
// get/set I8 aliases
#define I8_TRIS                 TRISDbits.TRISD5
#define I8_PORT                 PORTDbits.RD5
#define I8_SetHigh()            do { PORTDbits.PORTD5 = 1; } while(0)
#define I8_SetLow()             do { PORTDbits.PORTD5 = 0; } while(0)
#define I8_Toggle()             do { PORTDbits.PORTD5 = ~PORTDbits.PORTD5; } while(0)
#define I8_GetValue()           PORTDbits.RD5
#define I8_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define I8_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
// get/set I9 aliases
#define I9_TRIS                 TRISDbits.TRISD6
#define I9_PORT                 PORTDbits.RD6
#define I9_SetHigh()            do { PORTDbits.PORTD6 = 1; } while(0)
#define I9_SetLow()             do { PORTDbits.PORTD6 = 0; } while(0)
#define I9_Toggle()             do { PORTDbits.PORTD6 = ~PORTDbits.PORTD6; } while(0)
#define I9_GetValue()           PORTDbits.RD6
#define I9_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define I9_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
// get/set I10 aliases
#define I10_TRIS                 TRISDbits.TRISD7
#define I10_PORT                 PORTDbits.RD7
#define I10_SetHigh()            do { PORTDbits.PORTD7 = 1; } while(0)
#define I10_SetLow()             do { PORTDbits.PORTD7 = 0; } while(0)
#define I10_Toggle()             do { PORTDbits.PORTD7 = ~PORTDbits.PORTD7; } while(0)
#define I10_GetValue()           PORTDbits.RD7
#define I10_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define I10_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
// get/set I11 aliases
#define I11_TRIS                 TRISBbits.TRISB0
#define I11_PORT                 PORTBbits.RB0
#define I11_SetHigh()            do { PORTBbits.PORTB0 = 1; } while(0)
#define I11_SetLow()             do { PORTBbits.PORTB0 = 0; } while(0)
#define I11_Toggle()             do { PORTBbits.PORTB0 = ~PORTBbits.PORTB0; } while(0)
#define I11_GetValue()           PORTBbits.RB0
#define I11_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define I11_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
// get/set I12 aliases
#define I12_TRIS                 TRISBbits.TRISB1
#define I12_PORT                 PORTBbits.RB1
#define I12_SetHigh()            do { PORTBbits.PORTB1 = 1; } while(0)
#define I12_SetLow()             do { PORTBbits.PORTB1 = 0; } while(0)
#define I12_Toggle()             do { PORTBbits.PORTB1 = ~PORTBbits.PORTB1; } while(0)
#define I12_GetValue()           PORTBbits.RB1
#define I12_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define I12_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
// get/set I13 aliases
#define I13_TRIS                 TRISBbits.TRISB2
#define I13_PORT                 PORTBbits.RB2
#define I13_SetHigh()            do { PORTBbits.PORTB2 = 1; } while(0)
#define I13_SetLow()             do { PORTBbits.PORTB2 = 0; } while(0)
#define I13_Toggle()             do { PORTBbits.PORTB2 = ~PORTBbits.PORTB2; } while(0)
#define I13_GetValue()           PORTBbits.RB2
#define I13_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define I13_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)


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
