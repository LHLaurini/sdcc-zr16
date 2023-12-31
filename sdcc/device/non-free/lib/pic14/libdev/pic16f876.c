/*
 * This definitions of the PIC16F876 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2014.
 *
 * This file is generated automatically by the cinc2h.pl, 2014-03-09 13:32:07 UTC.
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

#include <pic16f876.h>

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

__at(0x000A) __sfr PCLATH;

__at(0x000B) __sfr INTCON;
__at(0x000B) volatile __INTCONbits_t INTCONbits;

__at(0x000C) __sfr PIR1;
__at(0x000C) volatile __PIR1bits_t PIR1bits;

__at(0x000D) __sfr PIR2;
__at(0x000D) volatile __PIR2bits_t PIR2bits;

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

__at(0x0018) __sfr RCSTA;
__at(0x0018) volatile __RCSTAbits_t RCSTAbits;

__at(0x0019) __sfr TXREG;

__at(0x001A) __sfr RCREG;

__at(0x001B) __sfr CCPR2;

__at(0x001B) __sfr CCPR2L;

__at(0x001C) __sfr CCPR2H;

__at(0x001D) __sfr CCP2CON;
__at(0x001D) volatile __CCP2CONbits_t CCP2CONbits;

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

__at(0x008C) __sfr PIE1;
__at(0x008C) volatile __PIE1bits_t PIE1bits;

__at(0x008D) __sfr PIE2;
__at(0x008D) volatile __PIE2bits_t PIE2bits;

__at(0x008E) __sfr PCON;
__at(0x008E) volatile __PCONbits_t PCONbits;

__at(0x0091) __sfr SSPCON2;
__at(0x0091) volatile __SSPCON2bits_t SSPCON2bits;

__at(0x0092) __sfr PR2;

__at(0x0093) __sfr SSPADD;

__at(0x0094) __sfr SSPSTAT;
__at(0x0094) volatile __SSPSTATbits_t SSPSTATbits;

__at(0x0098) __sfr TXSTA;
__at(0x0098) volatile __TXSTAbits_t TXSTAbits;

__at(0x0099) __sfr SPBRG;

__at(0x009E) __sfr ADRESL;

__at(0x009F) __sfr ADCON1;
__at(0x009F) volatile __ADCON1bits_t ADCON1bits;

__at(0x010C) __sfr EEDATA;

__at(0x010D) __sfr EEADR;

__at(0x010E) __sfr EEDATH;

__at(0x010F) __sfr EEADRH;

__at(0x018C) __sfr EECON1;
__at(0x018C) volatile __EECON1bits_t EECON1bits;

__at(0x018D) __sfr EECON2;
