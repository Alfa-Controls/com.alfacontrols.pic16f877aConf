/**
Pin manager implementation

@Company 
	Alfa Controls
@Author
	Cesar Daltoe Berci
*/

#include "pinManager.h"


void PIN_MANAGER_Initialize(void)
{
    /**
    TRISx registers
    */
    TRISA = 0B00000000;
    TRISB = 0B11100000;
    TRISC = 0B00001111;
    TRISD = 0B00111111;
    TRISE = 0B00000000;


    /**
    ADCONx registers
    */
    ADCON0 = 0;
    ADCON1 = 0B00000111;
    
    /**
    WPUx registers
    */
    

    /**
    APFCONx registers
    */
      
    
}
  
void PIN_MANAGER_IOC(void)
{   
}

// get/set O1 aliases
void O1Set() { O1_SetHigh(); }
void O1Clear() { O1_SetLow(); }
void O1Toogle() { O1_Toggle(); }
bool O1Value() { return O1_GetValue(); }
// get/set O2 aliases
void O2Set() { O2_SetHigh(); }
void O2Clear() { O2_SetLow(); }
void O2Toogle() { O2_Toggle(); }
bool O2Value() { return O2_GetValue(); }
// get/set O3 aliases
void O3Set() { O3_SetHigh(); }
void O3Clear() { O3_SetLow(); }
void O3Toogle() { O3_Toggle(); }
bool O3Value() { return O3_GetValue(); }
// get/set O4 aliases
void O4Set() { O4_SetHigh(); }
void O4Clear() { O4_SetLow(); }
void O4Toogle() { O4_Toggle(); }
bool O4Value() { return O4_GetValue(); }
// get/set O5 aliases
void O5Set() { O5_SetHigh(); }
void O5Clear() { O5_SetLow(); }
void O5Toogle() { O5_Toggle(); }
bool O5Value() { return O5_GetValue(); }
// get/set O6 aliases
void O6Set() { O6_SetHigh(); }
void O6Clear() { O6_SetLow(); }
void O6Toogle() { O6_Toggle(); }
bool O6Value() { return O6_GetValue(); }
// get/set O7 aliases
void O7Set() { O7_SetHigh(); }
void O7Clear() { O7_SetLow(); }
void O7Toogle() { O7_Toggle(); }
bool O7Value() { return O7_GetValue(); }
// get/set O8 aliases
void O8Set() { O8_SetHigh(); }
void O8Clear() { O8_SetLow(); }
void O8Toogle() { O8_Toggle(); }
bool O8Value() { return O8_GetValue(); }
// get/set O9 aliases
void O9Set() { O9_SetHigh(); }
void O9Clear() { O9_SetLow(); }
void O9Toogle() { O9_Toggle(); }
bool O9Value() { return O9_GetValue(); }
// get/set O10 aliases
void O10Set() { O10_SetHigh(); }
void O10Clear() { O10_SetLow(); }
void O10Toogle() { O10_Toggle(); }
bool O10Value() { return O10_GetValue(); }
// get/set O11 aliases
void O11Set() { O11_SetHigh(); }
void O11Clear() { O11_SetLow(); }
void O11Toogle() { O11_Toggle(); }
bool O11Value() { return O11_GetValue(); }
// get/set O12 aliases
void O12Set() { O12_SetHigh(); }
void O12Clear() { O12_SetLow(); }
void O12Toogle() { O12_Toggle(); }
bool O12Value() { return O12_GetValue(); }
// get/set O13 aliases
void O13Set() { O13_SetHigh(); }
void O13Clear() { O13_SetLow(); }
void O13Toogle() { O13_Toggle(); }
bool O13Value() { return O13_GetValue(); }
// get/set I1 aliases
void I1Set() { I1_SetHigh(); }
void I1Clear() { I1_SetLow(); }
void I1Toogle() { I1_Toggle(); }
bool I1Value() { return I1_GetValue(); }
// get/set I2 aliases
void I2Set() { I2_SetHigh(); }
void I2Clear() { I2_SetLow(); }
void I2Toogle() { I2_Toggle(); }
bool I2Value() { return I2_GetValue(); }
// get/set I3 aliases
void I3Set() { I3_SetHigh(); }
void I3Clear() { I3_SetLow(); }
void I3Toogle() { I3_Toggle(); }
bool I3Value() { return I3_GetValue(); }
// get/set I4 aliases
void I4Set() { I4_SetHigh(); }
void I4Clear() { I4_SetLow(); }
void I4Toogle() { I4_Toggle(); }
bool I4Value() { return I4_GetValue(); }
// get/set I5 aliases
void I5Set() { I5_SetHigh(); }
void I5Clear() { I5_SetLow(); }
void I5Toogle() { I5_Toggle(); }
bool I5Value() { return I5_GetValue(); }
// get/set I6 aliases
void I6Set() { I6_SetHigh(); }
void I6Clear() { I6_SetLow(); }
void I6Toogle() { I6_Toggle(); }
bool I6Value() { return I6_GetValue(); }
// get/set I7 aliases
void I7Set() { I7_SetHigh(); }
void I7Clear() { I7_SetLow(); }
void I7Toogle() { I7_Toggle(); }
bool I7Value() { return I7_GetValue(); }
// get/set I8 aliases
void I8Set() { I8_SetHigh(); }
void I8Clear() { I8_SetLow(); }
void I8Toogle() { I8_Toggle(); }
bool I8Value() { return I8_GetValue(); }
// get/set I9 aliases
void I9Set() { I9_SetHigh(); }
void I9Clear() { I9_SetLow(); }
void I9Toogle() { I9_Toggle(); }
bool I9Value() { return I9_GetValue(); }
// get/set I10 aliases
void I10Set() { I10_SetHigh(); }
void I10Clear() { I10_SetLow(); }
void I10Toogle() { I10_Toggle(); }
bool I10Value() { return I10_GetValue(); }
// get/set I11 aliases
void I11Set() { I11_SetHigh(); }
void I11Clear() { I11_SetLow(); }
void I11Toogle() { I11_Toggle(); }
bool I11Value() { return I11_GetValue(); }
// get/set I12 aliases
void I12Set() { I12_SetHigh(); }
void I12Clear() { I12_SetLow(); }
void I12Toogle() { I12_Toggle(); }
bool I12Value() { return I12_GetValue(); }
// get/set I13 aliases
void I13Set() { I13_SetHigh(); }
void I13Clear() { I13_SetLow(); }
void I13Toogle() { I13_Toggle(); }
bool I13Value() { return I13_GetValue(); }


/**
 End of File
*/

