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

/**
 End of File
*/

