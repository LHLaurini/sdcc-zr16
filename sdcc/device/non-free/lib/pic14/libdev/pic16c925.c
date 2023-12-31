/*
 * This definitions of the PIC16C925 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2014.
 *
 * This file is generated automatically by the cinc2h.pl, 2014-03-09 13:32:13 UTC.
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * but explicitly does not cover any code or objects generated by sdcc.
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */

#include <pic16c925.h>

//==============================================================================

__at(0x0000) __sfr INDF;

__at(0x0001) __sfr TMR0;

__at(0x0002) __sfr PCL;

__at(0x0003) __sfr STATUS;
__at(0x0003) volatile __STATUSbits_t STATUSbits;

__at(0x0004) __sfr FSR;

__at(0x0005) __sfr PORTA;
__at(0x0005) volatile __PORTAbits_t PORTAbits;

__at(0x0006) __sfr PORTB;
__at(0x0006) volatile __PORTBbits_t PORTBbits;

__at(0x0007) __sfr PORTC;
__at(0x0007) volatile __PORTCbits_t PORTCbits;

__at(0x0008) __sfr PORTD;
__at(0x0008) volatile __PORTDbits_t PORTDbits;

__at(0x0009) __sfr PORTE;
__at(0x0009) volatile __PORTEbits_t PORTEbits;

__at(0x000A) __sfr PCLATH;

__at(0x000B) __sfr INTCON;
__at(0x000B) volatile __INTCONbits_t INTCONbits;

__at(0x000C) __sfr PIR1;
__at(0x000C) volatile __PIR1bits_t PIR1bits;

__at(0x000E) __sfr TMR1;

__at(0x000E) __sfr TMR1L;

__at(0x000F) __sfr TMR1H;

__at(0x0010) __sfr T1CON;
__at(0x0010) volatile __T1CONbits_t T1CONbits;

__at(0x0011) __sfr TMR2;

__at(0x0012) __sfr T2CON;
__at(0x0012) volatile __T2CONbits_t T2CONbits;

__at(0x0013) __sfr SSPBUF;

__at(0x0014) __sfr SSPCON;
__at(0x0014) volatile __SSPCONbits_t SSPCONbits;

__at(0x0015) __sfr CCPR1;

__at(0x0015) __sfr CCPR1L;

__at(0x0016) __sfr CCPR1H;

__at(0x0017) __sfr CCP1CON;
__at(0x0017) volatile __CCP1CONbits_t CCP1CONbits;

__at(0x001E) __sfr ADRESH;

__at(0x001F) __sfr ADCON0;
__at(0x001F) volatile __ADCON0bits_t ADCON0bits;

__at(0x0081) __sfr OPTION_REG;
__at(0x0081) volatile __OPTION_REGbits_t OPTION_REGbits;

__at(0x0085) __sfr TRISA;
__at(0x0085) volatile __TRISAbits_t TRISAbits;

__at(0x0086) __sfr TRISB;
__at(0x0086) volatile __TRISBbits_t TRISBbits;

__at(0x0087) __sfr TRISC;
__at(0x0087) volatile __TRISCbits_t TRISCbits;

__at(0x0088) __sfr TRISD;
__at(0x0088) volatile __TRISDbits_t TRISDbits;

__at(0x0089) __sfr TRISE;
__at(0x0089) volatile __TRISEbits_t TRISEbits;

__at(0x008C) __sfr PIE1;
__at(0x008C) volatile __PIE1bits_t PIE1bits;

__at(0x008E) __sfr PCON;
__at(0x008E) volatile __PCONbits_t PCONbits;

__at(0x0092) __sfr PR2;

__at(0x0093) __sfr SSPADD;

__at(0x0094) __sfr SSPSTAT;
__at(0x0094) volatile __SSPSTATbits_t SSPSTATbits;

__at(0x009E) __sfr ADRESL;

__at(0x009F) __sfr ADCON1;
__at(0x009F) volatile __ADCON1bits_t ADCON1bits;

__at(0x0107) __sfr PORTF;
__at(0x0107) volatile __PORTFbits_t PORTFbits;

__at(0x0108) __sfr PORTG;
__at(0x0108) volatile __PORTGbits_t PORTGbits;

__at(0x010C) __sfr PMCON1;
__at(0x010C) volatile __PMCON1bits_t PMCON1bits;

__at(0x010D) __sfr LCDSE;
__at(0x010D) volatile __LCDSEbits_t LCDSEbits;

__at(0x010E) __sfr LCDPS;
__at(0x010E) volatile __LCDPSbits_t LCDPSbits;

__at(0x010F) __sfr LCDCON;
__at(0x010F) volatile __LCDCONbits_t LCDCONbits;

__at(0x0110) __sfr LCDD00;
__at(0x0110) volatile __LCDD00bits_t LCDD00bits;

__at(0x0111) __sfr LCDD01;
__at(0x0111) volatile __LCDD01bits_t LCDD01bits;

__at(0x0112) __sfr LCDD02;
__at(0x0112) volatile __LCDD02bits_t LCDD02bits;

__at(0x0113) __sfr LCDD03;
__at(0x0113) volatile __LCDD03bits_t LCDD03bits;

__at(0x0114) __sfr LCDD04;
__at(0x0114) volatile __LCDD04bits_t LCDD04bits;

__at(0x0115) __sfr LCDD05;
__at(0x0115) volatile __LCDD05bits_t LCDD05bits;

__at(0x0116) __sfr LCDD06;
__at(0x0116) volatile __LCDD06bits_t LCDD06bits;

__at(0x0117) __sfr LCDD07;
__at(0x0117) volatile __LCDD07bits_t LCDD07bits;

__at(0x0118) __sfr LCDD08;
__at(0x0118) volatile __LCDD08bits_t LCDD08bits;

__at(0x0119) __sfr LCDD09;
__at(0x0119) volatile __LCDD09bits_t LCDD09bits;

__at(0x011A) __sfr LCDD10;
__at(0x011A) volatile __LCDD10bits_t LCDD10bits;

__at(0x011B) __sfr LCDD11;
__at(0x011B) volatile __LCDD11bits_t LCDD11bits;

__at(0x011C) __sfr LCDD12;
__at(0x011C) volatile __LCDD12bits_t LCDD12bits;

__at(0x011D) __sfr LCDD13;
__at(0x011D) volatile __LCDD13bits_t LCDD13bits;

__at(0x011E) __sfr LCDD14;
__at(0x011E) volatile __LCDD14bits_t LCDD14bits;

__at(0x011F) __sfr LCDD15;
__at(0x011F) volatile __LCDD15bits_t LCDD15bits;

__at(0x0187) __sfr TRISF;
__at(0x0187) volatile __TRISFbits_t TRISFbits;

__at(0x0188) __sfr TRISG;
__at(0x0188) volatile __TRISGbits_t TRISGbits;

__at(0x018C) __sfr PMDATA;

__at(0x018D) __sfr PMADR;

__at(0x018E) __sfr PMDATH;

__at(0x018F) __sfr PMADRH;
