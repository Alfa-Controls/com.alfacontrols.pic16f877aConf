
#include "hw_config.h"
#include "pinManager.h"

void HARDWARE_Initialize() {
    /* PORTS */
    PIN_MANAGER_Initialize();
    /* PARALEL PORT */
    TRISEbits.PSPMODE = 0; //desativa a porta paralela, libera PORTD
    /* INTERRUPTIONS */
    INTCON = 0B00000000; //INTCON: 7-GIE PEIE TMR0IE INTE RBIE TMR0IF INTF 0-RBIF
    OPTION_REG = 0B00000110; //NRBPU-INTEDG-T0CS-T0SE-PSA-PS
    //INTEDG: seleciona a borda geradora da interrupção RB0
    //T0CS:   clock interno no timer 0
    //PAS:    presscaller aplicado ao timer
    //PS: prescaler 010=1/8   período:8us frequencia:125kHz (4Mhz)
    //PS: prescaler 110=1/128 periodo: 51.2us frequencia: 19.53125 kHz (10Mhz)
    
    
}