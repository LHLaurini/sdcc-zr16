/* Register definitions for pic16f1503.
 * This file was automatically generated by:
 *   inc2h.pl
 *   Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * tbut explicitly does not cover any code or objects generated by sdcc.
 *
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
#include <pic16f1503.h>

__sfr  __at (INDF0_ADDR)                   INDF0;
__sfr  __at (INDF1_ADDR)                   INDF1;
__sfr  __at (PCL_ADDR)                     PCL;
__sfr  __at (STATUS_ADDR)                  STATUS;
__sfr  __at (FSR0_ADDR)                    FSR0;
__sfr  __at (FSR0L_ADDR)                   FSR0L;
__sfr  __at (FSR0H_ADDR)                   FSR0H;
__sfr  __at (FSR1_ADDR)                    FSR1;
__sfr  __at (FSR1L_ADDR)                   FSR1L;
__sfr  __at (FSR1H_ADDR)                   FSR1H;
__sfr  __at (BSR_ADDR)                     BSR;
__sfr  __at (WREG_ADDR)                    WREG;
__sfr  __at (PCLATH_ADDR)                  PCLATH;
__sfr  __at (INTCON_ADDR)                  INTCON;
__sfr  __at (PORTA_ADDR)                   PORTA;
__sfr  __at (PORTC_ADDR)                   PORTC;
__sfr  __at (PIR1_ADDR)                    PIR1;
__sfr  __at (PIR2_ADDR)                    PIR2;
__sfr  __at (PIR3_ADDR)                    PIR3;
__sfr  __at (TMR0_ADDR)                    TMR0;
__sfr  __at (TMR1_ADDR)                    TMR1;
__sfr  __at (TMR1L_ADDR)                   TMR1L;
__sfr  __at (TMR1H_ADDR)                   TMR1H;
__sfr  __at (T1CON_ADDR)                   T1CON;
__sfr  __at (T1GCON_ADDR)                  T1GCON;
__sfr  __at (TMR2_ADDR)                    TMR2;
__sfr  __at (PR2_ADDR)                     PR2;
__sfr  __at (T2CON_ADDR)                   T2CON;
__sfr  __at (TRISA_ADDR)                   TRISA;
__sfr  __at (TRISC_ADDR)                   TRISC;
__sfr  __at (PIE1_ADDR)                    PIE1;
__sfr  __at (PIE2_ADDR)                    PIE2;
__sfr  __at (PIE3_ADDR)                    PIE3;
__sfr  __at (OPTION_REG_ADDR)              OPTION_REG;
__sfr  __at (PCON_ADDR)                    PCON;
__sfr  __at (WDTCON_ADDR)                  WDTCON;
__sfr  __at (OSCCON_ADDR)                  OSCCON;
__sfr  __at (OSCSTAT_ADDR)                 OSCSTAT;
__sfr  __at (ADRES_ADDR)                   ADRES;
__sfr  __at (ADRESL_ADDR)                  ADRESL;
__sfr  __at (ADRESH_ADDR)                  ADRESH;
__sfr  __at (ADCON0_ADDR)                  ADCON0;
__sfr  __at (ADCON1_ADDR)                  ADCON1;
__sfr  __at (ADCON2_ADDR)                  ADCON2;
__sfr  __at (LATA_ADDR)                    LATA;
__sfr  __at (LATC_ADDR)                    LATC;
__sfr  __at (CM1CON0_ADDR)                 CM1CON0;
__sfr  __at (CM1CON1_ADDR)                 CM1CON1;
__sfr  __at (CM2CON0_ADDR)                 CM2CON0;
__sfr  __at (CM2CON1_ADDR)                 CM2CON1;
__sfr  __at (CMOUT_ADDR)                   CMOUT;
__sfr  __at (BORCON_ADDR)                  BORCON;
__sfr  __at (FVRCON_ADDR)                  FVRCON;
__sfr  __at (DACCON0_ADDR)                 DACCON0;
__sfr  __at (DACCON1_ADDR)                 DACCON1;
__sfr  __at (APFCON_ADDR)                  APFCON;
__sfr  __at (ANSELA_ADDR)                  ANSELA;
__sfr  __at (ANSELC_ADDR)                  ANSELC;
__sfr  __at (PMADR_ADDR)                   PMADR;
__sfr  __at (PMADRL_ADDR)                  PMADRL;
__sfr  __at (PMADRH_ADDR)                  PMADRH;
__sfr  __at (PMDAT_ADDR)                   PMDAT;
__sfr  __at (PMDATL_ADDR)                  PMDATL;
__sfr  __at (PMDATH_ADDR)                  PMDATH;
__sfr  __at (PMCON1_ADDR)                  PMCON1;
__sfr  __at (PMCON2_ADDR)                  PMCON2;
__sfr  __at (VREGCON_ADDR)                 VREGCON;
__sfr  __at (WPUA_ADDR)                    WPUA;
__sfr  __at (SSP1BUF_ADDR)                 SSP1BUF;
__sfr  __at (SSPBUF_ADDR)                  SSPBUF;
__sfr  __at (SSP1ADD_ADDR)                 SSP1ADD;
__sfr  __at (SSPADD_ADDR)                  SSPADD;
__sfr  __at (SSP1MSK_ADDR)                 SSP1MSK;
__sfr  __at (SSPMSK_ADDR)                  SSPMSK;
__sfr  __at (SSP1STAT_ADDR)                SSP1STAT;
__sfr  __at (SSPSTAT_ADDR)                 SSPSTAT;
__sfr  __at (SSP1CON1_ADDR)                SSP1CON1;
__sfr  __at (SSPCON_ADDR)                  SSPCON;
__sfr  __at (SSPCON1_ADDR)                 SSPCON1;
__sfr  __at (SSP1CON2_ADDR)                SSP1CON2;
__sfr  __at (SSPCON2_ADDR)                 SSPCON2;
__sfr  __at (SSP1CON3_ADDR)                SSP1CON3;
__sfr  __at (SSPCON3_ADDR)                 SSPCON3;
__sfr  __at (IOCAP_ADDR)                   IOCAP;
__sfr  __at (IOCAN_ADDR)                   IOCAN;
__sfr  __at (IOCAF_ADDR)                   IOCAF;
__sfr  __at (NCO1ACC_ADDR)                 NCO1ACC;
__sfr  __at (NCO1ACCL_ADDR)                NCO1ACCL;
__sfr  __at (NCO1ACCH_ADDR)                NCO1ACCH;
__sfr  __at (NCO1ACCU_ADDR)                NCO1ACCU;
__sfr  __at (NCO1INC_ADDR)                 NCO1INC;
__sfr  __at (NCO1INCL_ADDR)                NCO1INCL;
__sfr  __at (NCO1INCH_ADDR)                NCO1INCH;
__sfr  __at (NCO1INCU_ADDR)                NCO1INCU;
__sfr  __at (NCO1CON_ADDR)                 NCO1CON;
__sfr  __at (NCO1CLK_ADDR)                 NCO1CLK;
__sfr  __at (PWM1DCL_ADDR)                 PWM1DCL;
__sfr  __at (PWM1DCH_ADDR)                 PWM1DCH;
__sfr  __at (PWM1CON_ADDR)                 PWM1CON;
__sfr  __at (PWM1CON0_ADDR)                PWM1CON0;
__sfr  __at (PWM2DCL_ADDR)                 PWM2DCL;
__sfr  __at (PWM2DCH_ADDR)                 PWM2DCH;
__sfr  __at (PWM2CON_ADDR)                 PWM2CON;
__sfr  __at (PWM2CON0_ADDR)                PWM2CON0;
__sfr  __at (PWM3DCL_ADDR)                 PWM3DCL;
__sfr  __at (PWM3DCH_ADDR)                 PWM3DCH;
__sfr  __at (PWM3CON_ADDR)                 PWM3CON;
__sfr  __at (PWM3CON0_ADDR)                PWM3CON0;
__sfr  __at (PWM4DCL_ADDR)                 PWM4DCL;
__sfr  __at (PWM4DCH_ADDR)                 PWM4DCH;
__sfr  __at (PWM4CON_ADDR)                 PWM4CON;
__sfr  __at (PWM4CON0_ADDR)                PWM4CON0;
__sfr  __at (CWG1DBR_ADDR)                 CWG1DBR;
__sfr  __at (CWG1DBF_ADDR)                 CWG1DBF;
__sfr  __at (CWG1CON0_ADDR)                CWG1CON0;
__sfr  __at (CWG1CON1_ADDR)                CWG1CON1;
__sfr  __at (CWG1CON2_ADDR)                CWG1CON2;
__sfr  __at (CLCDATA_ADDR)                 CLCDATA;
__sfr  __at (CLC1CON_ADDR)                 CLC1CON;
__sfr  __at (CLC1POL_ADDR)                 CLC1POL;
__sfr  __at (CLC1SEL0_ADDR)                CLC1SEL0;
__sfr  __at (CLC1SEL1_ADDR)                CLC1SEL1;
__sfr  __at (CLC1GLS0_ADDR)                CLC1GLS0;
__sfr  __at (CLC1GLS1_ADDR)                CLC1GLS1;
__sfr  __at (CLC1GLS2_ADDR)                CLC1GLS2;
__sfr  __at (CLC1GLS3_ADDR)                CLC1GLS3;
__sfr  __at (CLC2CON_ADDR)                 CLC2CON;
__sfr  __at (CLC2POL_ADDR)                 CLC2POL;
__sfr  __at (CLC2SEL0_ADDR)                CLC2SEL0;
__sfr  __at (CLC2SEL1_ADDR)                CLC2SEL1;
__sfr  __at (CLC2GLS0_ADDR)                CLC2GLS0;
__sfr  __at (CLC2GLS1_ADDR)                CLC2GLS1;
__sfr  __at (CLC2GLS2_ADDR)                CLC2GLS2;
__sfr  __at (CLC2GLS3_ADDR)                CLC2GLS3;
__sfr  __at (BSR_ICDSHAD_ADDR)             BSR_ICDSHAD;
__sfr  __at (STATUS_SHAD_ADDR)             STATUS_SHAD;
__sfr  __at (WREG_SHAD_ADDR)               WREG_SHAD;
__sfr  __at (BSR_SHAD_ADDR)                BSR_SHAD;
__sfr  __at (PCLATH_SHAD_ADDR)             PCLATH_SHAD;
__sfr  __at (FSR0L_SHAD_ADDR)              FSR0L_SHAD;
__sfr  __at (FSR0H_SHAD_ADDR)              FSR0H_SHAD;
__sfr  __at (FSR1L_SHAD_ADDR)              FSR1L_SHAD;
__sfr  __at (FSR1H_SHAD_ADDR)              FSR1H_SHAD;
__sfr  __at (STKPTR_ADDR)                  STKPTR;
__sfr  __at (TOSL_ADDR)                    TOSL;
__sfr  __at (TOSH_ADDR)                    TOSH;

//
// bitfield definitions
//
volatile __ADCON0bits_t __at(ADCON0_ADDR) ADCON0bits;
volatile __ADCON1bits_t __at(ADCON1_ADDR) ADCON1bits;
volatile __ADCON2bits_t __at(ADCON2_ADDR) ADCON2bits;
volatile __ANSELAbits_t __at(ANSELA_ADDR) ANSELAbits;
volatile __ANSELCbits_t __at(ANSELC_ADDR) ANSELCbits;
volatile __APFCONbits_t __at(APFCON_ADDR) APFCONbits;
volatile __BORCONbits_t __at(BORCON_ADDR) BORCONbits;
volatile __BSRbits_t __at(BSR_ADDR) BSRbits;
volatile __CLC1CONbits_t __at(CLC1CON_ADDR) CLC1CONbits;
volatile __CLC1GLS0bits_t __at(CLC1GLS0_ADDR) CLC1GLS0bits;
volatile __CLC1GLS1bits_t __at(CLC1GLS1_ADDR) CLC1GLS1bits;
volatile __CLC1GLS2bits_t __at(CLC1GLS2_ADDR) CLC1GLS2bits;
volatile __CLC1GLS3bits_t __at(CLC1GLS3_ADDR) CLC1GLS3bits;
volatile __CLC1POLbits_t __at(CLC1POL_ADDR) CLC1POLbits;
volatile __CLC1SEL0bits_t __at(CLC1SEL0_ADDR) CLC1SEL0bits;
volatile __CLC1SEL1bits_t __at(CLC1SEL1_ADDR) CLC1SEL1bits;
volatile __CLC2CONbits_t __at(CLC2CON_ADDR) CLC2CONbits;
volatile __CLC2GLS0bits_t __at(CLC2GLS0_ADDR) CLC2GLS0bits;
volatile __CLC2GLS1bits_t __at(CLC2GLS1_ADDR) CLC2GLS1bits;
volatile __CLC2GLS2bits_t __at(CLC2GLS2_ADDR) CLC2GLS2bits;
volatile __CLC2GLS3bits_t __at(CLC2GLS3_ADDR) CLC2GLS3bits;
volatile __CLC2POLbits_t __at(CLC2POL_ADDR) CLC2POLbits;
volatile __CLC2SEL0bits_t __at(CLC2SEL0_ADDR) CLC2SEL0bits;
volatile __CLC2SEL1bits_t __at(CLC2SEL1_ADDR) CLC2SEL1bits;
volatile __CLCDATAbits_t __at(CLCDATA_ADDR) CLCDATAbits;
volatile __CM1CON0bits_t __at(CM1CON0_ADDR) CM1CON0bits;
volatile __CM1CON1bits_t __at(CM1CON1_ADDR) CM1CON1bits;
volatile __CM2CON0bits_t __at(CM2CON0_ADDR) CM2CON0bits;
volatile __CM2CON1bits_t __at(CM2CON1_ADDR) CM2CON1bits;
volatile __CMOUTbits_t __at(CMOUT_ADDR) CMOUTbits;
volatile __CWG1CON0bits_t __at(CWG1CON0_ADDR) CWG1CON0bits;
volatile __CWG1CON1bits_t __at(CWG1CON1_ADDR) CWG1CON1bits;
volatile __CWG1CON2bits_t __at(CWG1CON2_ADDR) CWG1CON2bits;
volatile __CWG1DBFbits_t __at(CWG1DBF_ADDR) CWG1DBFbits;
volatile __CWG1DBRbits_t __at(CWG1DBR_ADDR) CWG1DBRbits;
volatile __DACCON0bits_t __at(DACCON0_ADDR) DACCON0bits;
volatile __DACCON1bits_t __at(DACCON1_ADDR) DACCON1bits;
volatile __FVRCONbits_t __at(FVRCON_ADDR) FVRCONbits;
volatile __INTCONbits_t __at(INTCON_ADDR) INTCONbits;
volatile __IOCAFbits_t __at(IOCAF_ADDR) IOCAFbits;
volatile __IOCANbits_t __at(IOCAN_ADDR) IOCANbits;
volatile __IOCAPbits_t __at(IOCAP_ADDR) IOCAPbits;
volatile __LATAbits_t __at(LATA_ADDR) LATAbits;
volatile __LATCbits_t __at(LATC_ADDR) LATCbits;
volatile __NCO1ACCHbits_t __at(NCO1ACCH_ADDR) NCO1ACCHbits;
volatile __NCO1ACCLbits_t __at(NCO1ACCL_ADDR) NCO1ACCLbits;
volatile __NCO1ACCUbits_t __at(NCO1ACCU_ADDR) NCO1ACCUbits;
volatile __NCO1CLKbits_t __at(NCO1CLK_ADDR) NCO1CLKbits;
volatile __NCO1CONbits_t __at(NCO1CON_ADDR) NCO1CONbits;
volatile __NCO1INCHbits_t __at(NCO1INCH_ADDR) NCO1INCHbits;
volatile __NCO1INCLbits_t __at(NCO1INCL_ADDR) NCO1INCLbits;
volatile __OPTION_REGbits_t __at(OPTION_REG_ADDR) OPTION_REGbits;
volatile __OSCCONbits_t __at(OSCCON_ADDR) OSCCONbits;
volatile __OSCSTATbits_t __at(OSCSTAT_ADDR) OSCSTATbits;
volatile __PCONbits_t __at(PCON_ADDR) PCONbits;
volatile __PIE1bits_t __at(PIE1_ADDR) PIE1bits;
volatile __PIE2bits_t __at(PIE2_ADDR) PIE2bits;
volatile __PIE3bits_t __at(PIE3_ADDR) PIE3bits;
volatile __PIR1bits_t __at(PIR1_ADDR) PIR1bits;
volatile __PIR2bits_t __at(PIR2_ADDR) PIR2bits;
volatile __PIR3bits_t __at(PIR3_ADDR) PIR3bits;
volatile __PMCON1bits_t __at(PMCON1_ADDR) PMCON1bits;
volatile __PORTAbits_t __at(PORTA_ADDR) PORTAbits;
volatile __PORTCbits_t __at(PORTC_ADDR) PORTCbits;
volatile __PWM1CONbits_t __at(PWM1CON_ADDR) PWM1CONbits;
volatile __PWM1CON0bits_t __at(PWM1CON0_ADDR) PWM1CON0bits;
volatile __PWM1DCHbits_t __at(PWM1DCH_ADDR) PWM1DCHbits;
volatile __PWM1DCLbits_t __at(PWM1DCL_ADDR) PWM1DCLbits;
volatile __PWM2CONbits_t __at(PWM2CON_ADDR) PWM2CONbits;
volatile __PWM2CON0bits_t __at(PWM2CON0_ADDR) PWM2CON0bits;
volatile __PWM2DCHbits_t __at(PWM2DCH_ADDR) PWM2DCHbits;
volatile __PWM2DCLbits_t __at(PWM2DCL_ADDR) PWM2DCLbits;
volatile __PWM3CONbits_t __at(PWM3CON_ADDR) PWM3CONbits;
volatile __PWM3CON0bits_t __at(PWM3CON0_ADDR) PWM3CON0bits;
volatile __PWM3DCHbits_t __at(PWM3DCH_ADDR) PWM3DCHbits;
volatile __PWM3DCLbits_t __at(PWM3DCL_ADDR) PWM3DCLbits;
volatile __PWM4CONbits_t __at(PWM4CON_ADDR) PWM4CONbits;
volatile __PWM4CON0bits_t __at(PWM4CON0_ADDR) PWM4CON0bits;
volatile __PWM4DCHbits_t __at(PWM4DCH_ADDR) PWM4DCHbits;
volatile __PWM4DCLbits_t __at(PWM4DCL_ADDR) PWM4DCLbits;
volatile __SSP1CON1bits_t __at(SSP1CON1_ADDR) SSP1CON1bits;
volatile __SSP1CON2bits_t __at(SSP1CON2_ADDR) SSP1CON2bits;
volatile __SSP1CON3bits_t __at(SSP1CON3_ADDR) SSP1CON3bits;
volatile __SSP1STATbits_t __at(SSP1STAT_ADDR) SSP1STATbits;
volatile __SSPCONbits_t __at(SSPCON_ADDR) SSPCONbits;
volatile __SSPCON1bits_t __at(SSPCON1_ADDR) SSPCON1bits;
volatile __SSPCON2bits_t __at(SSPCON2_ADDR) SSPCON2bits;
volatile __SSPCON3bits_t __at(SSPCON3_ADDR) SSPCON3bits;
volatile __SSPSTATbits_t __at(SSPSTAT_ADDR) SSPSTATbits;
volatile __STATUSbits_t __at(STATUS_ADDR) STATUSbits;
volatile __STATUS_SHADbits_t __at(STATUS_SHAD_ADDR) STATUS_SHADbits;
volatile __T1CONbits_t __at(T1CON_ADDR) T1CONbits;
volatile __T1GCONbits_t __at(T1GCON_ADDR) T1GCONbits;
volatile __T2CONbits_t __at(T2CON_ADDR) T2CONbits;
volatile __TRISAbits_t __at(TRISA_ADDR) TRISAbits;
volatile __TRISCbits_t __at(TRISC_ADDR) TRISCbits;
volatile __VREGCONbits_t __at(VREGCON_ADDR) VREGCONbits;
volatile __WDTCONbits_t __at(WDTCON_ADDR) WDTCONbits;
volatile __WPUAbits_t __at(WPUA_ADDR) WPUAbits;

