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
#TRIS#

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
