/* 
 * File:   hw_config.h
 * Author: cesar
 *
 * Created on October 1, 2021, 12:37 PM
 */

#ifndef HW_CONFIG_H
#define	HW_CONFIG_H

#ifdef	__cplusplus
extern "C" {
#endif



// CONFIG
#pragma config FOSC = LP        // Oscillator Selection bits (LP oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (PWRT enabled)
#pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = ON         // Data EEPROM Memory Code Protection bit (Data EEPROM code-protected)
#pragma config WRT = HALF       // Flash Program Memory Write Enable bits (0000h to 0FFFh write-protected; 1000h to 1FFFh may be written to by EECON control)
#pragma config CP = ON          // Flash Program Memory Code Protection bit (All program memory code-protected)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
    
    /**
     * Hardware basic configuration
     */
    void HARDWARE_Initialize(void);
    
    

#ifdef	__cplusplus
}
#endif

#endif	/* HW_CONFIG_H */

