#byte MCU_INDF0 = 0x000

#byte MCU_INDF1 = 0x001

#byte MCU_PCL = 0x002

struct MCU_STATUS {
   unsigned int C:1;
   unsigned int DC:1;
   unsigned int Z:1;
   unsigned int PD:1;
   unsigned int TO:1;
} MCU_STATUS;
#byte MCU_STATUS = 0x003
#byte STATUS = 0x003

#word MCU_FSR0 = 0x004

#word MCU_FSR1 = 0x006

#byte MCU_BSR = 0x008

#byte MCU_WREG = 0x009

#byte MCU_PCLATH = 0x00A

struct MCU_INTCON {
   unsigned int INTEDG:1;
   unsigned int :5;
   unsigned int PEIE:1;
   unsigned int GIE:1;
} MCU_INTCON;
#byte MCU_INTCON = 0x00B
#byte INTCON = 0x00B

struct MCU_PORTA {
   unsigned int RA0:1;
   unsigned int RA1:1;
   unsigned int RA2:1;
   unsigned int RA3:1;
   unsigned int RA4:1;
   unsigned int RA5:1;
   unsigned int RA6:1;
   unsigned int RA7:1;
} MCU_PORTA;
#byte MCU_PORTA = 0x00C
#byte PORTA = 0x00C

struct MCU_PORTB {
   unsigned int RB0:1;
   unsigned int RB1:1;
   unsigned int RB2:1;
   unsigned int RB3:1;
   unsigned int RB4:1;
   unsigned int RB5:1;
   unsigned int RB6:1;
   unsigned int RB7:1;
} MCU_PORTB;
#byte MCU_PORTB = 0x00D
#byte PORTB = 0x00D

struct MCU_PORTC {
   unsigned int RC0:1;
   unsigned int RC1:1;
   unsigned int RC2:1;
   unsigned int RC3:1;
   unsigned int RC4:1;
   unsigned int RC5:1;
   unsigned int RC6:1;
   unsigned int RC7:1;
} MCU_PORTC;
#byte MCU_PORTC = 0x00E
#byte PORTC = 0x00E

struct MCU_PORTE {
   unsigned int RE0:1;
   unsigned int RE1:1;
   unsigned int RE2:1;
   unsigned int RE3:1;
   unsigned int RE4:1;
   unsigned int RE5:1;
   unsigned int RE6:1;
   unsigned int RE7:1;
} MCU_PORTE;
#byte MCU_PORTE = 0x010
#byte PORTE = 0x010

struct MCU_TRISA {
   unsigned int TRISA0:1;
   unsigned int TRISA1:1;
   unsigned int TRISA2:1;
   unsigned int TRISA3:1;
   unsigned int TRISA4:1;
   unsigned int TRISA5:1;
   unsigned int TRISA6:1;
   unsigned int TRISA7:1;
} MCU_TRISA;
#byte MCU_TRISA = 0x011
#byte TRISA = 0x011

struct MCU_TRISB {
   unsigned int TRISB0:1;
   unsigned int TRISB1:1;
   unsigned int TRISB2:1;
   unsigned int TRISB3:1;
   unsigned int TRISB4:1;
   unsigned int TRISB5:1;
   unsigned int TRISB6:1;
   unsigned int TRISB7:1;
} MCU_TRISB;
#byte MCU_TRISB = 0x012
#byte TRISB = 0x012

struct MCU_TRISC {
   unsigned int TRISC0:1;
   unsigned int TRISC1:1;
   unsigned int TRISC2:1;
   unsigned int TRISC3:1;
   unsigned int TRISC4:1;
   unsigned int TRISC5:1;
   unsigned int TRISC6:1;
   unsigned int TRISC7:1;
} MCU_TRISC;
#byte MCU_TRISC = 0x013
#byte TRISC = 0x013

struct MCU_LATA {
   unsigned int LATA0:1;
   unsigned int LATA1:1;
   unsigned int LATA2:1;
   unsigned int LATA3:1;
   unsigned int LATA4:1;
   unsigned int LATA5:1;
   unsigned int LATA6:1;
   unsigned int LATA7:1;
} MCU_LATA;
#byte MCU_LATA = 0x016
#byte LATA = 0x016

struct MCU_LATB {
   unsigned int LATB0:1;
   unsigned int LATB1:1;
   unsigned int LATB2:1;
   unsigned int LATB3:1;
   unsigned int LATB4:1;
   unsigned int LATB5:1;
   unsigned int LATB6:1;
   unsigned int LATB7:1;
} MCU_LATB;
#byte MCU_LATB = 0x017
#byte LATB = 0x017

struct MCU_LATC {
   unsigned int LATC0:1;
   unsigned int LATC1:1;
   unsigned int LATC2:1;
   unsigned int LATC3:1;
   unsigned int LATC4:1;
   unsigned int LATC5:1;
   unsigned int LATC6:1;
   unsigned int LATC7:1;
} MCU_LATC;
#byte MCU_LATC = 0x018
#byte LATC = 0x018

struct MCU_TMR0L {
   unsigned int TMR0L:8;
} MCU_TMR0L;
#byte MCU_TMR0L = 0x01C
#byte TMR0L = 0x01C

struct MCU_TMR0H {
   union {
      struct {
         unsigned int TMR0H:8;
      };

      struct {
         unsigned int T0PR:8;
      };
   };
} MCU_TMR0H;
#byte MCU_TMR0H = 0x01D
#byte TMR0H = 0x01D

struct MCU_T0CON0 {
   unsigned int T0OUTPS:4;
   unsigned int T016BIT:1;
   unsigned int T0OUT:1;
   unsigned int T0OE:1;
   unsigned int T0EN:1;
} MCU_T0CON0;
#byte MCU_T0CON0 = 0x01E
#byte T0CON0 = 0x01E

struct MCU_T0CON1 {
   unsigned int T0CKPS:4;
   unsigned int T0ASYNC:1;
   unsigned int T0CS:3;
} MCU_T0CON1;
#byte MCU_T0CON1 = 0x01F
#byte T0CON1 = 0x01F

#word MCU_ADRES = 0x08C

struct MCU_ADCON0 {
   union {
      struct {
         unsigned int ADGO:1;
         unsigned int :1;
         unsigned int ADFM:2;
         unsigned int ADCS:1;
         unsigned int :1;
         unsigned int ADCONT:1;
         unsigned int ADON:1;
      };

   union {
      struct {
         unsigned int DONE:1;
         unsigned int :1;
         unsigned int ADFRM:2;
      };
   };

      struct {
         unsigned int GO:1;
      };
   };
} MCU_ADCON0;
#byte MCU_ADCON0 = 0x093
#byte ADCON0 = 0x093

struct MCU_ADCON1 {
   unsigned int ADDSEN:1;
   unsigned int :4;
   unsigned int ADGPOL:1;
   unsigned int ADIPEN:1;
   unsigned int ADPPOL:1;
} MCU_ADCON1;
#byte MCU_ADCON1 = 0x094
#byte ADCON1 = 0x094

struct MCU_ADCON2 {
   unsigned int ADMD:3;
   unsigned int ADACLR:1;
   unsigned int ADCRS:3;
   unsigned int ADPSIS:1;
} MCU_ADCON2;
#byte MCU_ADCON2 = 0x095
#byte ADCON2 = 0x095

struct MCU_ADCON3 {
   unsigned int ADTMD:3;
   unsigned int ADSOI:1;
   unsigned int ADCALC:3;
} MCU_ADCON3;
#byte MCU_ADCON3 = 0x096
#byte ADCON3 = 0x096

struct MCU_ADSTAT {
   unsigned int ADSTAT:3;
   unsigned int ADMACT:1;
   unsigned int ADMATH:1;
   unsigned int ADLTHR:1;
   unsigned int ADUTHR:1;
   unsigned int ADAOV:1;
} MCU_ADSTAT;
#byte MCU_ADSTAT = 0x097
#byte ADSTAT = 0x097

#byte MCU_ADACT = 0x099

#byte MCU_RC1REG = 0x119

#byte MCU_TX1REG = 0x11A

#word MCU_SP1BRG = 0x11B

struct MCU_RC1STA {
   unsigned int RX9D:1;
   unsigned int OERR:1;
   unsigned int FERR:1;
   unsigned int ADDEN:1;
   unsigned int CREN:1;
   unsigned int SREN:1;
   unsigned int RX9:1;
   unsigned int SPEN:1;
} MCU_RC1STA;
#byte MCU_RC1STA = 0x11D
#byte RC1STA = 0x11D

struct MCU_TX1STA {
   unsigned int TX9D:1;
   unsigned int TRMT:1;
   unsigned int BRGH:1;
   unsigned int SENDB:1;
   unsigned int SYNC:1;
   unsigned int TXEN:1;
   unsigned int TX9:1;
   unsigned int CSRC:1;
} MCU_TX1STA;
#byte MCU_TX1STA = 0x11E
#byte TX1STA = 0x11E

struct MCU_BAUD1CON {
   unsigned int ABDEN:1;
   unsigned int WUE:1;
   unsigned int :1;
   unsigned int BRG16:1;
   unsigned int SCKP:1;
   unsigned int :1;
   unsigned int RCIDL:1;
   unsigned int ABDOVF:1;
} MCU_BAUD1CON;
#byte MCU_BAUD1CON = 0x11F
#byte BAUD1CON = 0x11F

#byte MCU_SSP1BUF = 0x18C


struct MCU_SSP1ADD {
   unsigned int MSK:8;
} MCU_SSP1ADD;
#byte MCU_SSP1ADD = 0x18D
#byte SSP1ADD = 0x18D


struct MCU_SSP1MSK {
   unsigned int MSK:8;
} MCU_SSP1MSK;
#byte MCU_SSP1MSK = 0x18E
#byte SSP1MSK = 0x18E

struct MCU_SSP1STAT {
   union {
      struct {
         unsigned int BF:1;
         unsigned int UA:1;
         unsigned int R:1;
         unsigned int S:1;
         unsigned int P:1;
         unsigned int D:1;
         unsigned int CKE:1;
         unsigned int SMP:1;
      };

   union {
      struct {
         unsigned int :2;
         unsigned int R_W:1;
         unsigned int :2;
         unsigned int D_A:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int W:1;
         unsigned int :2;
         unsigned int A:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int WRITE:1;
         unsigned int S2:1;
         unsigned int P2:1;
         unsigned int ADDRESS:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int READ_WRITE:1;
         unsigned int I2C_START:1;
         unsigned int I2C_STOP:1;
         unsigned int DATA_ADDRESS:1;
      };
   };

   union {
      struct {
         unsigned int BF1:1;
         unsigned int UA1:1;
         unsigned int I2C_READ:1;
         unsigned int START:1;
         unsigned int STOP:1;
         unsigned int I2C_DAT:1;
         unsigned int CKE1:1;
         unsigned int SMP1:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int RW:1;
         unsigned int I2C_START1:1;
         unsigned int I2C_STOP2:1;
         unsigned int DA:1;
      };
   };

      struct {
         unsigned int :2;
         unsigned int W2:1;
         unsigned int :2;
         unsigned int A2:1;
      };
   };
} MCU_SSP1STAT;
#byte MCU_SSP1STAT = 0x18F
#byte SSP1STAT = 0x18F

struct MCU_SSP1CON1 {
   unsigned int SSPM:4;
   unsigned int CKP:1;
   unsigned int SSPEN:1;
   unsigned int SSPOV:1;
   unsigned int WCOL:1;
} MCU_SSP1CON1;
#byte MCU_SSP1CON1 = 0x190
#byte SSP1CON1 = 0x190

struct MCU_SSP1CON2 {
   union {
      struct {
         unsigned int SEN:1;
         unsigned int RSEN:1;
         unsigned int PEN:1;
         unsigned int RCEN:1;
         unsigned int ACKEN:1;
         unsigned int ACKDT:1;
         unsigned int ACKSTAT:1;
         unsigned int GCEN:1;
      };

   union {
      struct {
         unsigned int :1;
         unsigned int ADMSK:5;
      };
   };

      struct {
         unsigned int SEN1:1;
         unsigned int ADMSK1:5;
         unsigned int ACKSTAT1:1;
         unsigned int GCEN1:1;
      };
   };
} MCU_SSP1CON2;
#byte MCU_SSP1CON2 = 0x191
#byte SSP1CON2 = 0x191

struct MCU_SSP1CON3 {
   unsigned int DHEN:1;
   unsigned int AHEN:1;
   unsigned int SBCDE:1;
   unsigned int SDAHT:1;
   unsigned int BOEN:1;
   unsigned int SCIE:1;
   unsigned int PCIE:1;
   unsigned int ACKTIM:1;
} MCU_SSP1CON3;
#byte MCU_SSP1CON3 = 0x192
#byte SSP1CON3 = 0x192

#byte MCU_SSP2BUF = 0x196


struct MCU_SSP2ADD {
   union {
      struct {
         unsigned int MSK:8;
      };

      struct {
         unsigned int MSK02:1;
         unsigned int MSK12:1;
         unsigned int MSK22:1;
         unsigned int MSK32:1;
         unsigned int MSK42:1;
         unsigned int MSK52:1;
         unsigned int :1;
         unsigned int MSK72:1;
      };
   };
} MCU_SSP2ADD;
#byte MCU_SSP2ADD = 0x197
#byte SSP2ADD = 0x197


struct MCU_SSP2MSK {
   unsigned int MSK:8;
} MCU_SSP2MSK;
#byte MCU_SSP2MSK = 0x198
#byte SSP2MSK = 0x198

struct MCU_SSP2STAT {
   union {
      struct {
         unsigned int BF:1;
         unsigned int UA:1;
         unsigned int R:1;
         unsigned int S:1;
         unsigned int P:1;
         unsigned int D:1;
         unsigned int CKE:1;
         unsigned int SMP:1;
      };

   union {
      struct {
         unsigned int :2;
         unsigned int R_W:1;
         unsigned int :2;
         unsigned int D_A:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int W:1;
         unsigned int :2;
         unsigned int A:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int WRITE:1;
         unsigned int START2:1;
         unsigned int STOP2:1;
         unsigned int ADDRESS:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int READ_WRITE:1;
         unsigned int I2C_START:1;
         unsigned int I2C_STOP:1;
         unsigned int DATA_ADDRESS:1;
      };
   };

   union {
      struct {
         unsigned int BF2:1;
         unsigned int UA2:1;
         unsigned int I2C_READ:1;
         unsigned int START:1;
         unsigned int STOP:1;
         unsigned int I2C_DAT:1;
         unsigned int CKE2:1;
         unsigned int SMP2:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int RW:1;
         unsigned int I2C_START2:1;
         unsigned int I2C_STOP2:1;
         unsigned int DA:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int RW2:1;
         unsigned int S2:1;
         unsigned int P2:1;
         unsigned int DA2:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int I2C_READ2:1;
         unsigned int :2;
         unsigned int DATA_ADDRESS2:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int READ_WRITE2:1;
         unsigned int :2;
         unsigned int D_A2:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int R_W2:1;
         unsigned int :2;
         unsigned int I2C_DAT2:1;
      };
   };

   union {
      struct {
         unsigned int :2;
         unsigned int W2:1;
         unsigned int :2;
         unsigned int A2:1;
      };
   };

      struct {
         unsigned int :2;
         unsigned int WRITE2:1;
         unsigned int :2;
         unsigned int ADDRESS2:1;
      };
   };
} MCU_SSP2STAT;
#byte MCU_SSP2STAT = 0x199
#byte SSP2STAT = 0x199

struct MCU_SSP2CON1 {
   union {
      struct {
         unsigned int SSPM:4;
         unsigned int CKP:1;
         unsigned int SSPEN:1;
         unsigned int SSPOV:1;
         unsigned int WCOL:1;
      };

      struct {
         unsigned int SSPM02:1;
         unsigned int SSPM12:1;
         unsigned int SSPM22:1;
         unsigned int SSPM32:1;
         unsigned int CKP2:1;
         unsigned int SSPEN2:1;
         unsigned int SSPOV2:1;
         unsigned int WCOL2:1;
      };
   };
} MCU_SSP2CON1;
#byte MCU_SSP2CON1 = 0x19A
#byte SSP2CON1 = 0x19A

struct MCU_SSP2CON2 {
   union {
      struct {
         unsigned int SEN:1;
         unsigned int RSEN:1;
         unsigned int PEN:1;
         unsigned int RCEN:1;
         unsigned int ACKEN:1;
         unsigned int ACKDT:1;
         unsigned int ACKSTAT:1;
         unsigned int GCEN:1;
      };

   union {
      struct {
         unsigned int :1;
         unsigned int ADMSK:5;
      };
   };

   union {
      struct {
         unsigned int SEN2:1;
         unsigned int ADMSK1:5;
         unsigned int ACKSTAT2:1;
         unsigned int GCEN2:1;
      };
   };

   union {
      struct {
         unsigned int :1;
         unsigned int ADMSK12:1;
         unsigned int ADMSK22:1;
         unsigned int ADMSK32:1;
         unsigned int ACKEN2:1;
         unsigned int ACKDT2:1;
      };
   };

      struct {
         unsigned int :1;
         unsigned int RSEN2:1;
         unsigned int PEN2:1;
         unsigned int RCEN2:1;
         unsigned int ADMSK42:1;
         unsigned int ADMSK52:1;
      };
   };
} MCU_SSP2CON2;
#byte MCU_SSP2CON2 = 0x19B
#byte SSP2CON2 = 0x19B

struct MCU_SSP2CON3 {
   unsigned int DHEN:1;
   unsigned int AHEN:1;
   unsigned int SBCDE:1;
   unsigned int SDAHT:1;
   unsigned int BOEN:1;
   unsigned int SCIE:1;
   unsigned int PCIE:1;
   unsigned int ACKTIM:1;
} MCU_SSP2CON3;
#byte MCU_SSP2CON3 = 0x19C
#byte SSP2CON3 = 0x19C

struct MCU_TMR1L {
   union {
      struct {
         unsigned int TMR1L:8;
      };

   union {
      struct {
         unsigned int :8;
      };
   };

   union {
      struct {
         unsigned int TMR1:8;
      };
   };

      struct {
         unsigned int CAL01:1;
         unsigned int CAL11:1;
         unsigned int CAL21:1;
         unsigned int CAL31:1;
         unsigned int CAL41:1;
         unsigned int :1;
         unsigned int CAL61:1;
         unsigned int CAL71:1;
      };
   };
} MCU_TMR1L;
#byte MCU_TMR1L = 0x20C
#byte TMR1L = 0x20C

struct MCU_TMR1H {
   union {
      struct {
         unsigned int TMR1H:8;
      };

   union {
      struct {
         unsigned int :8;
      };
   };

      struct {
         unsigned int TMR18:2;
         unsigned int TMR11:6;
      };
   };
} MCU_TMR1H;
#byte MCU_TMR1H = 0x20D
#byte TMR1H = 0x20D

struct MCU_T1CON {
   union {
      struct {
         unsigned int ON:1;
         unsigned int RD16:1;
         unsigned int SYNC:1;
         unsigned int :1;
         unsigned int CKPS:2;
      };

      struct {
         unsigned int TMR1ON:1;
         unsigned int T1RD16:1;
         unsigned int T1SYNC:1;
         unsigned int :1;
         unsigned int T1CKPS:2;
      };
   };
} MCU_T1CON;
#byte MCU_T1CON = 0x20E
#byte T1CON = 0x20E

struct MCU_T1GCON {
   union {
      struct {
         unsigned int :2;
         unsigned int GVAL:1;
         unsigned int GGO:1;
         unsigned int GSPM:1;
         unsigned int GTM:1;
         unsigned int GPOL:1;
         unsigned int GE:1;
      };

      struct {
         unsigned int :2;
         unsigned int T1GVAL:1;
         unsigned int T1GGO:1;
         unsigned int T1GSPM:1;
         unsigned int T1GTM:1;
         unsigned int T1GPOL:1;
         unsigned int T1GE:1;
      };
   };
} MCU_T1GCON;
#byte MCU_T1GCON = 0x20F
#byte T1GCON = 0x20F

struct MCU_TMR3L {
   union {
      struct {
         unsigned int TMR3L:8;
      };

   union {
      struct {
         unsigned int TMR3:8;
      };
   };

      struct {
         unsigned int CAL03:1;
         unsigned int CAL13:1;
         unsigned int CAL23:1;
         unsigned int CAL33:1;
         unsigned int CAL43:1;
         unsigned int CAL53:1;
         unsigned int CAL63:1;
      };
   };
} MCU_TMR3L;
#byte MCU_TMR3L = 0x212
#byte TMR3L = 0x212

struct MCU_TMR3H {
   union {
      struct {
         unsigned int TMR3H:8;
      };

      struct {
         unsigned int TMR38:2;
         unsigned int TMR31:6;
      };
   };
} MCU_TMR3H;
#byte MCU_TMR3H = 0x213
#byte TMR3H = 0x213

struct MCU_T3CON {
   union {
      struct {
         unsigned int ON:1;
         unsigned int RD16:1;
         unsigned int SYNC:1;
         unsigned int :1;
         unsigned int CKPS:2;
      };

   union {
      struct {
         unsigned int TMR3ON:1;
         unsigned int T3RD16:1;
         unsigned int T3SYNC:1;
         unsigned int :1;
         unsigned int T3CKPS:2;
      };
   };

      struct {
         unsigned int :1;
         unsigned int RD163:1;
      };
   };
} MCU_T3CON;
#byte MCU_T3CON = 0x214
#byte T3CON = 0x214

struct MCU_T3GCON {
   union {
      struct {
         unsigned int :2;
         unsigned int GVAL:1;
         unsigned int GGO:1;
         unsigned int GSPM:1;
         unsigned int GTM:1;
         unsigned int GPOL:1;
         unsigned int GE:1;
      };

      struct {
         unsigned int :2;
         unsigned int T3GVAL:1;
         unsigned int T3GGO:1;
         unsigned int T3GSPM:1;
         unsigned int T3GTM:1;
         unsigned int T3GPOL:1;
         unsigned int T3GE:1;
      };
   };
} MCU_T3GCON;
#byte MCU_T3GCON = 0x215
#byte T3GCON = 0x215

struct MCU_TMR5L {
   union {
      struct {
         unsigned int TMR5L:8;
      };

   union {
      struct {
         unsigned int TMR5:8;
      };
   };

      struct {
         unsigned int CAL05:1;
         unsigned int CAL15:1;
         unsigned int CAL25:1;
         unsigned int CAL35:1;
         unsigned int CAL45:1;
         unsigned int CAL55:1;
         unsigned int CAL65:1;
         unsigned int CAL75:1;
      };
   };
} MCU_TMR5L;
#byte MCU_TMR5L = 0x218
#byte TMR5L = 0x218

struct MCU_TMR5H {
   union {
      struct {
         unsigned int TMR5H:8;
      };

      struct {
         unsigned int TMR58:2;
         unsigned int TMR51:6;
      };
   };
} MCU_TMR5H;
#byte MCU_TMR5H = 0x219
#byte TMR5H = 0x219

struct MCU_T5CON {
   union {
      struct {
         unsigned int ON:1;
         unsigned int RD16:1;
         unsigned int SYNC:1;
         unsigned int :1;
         unsigned int CKPS:2;
      };

   union {
      struct {
         unsigned int TMR5ON:1;
         unsigned int T5RD16:1;
         unsigned int T5SYNC:1;
         unsigned int :1;
         unsigned int T5CKPS:2;
      };
   };

      struct {
         unsigned int :1;
         unsigned int RD165:1;
      };
   };
} MCU_T5CON;
#byte MCU_T5CON = 0x21A
#byte T5CON = 0x21A

struct MCU_T5GCON {
   union {
      struct {
         unsigned int :2;
         unsigned int GVAL:1;
         unsigned int GGO:1;
         unsigned int GSPM:1;
         unsigned int GTM:1;
         unsigned int GPOL:1;
         unsigned int GE:1;
      };

      struct {
         unsigned int :2;
         unsigned int T5GVAL:1;
         unsigned int T5GGO:1;
         unsigned int T5GSPM:1;
         unsigned int T5GTM:1;
         unsigned int T5GPOL:1;
         unsigned int T5GE:1;
      };
   };
} MCU_T5GCON;
#byte MCU_T5GCON = 0x21B
#byte T5GCON = 0x21B

struct MCU_CCPTMRS0 {
   unsigned int C1TSEL:2;
   unsigned int C2TSEL:2;
   unsigned int C3TSEL:2;
   unsigned int C4TSEL:2;
} MCU_CCPTMRS0;
#byte MCU_CCPTMRS0 = 0x21E
#byte CCPTMRS0 = 0x21E

struct MCU_CCPTMRS1 {
   unsigned int C5TSEL:2;
   unsigned int P6TSEL:2;
   unsigned int P7TSEL:2;
} MCU_CCPTMRS1;
#byte MCU_CCPTMRS1 = 0x21F
#byte CCPTMRS1 = 0x21F

#byte MCU_T2TMR = 0x28C

#byte MCU_T2PR = 0x28D

struct MCU_T2CON {
   union {
      struct {
         unsigned int OUTPS:4;
         unsigned int CKPS:3;
         unsigned int ON:1;
      };

   union {
      struct {
         unsigned int T2OUTPS:4;
         unsigned int T2CKPS:3;
         unsigned int T2ON:1;
      };
   };

      struct {
         unsigned int :7;
         unsigned int TMR2ON:1;
      };
   };
} MCU_T2CON;
#byte MCU_T2CON = 0x28E
#byte T2CON = 0x28E

struct MCU_T2HLT {
   union {
      struct {
         unsigned int MODE:5;
         unsigned int CKSYNC:1;
         unsigned int CKPOL:1;
         unsigned int PSYNC:1;
      };

      struct {
         unsigned int T2MODE:5;
         unsigned int T2CKSYNC:1;
         unsigned int T2CKPOL:1;
         unsigned int T2PSYNC:1;
      };
   };
} MCU_T2HLT;
#byte MCU_T2HLT = 0x28F
#byte T2HLT = 0x28F

#byte MCU_T2RST = 0x291

#byte MCU_T4TMR = 0x292

#byte MCU_T4PR = 0x293

struct MCU_T4CON {
   union {
      struct {
         unsigned int OUTPS:4;
         unsigned int CKPS:3;
         unsigned int ON:1;
      };

   union {
      struct {
         unsigned int T4OUTPS:4;
         unsigned int T4CKPS:3;
         unsigned int T4ON:1;
      };
   };

      struct {
         unsigned int :7;
         unsigned int TMR4ON:1;
      };
   };
} MCU_T4CON;
#byte MCU_T4CON = 0x294
#byte T4CON = 0x294

struct MCU_T4HLT {
   union {
      struct {
         unsigned int MODE:5;
         unsigned int CKSYNC:1;
         unsigned int CKPOL:1;
         unsigned int PSYNC:1;
      };

      struct {
         unsigned int T4MODE:5;
         unsigned int T4CKSYNC:1;
         unsigned int T4CKPOL:1;
         unsigned int T4PSYNC:1;
      };
   };
} MCU_T4HLT;
#byte MCU_T4HLT = 0x295
#byte T4HLT = 0x295

#byte MCU_T4RST = 0x297

#byte MCU_T6TMR = 0x298

#byte MCU_T6PR = 0x299

struct MCU_T6CON {
   union {
      struct {
         unsigned int OUTPS:4;
         unsigned int CKPS:3;
         unsigned int ON:1;
      };

   union {
      struct {
         unsigned int T6OUTPS:4;
         unsigned int T6CKPS:3;
         unsigned int T6ON:1;
      };
   };

      struct {
         unsigned int :7;
         unsigned int TMR6ON:1;
      };
   };
} MCU_T6CON;
#byte MCU_T6CON = 0x29A
#byte T6CON = 0x29A

struct MCU_T6HLT {
   union {
      struct {
         unsigned int MODE:5;
         unsigned int CKSYNC:1;
         unsigned int CKPOL:1;
         unsigned int PSYNC:1;
      };

      struct {
         unsigned int T6MODE:5;
         unsigned int T6CKSYNC:1;
         unsigned int T6CKPOL:1;
         unsigned int T6PSYNC:1;
      };
   };
} MCU_T6HLT;
#byte MCU_T6HLT = 0x29B
#byte T6HLT = 0x29B

#byte MCU_T6RST = 0x29D

#word MCU_CCPR1 = 0x30C

struct MCU_CCP1CON {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int FMT:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CCP1MODE:4;
         unsigned int CCP1FMT:1;
         unsigned int CCP1OUT:1;
         unsigned int CCP1OE:1;
         unsigned int CCP1EN:1;
      };
   };

      struct {
         unsigned int :6;
         unsigned int P1M:2;
      };
   };
} MCU_CCP1CON;
#byte MCU_CCP1CON = 0x30E
#byte CCP1CON = 0x30E


struct MCU_CCP1CAP {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP1CTS:8;
      };
   };
} MCU_CCP1CAP;
#byte MCU_CCP1CAP = 0x30F
#byte CCP1CAP = 0x30F

#word MCU_CCPR2 = 0x310

struct MCU_CCP2CON {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int FMT:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CCP2MODE:4;
         unsigned int CCP2FMT:1;
         unsigned int CCP2OUT:1;
         unsigned int CCP2OE:1;
         unsigned int CCP2EN:1;
      };
   };

      struct {
         unsigned int :6;
         unsigned int P2M:2;
      };
   };
} MCU_CCP2CON;
#byte MCU_CCP2CON = 0x312
#byte CCP2CON = 0x312


struct MCU_CCP2CAP {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP2CTS:8;
      };
   };
} MCU_CCP2CAP;
#byte MCU_CCP2CAP = 0x313
#byte CCP2CAP = 0x313

#word MCU_CCPR3 = 0x314

struct MCU_CCP3CON {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int FMT:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CCP3MODE:4;
         unsigned int CCP3FMT:1;
         unsigned int CCP3OUT:1;
         unsigned int CCP3OE:1;
         unsigned int CCP3EN:1;
      };
   };

      struct {
         unsigned int :6;
         unsigned int P3M:2;
      };
   };
} MCU_CCP3CON;
#byte MCU_CCP3CON = 0x316
#byte CCP3CON = 0x316


struct MCU_CCP3CAP {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP3CTS:8;
      };
   };
} MCU_CCP3CAP;
#byte MCU_CCP3CAP = 0x317
#byte CCP3CAP = 0x317

#word MCU_CCPR4 = 0x318

struct MCU_CCP4CON {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int FMT:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CCP4MODE:4;
         unsigned int CCP4FMT:1;
         unsigned int CCP4OUT:1;
         unsigned int CCP4OE:1;
         unsigned int CCP4EN:1;
      };
   };

      struct {
         unsigned int :6;
         unsigned int P4M:2;
      };
   };
} MCU_CCP4CON;
#byte MCU_CCP4CON = 0x31A
#byte CCP4CON = 0x31A


struct MCU_CCP4CAP {
   union {
      struct {
         unsigned int CTS:8;
      };

      struct {
         unsigned int CCP4CTS:8;
      };
   };
} MCU_CCP4CAP;
#byte MCU_CCP4CAP = 0x31B
#byte CCP4CAP = 0x31B

#word MCU_CCPR5 = 0x31C

struct MCU_CCP5CON {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int FMT:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CCP5MODE:4;
         unsigned int CCP5FMT:1;
         unsigned int CCP5OUT:1;
         unsigned int CCP5OE:1;
         unsigned int CCP5EN:1;
      };
   };

      struct {
         unsigned int :6;
         unsigned int P5M:2;
      };
   };
} MCU_CCP5CON;
#byte MCU_CCP5CON = 0x31E
#byte CCP5CON = 0x31E

struct MCU_PWM6DCL {
   union {
      struct {
         unsigned int :6;
         unsigned int DC:2;
      };

   union {
      struct {
         unsigned int :6;
         unsigned int PWM6DC:2;
      };
   };

      struct {
         unsigned int :6;
         unsigned int PWMPW:2;
      };
   };
} MCU_PWM6DCL;
#byte MCU_PWM6DCL = 0x38C
#byte PWM6DCL = 0x38C

struct MCU_PWM6DCH {
   union {
      struct {
         unsigned int DC2:8;
      };

   union {
      struct {
         unsigned int PWM6DC2:8;
      };
   };

      struct {
         unsigned int PWMPW2:8;
      };
   };
} MCU_PWM6DCH;
#byte MCU_PWM6DCH = 0x38D
#byte PWM6DCH = 0x38D

struct MCU_PWM6CON {
   union {
      struct {
         unsigned int :4;
         unsigned int POL:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };

      struct {
         unsigned int :4;
         unsigned int PWM6POL:1;
         unsigned int PWM6OUT:1;
         unsigned int PWM6OE:1;
         unsigned int PWM6EN:1;
      };
   };
} MCU_PWM6CON;
#byte MCU_PWM6CON = 0x38E
#byte PWM6CON = 0x38E

struct MCU_SCANLADRL {
   union {
      struct {
         unsigned int LADR:8;
      };

      struct {
         unsigned int SCANLADR:8;
      };
   };
} MCU_SCANLADRL;
#byte MCU_SCANLADRL = 0x40C
#byte SCANLADRL = 0x40C

struct MCU_SCANLADRH {
   union {
      struct {
         unsigned int LADR8:2;
         unsigned int LADR1:6;
      };

      struct {
         unsigned int SCANLADR8:2;
         unsigned int SCANLADR1:6;
      };
   };
} MCU_SCANLADRH;
#byte MCU_SCANLADRH = 0x40D
#byte SCANLADRH = 0x40D

struct MCU_SCANHADRL {
   union {
      struct {
         unsigned int HADR:8;
      };

      struct {
         unsigned int SCANHADR:8;
      };
   };
} MCU_SCANHADRL;
#byte MCU_SCANHADRL = 0x40E
#byte SCANHADRL = 0x40E

struct MCU_SCANHADRH {
   union {
      struct {
         unsigned int HADR8:2;
         unsigned int HADR1:6;
      };

      struct {
         unsigned int SCANHADR8:2;
         unsigned int SCANHADR1:6;
      };
   };
} MCU_SCANHADRH;
#byte MCU_SCANHADRH = 0x40F
#byte SCANHADRH = 0x40F

struct MCU_SCANCON0 {
   union {
      struct {
         unsigned int MODE:2;
         unsigned int :1;
         unsigned int INTM:1;
         unsigned int INVALID:1;
         unsigned int BUSY:1;
         unsigned int SCANGO:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int SCANMODE:2;
         unsigned int :1;
         unsigned int SCANINTM:1;
         unsigned int SCANINVALID:1;
         unsigned int SCANBUSY:1;
         unsigned int :1;
         unsigned int SCANEN:1;
      };
   };

      struct {
         unsigned int :4;
         unsigned int DABORT:1;
      };
   };
} MCU_SCANCON0;
#byte MCU_SCANCON0 = 0x410
#byte SCANCON0 = 0x410

#byte MCU_SCANTRIG = 0x411

struct MCU_CRCDATL {
   unsigned int DATA:8;
} MCU_CRCDATL;
#byte MCU_CRCDATL = 0x416
#byte CRCDATL = 0x416

struct MCU_CRCDATH {
   unsigned int DATA8:2;
   unsigned int DATA1:6;
} MCU_CRCDATH;
#byte MCU_CRCDATH = 0x417
#byte CRCDATH = 0x417

struct MCU_CRCACCL {
   unsigned int ACC:8;
} MCU_CRCACCL;
#byte MCU_CRCACCL = 0x418
#byte CRCACCL = 0x418

struct MCU_CRCACCH {
   unsigned int ACC8:2;
   unsigned int ACC1:6;
} MCU_CRCACCH;
#byte MCU_CRCACCH = 0x419
#byte CRCACCH = 0x419

struct MCU_CRCSHIFTL {
   unsigned int SHFT:8;
} MCU_CRCSHIFTL;
#byte MCU_CRCSHIFTL = 0x41A
#byte CRCSHIFTL = 0x41A

struct MCU_CRCSHIFTH {
   unsigned int SHFT8:2;
   unsigned int SHFT1:6;
} MCU_CRCSHIFTH;
#byte MCU_CRCSHIFTH = 0x41B
#byte CRCSHIFTH = 0x41B

struct MCU_CRCXORL {
   unsigned int :1;
   unsigned int X1:7;
} MCU_CRCXORL;
#byte MCU_CRCXORL = 0x41C
#byte CRCXORL = 0x41C

struct MCU_CRCXORH {
   unsigned int X8:2;
   unsigned int X1:6;
} MCU_CRCXORH;
#byte MCU_CRCXORH = 0x41D
#byte CRCXORH = 0x41D

struct MCU_CRCCON0 {
   union {
      struct {
         unsigned int FULL:1;
         unsigned int SHIFTM:1;
         unsigned int :2;
         unsigned int ACCM:1;
         unsigned int BUSY:1;
         unsigned int CRCGO:1;
         unsigned int EN:1;
      };

      struct {
         unsigned int :7;
         unsigned int CRCEN:1;
      };
   };
} MCU_CRCCON0;
#byte MCU_CRCCON0 = 0x41E
#byte CRCCON0 = 0x41E

struct MCU_CRCCON1 {
   unsigned int PLEN:4;
   unsigned int DLEN:4;
} MCU_CRCCON1;
#byte MCU_CRCCON1 = 0x41F
#byte CRCCON1 = 0x41F

struct MCU_SMT1TMRL {
   union {
      struct {
         unsigned int TMR:8;
      };

      struct {
         unsigned int SMT1TMR:8;
      };
   };
} MCU_SMT1TMRL;
#byte MCU_SMT1TMRL = 0x48C
#byte SMT1TMRL = 0x48C

struct MCU_SMT1TMRH {
   union {
      struct {
         unsigned int TMR8:2;
         unsigned int TMR1:6;
      };

      struct {
         unsigned int SMT1TMR8:2;
         unsigned int SMT1TMR1:6;
      };
   };
} MCU_SMT1TMRH;
#byte MCU_SMT1TMRH = 0x48D
#byte SMT1TMRH = 0x48D

struct MCU_SMT1TMRU {
   union {
      struct {
         unsigned int TMR16:4;
         unsigned int TMR2:4;
      };

      struct {
         unsigned int SMT1TMR16:4;
         unsigned int SMT1TMR2:4;
      };
   };
} MCU_SMT1TMRU;
#byte MCU_SMT1TMRU = 0x48E
#byte SMT1TMRU = 0x48E

struct MCU_SMT1CPRL {
   union {
      struct {
         unsigned int CPR:8;
      };

      struct {
         unsigned int SMT1CPR:8;
      };
   };
} MCU_SMT1CPRL;
#byte MCU_SMT1CPRL = 0x48F
#byte SMT1CPRL = 0x48F

struct MCU_SMT1CPRH {
   union {
      struct {
         unsigned int CPR8:2;
         unsigned int CPR1:6;
      };

      struct {
         unsigned int SMT1CPR8:2;
         unsigned int SMT1CPR1:6;
      };
   };
} MCU_SMT1CPRH;
#byte MCU_SMT1CPRH = 0x490
#byte SMT1CPRH = 0x490

struct MCU_SMT1CPRU {
   union {
      struct {
         unsigned int CPR16:4;
         unsigned int CPR2:4;
      };

      struct {
         unsigned int SMT1CPR16:4;
         unsigned int SMT1CPR2:4;
      };
   };
} MCU_SMT1CPRU;
#byte MCU_SMT1CPRU = 0x491
#byte SMT1CPRU = 0x491

struct MCU_SMT1CPWL {
   union {
      struct {
         unsigned int CPW:8;
      };

      struct {
         unsigned int SMT1CPW:8;
      };
   };
} MCU_SMT1CPWL;
#byte MCU_SMT1CPWL = 0x492
#byte SMT1CPWL = 0x492

struct MCU_SMT1CPWH {
   union {
      struct {
         unsigned int CPW8:2;
         unsigned int CPW1:6;
      };

      struct {
         unsigned int SMT1CPW8:2;
         unsigned int SMT1CPW1:6;
      };
   };
} MCU_SMT1CPWH;
#byte MCU_SMT1CPWH = 0x493
#byte SMT1CPWH = 0x493

struct MCU_SMT1CPWU {
   union {
      struct {
         unsigned int CPW16:4;
         unsigned int CPW2:4;
      };

      struct {
         unsigned int SMT1CPW16:4;
         unsigned int SMT1CPW2:4;
      };
   };
} MCU_SMT1CPWU;
#byte MCU_SMT1CPWU = 0x494
#byte SMT1CPWU = 0x494

struct MCU_SMT1PRL {
   union {
      struct {
         unsigned int PR:8;
      };

      struct {
         unsigned int SMT1PR:8;
      };
   };
} MCU_SMT1PRL;
#byte MCU_SMT1PRL = 0x495
#byte SMT1PRL = 0x495

struct MCU_SMT1PRH {
   union {
      struct {
         unsigned int PR8:2;
         unsigned int PR1:6;
      };

      struct {
         unsigned int SMT1PR8:2;
         unsigned int SMT1PR1:6;
      };
   };
} MCU_SMT1PRH;
#byte MCU_SMT1PRH = 0x496
#byte SMT1PRH = 0x496

struct MCU_SMT1PRU {
   union {
      struct {
         unsigned int PR16:4;
         unsigned int PR2:4;
      };

      struct {
         unsigned int SMT1PR16:4;
         unsigned int SMT1PR2:4;
      };
   };
} MCU_SMT1PRU;
#byte MCU_SMT1PRU = 0x497
#byte SMT1PRU = 0x497

struct MCU_SMT1CON0 {
   union {
      struct {
         unsigned int PS:2;
         unsigned int CPOL:1;
         unsigned int SPOL:1;
         unsigned int WPOL:1;
         unsigned int STP:1;
         unsigned int :1;
         unsigned int EN:1;
      };

      struct {
         unsigned int SMT1PS:2;
         unsigned int SMT1CPOL:1;
         unsigned int SMT1SPOL:1;
         unsigned int SMT1WOL:1;
         unsigned int SMT1STP:1;
         unsigned int :1;
         unsigned int SMT1EN:1;
      };
   };
} MCU_SMT1CON0;
#byte MCU_SMT1CON0 = 0x498
#byte SMT1CON0 = 0x498

struct MCU_SMT1CON1 {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int :2;
         unsigned int REPEAT:1;
         unsigned int GO:1;
      };

      struct {
         unsigned int :6;
         unsigned int SMT1REPEAT:1;
         unsigned int SMT1GO:1;
      };
   };
} MCU_SMT1CON1;
#byte MCU_SMT1CON1 = 0x499
#byte SMT1CON1 = 0x499

struct MCU_SMT1STAT {
   union {
      struct {
         unsigned int AS:1;
         unsigned int WS:1;
         unsigned int TS:1;
         unsigned int :2;
         unsigned int RST:1;
         unsigned int CPWUP:1;
         unsigned int CPRUP:1;
      };

   union {
      struct {
         unsigned int SMT1AS:1;
         unsigned int SMT1WS:1;
         unsigned int SMT1TS:1;
         unsigned int :2;
         unsigned int SMT1RESET:1;
         unsigned int SMT1CPWUP:1;
         unsigned int SMT1CPRUP:1;
      };
   };

      struct {
         unsigned int :5;
         unsigned int SMT1RST:1;
      };
   };
} MCU_SMT1STAT;
#byte MCU_SMT1STAT = 0x49A
#byte SMT1STAT = 0x49A

#byte MCU_SMT1CLK = 0x49B

#byte MCU_SMT1SIG = 0x49C

#byte MCU_SMT1WIN = 0x49D

struct MCU_SMT2TMRL {
   union {
      struct {
         unsigned int TMR:8;
      };

      struct {
         unsigned int SMT2TMR:8;
      };
   };
} MCU_SMT2TMRL;
#byte MCU_SMT2TMRL = 0x50C
#byte SMT2TMRL = 0x50C

struct MCU_SMT2TMRH {
   union {
      struct {
         unsigned int TMR8:2;
         unsigned int TMR1:6;
      };

      struct {
         unsigned int SMT2TMR8:2;
         unsigned int SMT2TMR1:6;
      };
   };
} MCU_SMT2TMRH;
#byte MCU_SMT2TMRH = 0x50D
#byte SMT2TMRH = 0x50D

struct MCU_SMT2TMRU {
   union {
      struct {
         unsigned int TMR16:4;
         unsigned int TMR2:4;
      };

      struct {
         unsigned int SMT2TMR16:4;
         unsigned int SMT2TMR2:4;
      };
   };
} MCU_SMT2TMRU;
#byte MCU_SMT2TMRU = 0x50E
#byte SMT2TMRU = 0x50E

struct MCU_SMT2CPRL {
   union {
      struct {
         unsigned int CPR:8;
      };

      struct {
         unsigned int SMT2CPR:8;
      };
   };
} MCU_SMT2CPRL;
#byte MCU_SMT2CPRL = 0x50F
#byte SMT2CPRL = 0x50F

struct MCU_SMT2CPRH {
   union {
      struct {
         unsigned int CPR8:2;
         unsigned int CPR1:6;
      };

      struct {
         unsigned int SMT2CPR8:2;
         unsigned int SMT2CPR1:6;
      };
   };
} MCU_SMT2CPRH;
#byte MCU_SMT2CPRH = 0x510
#byte SMT2CPRH = 0x510

struct MCU_SMT2CPRU {
   union {
      struct {
         unsigned int CPR16:4;
         unsigned int CPR2:4;
      };

      struct {
         unsigned int SMT2CPR16:4;
         unsigned int SMT2CPR2:4;
      };
   };
} MCU_SMT2CPRU;
#byte MCU_SMT2CPRU = 0x511
#byte SMT2CPRU = 0x511

struct MCU_SMT2CPWL {
   union {
      struct {
         unsigned int CPW:8;
      };

      struct {
         unsigned int SMT2CPW:8;
      };
   };
} MCU_SMT2CPWL;
#byte MCU_SMT2CPWL = 0x512
#byte SMT2CPWL = 0x512

struct MCU_SMT2CPWH {
   union {
      struct {
         unsigned int CPW8:2;
         unsigned int CPW1:6;
      };

      struct {
         unsigned int SMT2CPW8:2;
         unsigned int SMT2CPW1:6;
      };
   };
} MCU_SMT2CPWH;
#byte MCU_SMT2CPWH = 0x513
#byte SMT2CPWH = 0x513

struct MCU_SMT2CPWU {
   union {
      struct {
         unsigned int CPW16:4;
         unsigned int CPW2:4;
      };

      struct {
         unsigned int SMT2CPW16:4;
         unsigned int SMT2CPW2:4;
      };
   };
} MCU_SMT2CPWU;
#byte MCU_SMT2CPWU = 0x514
#byte SMT2CPWU = 0x514

struct MCU_SMT2PRL {
   union {
      struct {
         unsigned int PR:8;
      };

      struct {
         unsigned int SMT2PR:8;
      };
   };
} MCU_SMT2PRL;
#byte MCU_SMT2PRL = 0x515
#byte SMT2PRL = 0x515

struct MCU_SMT2PRH {
   union {
      struct {
         unsigned int PR8:2;
         unsigned int PR1:6;
      };

      struct {
         unsigned int SMT2PR8:2;
         unsigned int SMT2PR1:6;
      };
   };
} MCU_SMT2PRH;
#byte MCU_SMT2PRH = 0x516
#byte SMT2PRH = 0x516

struct MCU_SMT2PRU {
   union {
      struct {
         unsigned int PR16:4;
         unsigned int PR2:4;
      };

      struct {
         unsigned int SMT2PR16:4;
         unsigned int SMT2PR2:4;
      };
   };
} MCU_SMT2PRU;
#byte MCU_SMT2PRU = 0x517
#byte SMT2PRU = 0x517

struct MCU_SMT2CON0 {
   union {
      struct {
         unsigned int PS:2;
         unsigned int CPOL:1;
         unsigned int SPOL:1;
         unsigned int WPOL:1;
         unsigned int STP:1;
         unsigned int :1;
         unsigned int EN:1;
      };

      struct {
         unsigned int SMT2PS:2;
         unsigned int SMT2CPOL:1;
         unsigned int SMT2SPOL:1;
         unsigned int SMT2WOL:1;
         unsigned int SMT2STP:1;
         unsigned int :1;
         unsigned int SMT2EN:1;
      };
   };
} MCU_SMT2CON0;
#byte MCU_SMT2CON0 = 0x518
#byte SMT2CON0 = 0x518

struct MCU_SMT2CON1 {
   union {
      struct {
         unsigned int MODE:4;
         unsigned int :2;
         unsigned int REPEAT:1;
         unsigned int GO:1;
      };

      struct {
         unsigned int :6;
         unsigned int SMT2REPEAT:1;
         unsigned int SMT2GO:1;
      };
   };
} MCU_SMT2CON1;
#byte MCU_SMT2CON1 = 0x519
#byte SMT2CON1 = 0x519

struct MCU_SMT2STAT {
   union {
      struct {
         unsigned int AS:1;
         unsigned int WS:1;
         unsigned int TS:1;
         unsigned int :2;
         unsigned int RST:1;
         unsigned int CPWUP:1;
         unsigned int CPRUP:1;
      };

   union {
      struct {
         unsigned int SMT2AS:1;
         unsigned int SMT2WS:1;
         unsigned int SMT2TS:1;
         unsigned int :2;
         unsigned int SMT2RESET:1;
         unsigned int SMT2CPWUP:1;
         unsigned int SMT2CPRUP:1;
      };
   };

      struct {
         unsigned int :5;
         unsigned int SMT2RST:1;
      };
   };
} MCU_SMT2STAT;
#byte MCU_SMT2STAT = 0x51A
#byte SMT2STAT = 0x51A

#byte MCU_SMT2CLK = 0x51B

#byte MCU_SMT2SIG = 0x51C

#byte MCU_SMT2WIN = 0x51D

struct MCU_NCO1ACCL {
   unsigned int NCO1ACC:8;
} MCU_NCO1ACCL;
#byte MCU_NCO1ACCL = 0x58C
#byte NCO1ACCL = 0x58C

struct MCU_NCO1ACCH {
   unsigned int NCO1ACC8:2;
   unsigned int NCO1ACC1:6;
} MCU_NCO1ACCH;
#byte MCU_NCO1ACCH = 0x58D
#byte NCO1ACCH = 0x58D

struct MCU_NCO1ACCU {
   unsigned int NCO1ACC16:4;
   unsigned int NCO1ACC2:4;
} MCU_NCO1ACCU;
#byte MCU_NCO1ACCU = 0x58E
#byte NCO1ACCU = 0x58E

struct MCU_NCO1INCL {
   unsigned int NCO1INC:8;
} MCU_NCO1INCL;
#byte MCU_NCO1INCL = 0x58F
#byte NCO1INCL = 0x58F

struct MCU_NCO1INCH {
   unsigned int NCO1INC8:2;
   unsigned int NCO1INC1:6;
} MCU_NCO1INCH;
#byte MCU_NCO1INCH = 0x590
#byte NCO1INCH = 0x590

struct MCU_NCO1INCU {
   unsigned int NCO1INC16:4;
   unsigned int NCO1INC2:4;
} MCU_NCO1INCU;
#byte MCU_NCO1INCU = 0x591
#byte NCO1INCU = 0x591

struct MCU_NCO1CON {
   unsigned int N1PFM:1;
   unsigned int :3;
   unsigned int N1POL:1;
   unsigned int N1OUT:1;
   unsigned int N1OE:1;
   unsigned int N1EN:1;
} MCU_NCO1CON;
#byte MCU_NCO1CON = 0x592
#byte NCO1CON = 0x592

struct MCU_NCO1CLK {
   unsigned int N1CKS:4;
   unsigned int :1;
   unsigned int N1PWS:3;
} MCU_NCO1CLK;
#byte MCU_NCO1CLK = 0x593
#byte NCO1CLK = 0x593

struct MCU_CWG1CLKCON {
   union {
      struct {
         unsigned int CS:1;
      };

      struct {
         unsigned int CWG1CS:1;
      };
   };
} MCU_CWG1CLKCON;
#byte MCU_CWG1CLKCON = 0x60C
#byte CWG1CLKCON = 0x60C

#byte MCU_CWG1ISM = 0x60D

#byte MCU_CWG1DBR = 0x60E

#byte MCU_CWG1DBF = 0x60F

struct MCU_CWG1CON0 {
   union {
      struct {
         unsigned int MODE:3;
         unsigned int :3;
         unsigned int LD:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CWG1MODE:3;
         unsigned int :3;
         unsigned int CWG1LD:1;
         unsigned int G1EN:1;
      };
   };

      struct {
         unsigned int :7;
         unsigned int CWG1EN:1;
      };
   };
} MCU_CWG1CON0;
#byte MCU_CWG1CON0 = 0x610
#byte CWG1CON0 = 0x610

struct MCU_CWG1CON1 {
   union {
      struct {
         unsigned int POLA:1;
         unsigned int POLB:1;
         unsigned int POLC:1;
         unsigned int POLD:1;
         unsigned int :1;
         unsigned int IN:1;
      };

      struct {
         unsigned int CWG1POLA:1;
         unsigned int CWG1POLB:1;
         unsigned int CWG1POLC:1;
         unsigned int CWG1POLD:1;
         unsigned int :1;
         unsigned int CWG1IN:1;
      };
   };
} MCU_CWG1CON1;
#byte MCU_CWG1CON1 = 0x611
#byte CWG1CON1 = 0x611

struct MCU_CWG1AS0 {
   union {
      struct {
         unsigned int :2;
         unsigned int LSAC:2;
         unsigned int LSBD:2;
         unsigned int REN:1;
         unsigned int SHUTDOWN:1;
      };

      struct {
         unsigned int :2;
         unsigned int CWG1LSAC:2;
         unsigned int CWG1LSBD:2;
         unsigned int CWG1REN:1;
         unsigned int CWG1SHUTDOWN:1;
      };
   };
} MCU_CWG1AS0;
#byte MCU_CWG1AS0 = 0x612
#byte CWG1AS0 = 0x612

struct MCU_CWG1AS1 {
   unsigned int AS0E:1;
   unsigned int AS1E:1;
   unsigned int AS2E:1;
   unsigned int AS3E:1;
   unsigned int AS4E:1;
   unsigned int AS5E:1;
   unsigned int AS6E:1;
} MCU_CWG1AS1;
#byte MCU_CWG1AS1 = 0x613
#byte CWG1AS1 = 0x613

struct MCU_CWG1STR {
   union {
      struct {
         unsigned int STRA:1;
         unsigned int STRB:1;
         unsigned int STRC:1;
         unsigned int STRD:1;
         unsigned int OVRA:1;
         unsigned int OVRB:1;
         unsigned int OVRC:1;
         unsigned int OVRD:1;
      };

      struct {
         unsigned int CWG1STRA:1;
         unsigned int CWG1STRB:1;
         unsigned int CWG1STRC:1;
         unsigned int CWG1STRD:1;
         unsigned int CWG1OVRA:1;
         unsigned int CWG1OVRB:1;
         unsigned int CWG1OVRC:1;
         unsigned int CWG1OVRD:1;
      };
   };
} MCU_CWG1STR;
#byte MCU_CWG1STR = 0x614
#byte CWG1STR = 0x614

struct MCU_CWG2CLKCON {
   union {
      struct {
         unsigned int CS:1;
      };

      struct {
         unsigned int CWG2CS:1;
      };
   };
} MCU_CWG2CLKCON;
#byte MCU_CWG2CLKCON = 0x616
#byte CWG2CLKCON = 0x616

#byte MCU_CWG2ISM = 0x617

#byte MCU_CWG2DBR = 0x618

#byte MCU_CWG2DBF = 0x619

struct MCU_CWG2CON0 {
   union {
      struct {
         unsigned int MODE:3;
         unsigned int :3;
         unsigned int LD:1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int CWG2MODE:3;
         unsigned int :3;
         unsigned int CWG2LD:1;
         unsigned int G2EN:1;
      };
   };

      struct {
         unsigned int :7;
         unsigned int CWG2EN:1;
      };
   };
} MCU_CWG2CON0;
#byte MCU_CWG2CON0 = 0x61A
#byte CWG2CON0 = 0x61A

struct MCU_CWG2CON1 {
   union {
      struct {
         unsigned int POLA:1;
         unsigned int POLB:1;
         unsigned int POLC:1;
         unsigned int POLD:1;
         unsigned int :1;
         unsigned int IN:1;
      };

      struct {
         unsigned int CWG2POLA:1;
         unsigned int CWG2POLB:1;
         unsigned int CWG2POLC:1;
         unsigned int CWG2POLD:1;
         unsigned int :1;
         unsigned int CWG2IN:1;
      };
   };
} MCU_CWG2CON1;
#byte MCU_CWG2CON1 = 0x61B
#byte CWG2CON1 = 0x61B

struct MCU_CWG2AS0 {
   union {
      struct {
         unsigned int :2;
         unsigned int LSAC:2;
         unsigned int LSBD:2;
         unsigned int REN:1;
         unsigned int SHUTDOWN:1;
      };

      struct {
         unsigned int :2;
         unsigned int CWG2LSAC:2;
         unsigned int CWG2LSBD:2;
         unsigned int CWG2REN:1;
         unsigned int CWG2SHUTDOWN:1;
      };
   };
} MCU_CWG2AS0;
#byte MCU_CWG2AS0 = 0x61C
#byte CWG2AS0 = 0x61C

struct MCU_CWG2AS1 {
   unsigned int AS0E:1;
   unsigned int AS1E:1;
   unsigned int AS2E:1;
   unsigned int AS3E:1;
   unsigned int AS4E:1;
   unsigned int AS5E:1;
   unsigned int AS6E:1;
} MCU_CWG2AS1;
#byte MCU_CWG2AS1 = 0x61D
#byte CWG2AS1 = 0x61D

struct MCU_CWG2STR {
   union {
      struct {
         unsigned int STRA:1;
         unsigned int STRB:1;
         unsigned int STRC:1;
         unsigned int STRD:1;
         unsigned int OVRA:1;
         unsigned int OVRB:1;
         unsigned int OVRC:1;
         unsigned int OVRD:1;
      };

      struct {
         unsigned int CWG2STRA:1;
         unsigned int CWG2STRB:1;
         unsigned int CWG2STRC:1;
         unsigned int CWG2STRD:1;
         unsigned int CWG2OVRA:1;
         unsigned int CWG2OVRB:1;
         unsigned int CWG2OVRC:1;
         unsigned int CWG2OVRD:1;
      };
   };
} MCU_CWG2STR;
#byte MCU_CWG2STR = 0x61E
#byte CWG2STR = 0x61E

struct MCU_PIR0 {
   unsigned int INTF:1;
   unsigned int :3;
   unsigned int IOCIF:1;
   unsigned int TMR0IF:1;
} MCU_PIR0;
#byte MCU_PIR0 = 0x70C
#byte PIR0 = 0x70C

struct MCU_PIR1 {
   unsigned int ADIF:1;
   unsigned int ADTIF:1;
   unsigned int :4;
   unsigned int CSWIF:1;
   unsigned int OSFIF:1;
} MCU_PIR1;
#byte MCU_PIR1 = 0x70D
#byte PIR1 = 0x70D

struct MCU_PIR2 {
   unsigned int C1IF:1;
   unsigned int C2IF:1;
   unsigned int :4;
   unsigned int ZCDIF:1;
} MCU_PIR2;
#byte MCU_PIR2 = 0x70E
#byte PIR2 = 0x70E

struct MCU_PIR3 {
   unsigned int SSP1IF:1;
   unsigned int BCL1IF:1;
   unsigned int SSP2IF:1;
   unsigned int BCL2IF:1;
   unsigned int TXIF:1;
   unsigned int RCIF:1;
} MCU_PIR3;
#byte MCU_PIR3 = 0x70F
#byte PIR3 = 0x70F

struct MCU_PIR4 {
   unsigned int TMR1IF:1;
   unsigned int TMR2IF:1;
   unsigned int TMR3IF:1;
   unsigned int TMR4IF:1;
   unsigned int TMR5IF:1;
   unsigned int TMR6IF:1;
} MCU_PIR4;
#byte MCU_PIR4 = 0x710
#byte PIR4 = 0x710

struct MCU_PIR5 {
   unsigned int TMR1GIF:1;
   unsigned int TMR3GIF:1;
   unsigned int TMR5GIF:1;
   unsigned int :1;
   unsigned int CLC1IF:1;
   unsigned int CLC2IF:1;
   unsigned int CLC3IF:1;
   unsigned int CLC4IF:1;
} MCU_PIR5;
#byte MCU_PIR5 = 0x711
#byte PIR5 = 0x711

struct MCU_PIR6 {
   unsigned int CCP1IF:1;
   unsigned int CCP2IF:1;
   unsigned int CCP3IF:1;
   unsigned int CCP4IF:1;
   unsigned int CCP5IF:1;
} MCU_PIR6;
#byte MCU_PIR6 = 0x712
#byte PIR6 = 0x712

struct MCU_PIE0 {
   unsigned int INTE:1;
   unsigned int :3;
   unsigned int IOCIE:1;
   unsigned int TMR0IE:1;
} MCU_PIE0;
#byte MCU_PIE0 = 0x716
#byte PIE0 = 0x716

struct MCU_PIE1 {
   unsigned int ADIE:1;
   unsigned int ADTIE:1;
   unsigned int :4;
   unsigned int CSWIE:1;
   unsigned int OSFIE:1;
} MCU_PIE1;
#byte MCU_PIE1 = 0x717
#byte PIE1 = 0x717

struct MCU_PIE2 {
   unsigned int C1IE:1;
   unsigned int C2IE:1;
   unsigned int :4;
   unsigned int ZCDIE:1;
} MCU_PIE2;
#byte MCU_PIE2 = 0x718
#byte PIE2 = 0x718

struct MCU_PIE3 {
   unsigned int SSP1IE:1;
   unsigned int BCL1IE:1;
   unsigned int SSP2IE:1;
   unsigned int BCL2IE:1;
   unsigned int TXIE:1;
   unsigned int RCIE:1;
} MCU_PIE3;
#byte MCU_PIE3 = 0x719
#byte PIE3 = 0x719

struct MCU_PIE4 {
   unsigned int TMR1IE:1;
   unsigned int TMR2IE:1;
   unsigned int TMR3IE:1;
   unsigned int TMR4IE:1;
   unsigned int TMR5IE:1;
   unsigned int TMR6IE:1;
} MCU_PIE4;
#byte MCU_PIE4 = 0x71A
#byte PIE4 = 0x71A

struct MCU_PIE5 {
   unsigned int TMR1GIE:1;
   unsigned int TMR3GIE:1;
   unsigned int TMR5GIE:1;
   unsigned int :1;
   unsigned int CLC1IE:1;
   unsigned int CLC2IE:1;
   unsigned int CLC3IE:1;
   unsigned int CLC4IE:1;
} MCU_PIE5;
#byte MCU_PIE5 = 0x71B
#byte PIE5 = 0x71B

struct MCU_PIE6 {
   unsigned int CCP1IE:1;
   unsigned int CCP2IE:1;
   unsigned int CCP3IE:1;
   unsigned int CCP4IE:1;
   unsigned int CCP5IE:1;
} MCU_PIE6;
#byte MCU_PIE6 = 0x71C
#byte PIE6 = 0x71C

struct MCU_PMD0 {
   unsigned int IOCMD:1;
   unsigned int CLKRMD:1;
   unsigned int NVMMD:1;
   unsigned int SCANMD:1;
   unsigned int CRCMD:1;
   unsigned int :1;
   unsigned int FVRMD:1;
   unsigned int SYSCMD:1;
} MCU_PMD0;
#byte MCU_PMD0 = 0x796
#byte PMD0 = 0x796

struct MCU_PMD1 {
   union {
      struct {
         unsigned int TMR0MD:1;
         unsigned int TMR1MD:1;
         unsigned int TMR2MD:1;
         unsigned int TMR3MD:1;
         unsigned int TMR4MD:1;
         unsigned int TMR5MD:1;
         unsigned int TMR6MD:1;
         unsigned int NCOMD:1;
      };

      struct {
         unsigned int :7;
         unsigned int NCO1MD:1;
      };
   };
} MCU_PMD1;
#byte MCU_PMD1 = 0x797
#byte PMD1 = 0x797

struct MCU_PMD2 {
   unsigned int ZCDMD:1;
   unsigned int CMP1MD:1;
   unsigned int CMP2MD:1;
   unsigned int :2;
   unsigned int ADCMD:1;
   unsigned int DACMD:1;
} MCU_PMD2;
#byte MCU_PMD2 = 0x798
#byte PMD2 = 0x798

struct MCU_PMD3 {
   unsigned int CCP1MD:1;
   unsigned int CCP2MD:1;
   unsigned int CCP3MD:1;
   unsigned int CCP4MD:1;
   unsigned int CCP5MD:1;
   unsigned int PWM6MD:1;
   unsigned int PWM7MD:1;
} MCU_PMD3;
#byte MCU_PMD3 = 0x799
#byte PMD3 = 0x799

struct MCU_PMD4 {
   unsigned int CWG1MD:1;
   unsigned int CWG2MD:1;
   unsigned int CWG3MD:1;
   unsigned int :1;
   unsigned int MSSP1MD:1;
   unsigned int MSSP2MD:1;
   unsigned int UART1MD:1;
} MCU_PMD4;
#byte MCU_PMD4 = 0x79A
#byte PMD4 = 0x79A

struct MCU_PMD5 {
   unsigned int DSMMD:1;
   unsigned int CLC1MD:1;
   unsigned int CLC2MD:1;
   unsigned int CLC3MD:1;
   unsigned int CLC4MD:1;
   unsigned int :1;
   unsigned int SMT1MD:1;
   unsigned int SMT2MD:1;
} MCU_PMD5;
#byte MCU_PMD5 = 0x79B
#byte PMD5 = 0x79B

struct MCU_WDTCON0 {
   union {
      struct {
         unsigned int SEN:1;
         unsigned int WDTPS:5;
      };

   union {
      struct {
         unsigned int SWDTEN:1;
      };
   };

      struct {
         unsigned int WDTSEN:1;
      };
   };
} MCU_WDTCON0;
#byte MCU_WDTCON0 = 0x80C
#byte WDTCON0 = 0x80C

struct MCU_WDTCON1 {
   union {
      struct {
         unsigned int WINDOW:3;
         unsigned int :1;
         unsigned int WDTCS:3;
      };

      struct {
         unsigned int WDTWINDOW:3;
      };
   };
} MCU_WDTCON1;
#byte MCU_WDTCON1 = 0x80D
#byte WDTCON1 = 0x80D

struct MCU_WDTPSL {
   union {
      struct {
         unsigned int PSCNT:8;
      };

      struct {
         unsigned int WDTPSCNT:8;
      };
   };
} MCU_WDTPSL;
#byte MCU_WDTPSL = 0x80E
#byte WDTPSL = 0x80E

struct MCU_WDTPSH {
   union {
      struct {
         unsigned int PSCNT8:2;
         unsigned int PSCNT1:6;
      };

      struct {
         unsigned int WDTPSCNT8:2;
         unsigned int WDTPSCNT1:6;
      };
   };
} MCU_WDTPSH;
#byte MCU_WDTPSH = 0x80F
#byte WDTPSH = 0x80F

struct MCU_WDTTMR {
   union {
      struct {
         unsigned int PSCNT16:2;
         unsigned int STATE:1;
         unsigned int WDTTMR:5;
      };

      struct {
         unsigned int WDTPSCNT16:2;
         unsigned int WDTSTATE:1;
      };
   };
} MCU_WDTTMR;
#byte MCU_WDTTMR = 0x810
#byte WDTTMR = 0x810

struct MCU_BORCON {
   unsigned int BORRDY:1;
   unsigned int :6;
   unsigned int SBOREN:1;
} MCU_BORCON;
#byte MCU_BORCON = 0x811
#byte BORCON = 0x811


struct MCU_VREGCON {
   unsigned int :1;
   unsigned int VREGPM:1;
} MCU_VREGCON;
#byte MCU_VREGCON = 0x812
#byte VREGCON = 0x812

struct MCU_PCON0 {
   unsigned int BOR:1;
   unsigned int POR:1;
   unsigned int RI:1;
   unsigned int RMCLR:1;
   unsigned int RWDT:1;
   unsigned int WDTWV:1;
   unsigned int STKUNF:1;
   unsigned int STKOVF:1;
} MCU_PCON0;
#byte MCU_PCON0 = 0x813
#byte PCON0 = 0x813

struct MCU_CCDCON {
   unsigned int CCDS:2;
   unsigned int :5;
   unsigned int CCDEN:1;
} MCU_CCDCON;
#byte MCU_CCDCON = 0x814
#byte CCDCON = 0x814

struct MCU_NVMADRL {
   unsigned int NVMADR:8;
} MCU_NVMADRL;
#byte MCU_NVMADRL = 0x81A
#byte NVMADRL = 0x81A

struct MCU_NVMADRH {
   unsigned int NVMADR8:2;
   unsigned int NVMADR1:5;
} MCU_NVMADRH;
#byte MCU_NVMADRH = 0x81B
#byte NVMADRH = 0x81B

struct MCU_NVMDATL {
   unsigned int NVMDAT:8;
} MCU_NVMDATL;
#byte MCU_NVMDATL = 0x81C
#byte NVMDATL = 0x81C

struct MCU_NVMDATH {
   unsigned int NVMDAT8:2;
   unsigned int NVMDAT1:4;
} MCU_NVMDATH;
#byte MCU_NVMDATH = 0x81D
#byte NVMDATH = 0x81D

struct MCU_NVMCON1 {
   unsigned int RD:1;
   unsigned int WR:1;
   unsigned int WREN:1;
   unsigned int WRERR:1;
   unsigned int FREE:1;
   unsigned int LWLO:1;
   unsigned int NVMREGS:1;
} MCU_NVMCON1;
#byte MCU_NVMCON1 = 0x81E
#byte NVMCON1 = 0x81E

#byte MCU_NVMCON2 = 0x81F

struct MCU_CPUDOZE {
   unsigned int DOZE:3;
   unsigned int :1;
   unsigned int DOE:1;
   unsigned int ROI:1;
   unsigned int DOZEN:1;
   unsigned int IDLEN:1;
} MCU_CPUDOZE;
#byte MCU_CPUDOZE = 0x88C
#byte CPUDOZE = 0x88C

struct MCU_OSCCON1 {
   unsigned int NDIV:4;
   unsigned int NOSC:3;
} MCU_OSCCON1;
#byte MCU_OSCCON1 = 0x88D
#byte OSCCON1 = 0x88D

struct MCU_OSCCON2 {
   unsigned int CDIV:4;
   unsigned int COSC:3;
} MCU_OSCCON2;
#byte MCU_OSCCON2 = 0x88E
#byte OSCCON2 = 0x88E

struct MCU_OSCCON3 {
   unsigned int :3;
   unsigned int NOSCR:1;
   unsigned int ORDY:1;
   unsigned int :1;
   unsigned int SOSCPWR:1;
   unsigned int CSWHOLD:1;
} MCU_OSCCON3;
#byte MCU_OSCCON3 = 0x88F
#byte OSCCON3 = 0x88F

struct MCU_OSCSTAT {
   unsigned int PLLR:1;
   unsigned int :1;
   unsigned int ADOR:1;
   unsigned int SOR:1;
   unsigned int LFOR:1;
   unsigned int MFOR:1;
   unsigned int HFOR:1;
   unsigned int EXTOR:1;
} MCU_OSCSTAT;
#byte MCU_OSCSTAT = 0x890
#byte OSCSTAT = 0x890

struct MCU_OSCEN {
   unsigned int :2;
   unsigned int ADOEN:1;
   unsigned int SOSCEN:1;
   unsigned int LFOEN:1;
   unsigned int MFOEN:1;
   unsigned int HFOEN:1;
   unsigned int EXTOEN:1;
} MCU_OSCEN;
#byte MCU_OSCEN = 0x891
#byte OSCEN = 0x891

#byte MCU_OSCTUNE = 0x892

#byte MCU_OSCFRQ = 0x893

struct MCU_CLKRCON {
   unsigned int CLKRDIV:3;
   unsigned int CLKRDC:2;
   unsigned int :2;
   unsigned int CLKREN:1;
} MCU_CLKRCON;
#byte MCU_CLKRCON = 0x895
#byte CLKRCON = 0x895

#byte MCU_MDSRC = 0x899

#word MCU_MDCAR = 0x89A

struct MCU_FVRCON {
   unsigned int ADFVR:2;
   unsigned int CDAFVR:2;
   unsigned int TSRNG:1;
   unsigned int TSEN:1;
   unsigned int FVRRDY:1;
   unsigned int FVREN:1;
} MCU_FVRCON;
#byte MCU_FVRCON = 0x90C
#byte FVRCON = 0x90C

struct MCU_DAC1CON0 {
   union {
      struct {
         unsigned int NSS:1;
         unsigned int :1;
         unsigned int PSS:2;
         unsigned int OE2:1;
         unsigned int OE1:1;
         unsigned int :1;
         unsigned int EN:1;
      };

      struct {
         unsigned int DAC1NSS:1;
         unsigned int :1;
         unsigned int DAC1PSS:2;
         unsigned int DAC1OE2:1;
         unsigned int DAC1OE1:1;
         unsigned int :1;
         unsigned int DAC1EN:1;
      };
   };
} MCU_DAC1CON0;
#byte MCU_DAC1CON0 = 0x90E
#byte DAC1CON0 = 0x90E

#byte MCU_DAC1CON1 = 0x90F

struct MCU_ZCD1CON {
   union {
      struct {
         unsigned int INTN:1;
         unsigned int INTP:1;
         unsigned int :2;
         unsigned int POL:1;
         unsigned int OUT:1;
         unsigned int :1;
         unsigned int EN:1;
      };

   union {
      struct {
         unsigned int ZCD1INTN:1;
         unsigned int ZCD1INTP:1;
         unsigned int :2;
         unsigned int ZCD1POL:1;
         unsigned int ZCD1OUT:1;
         unsigned int :1;
         unsigned int ZCD1EN:1;
      };
   };

      struct {
         unsigned int ZCDINTN:1;
         unsigned int ZCDINTP:1;
         unsigned int :2;
         unsigned int ZCDPOL:1;
         unsigned int ZCDOUT:1;
         unsigned int :1;
         unsigned int ZCDEN:1;
      };
   };
} MCU_ZCD1CON;
#byte MCU_ZCD1CON = 0x91F
#byte ZCD1CON = 0x91F

struct MCU_CMOUT {
   union {
      struct {
         unsigned int MC1OUT:1;
         unsigned int MC2OUT:1;
      };

      struct {
         unsigned int C1OUT:1;
         unsigned int C2OUT:1;
      };
   };
} MCU_CMOUT;
#byte MCU_CMOUT = 0x98F
#byte CMOUT = 0x98F

struct MCU_CM1CON0 {
   union {
      struct {
         unsigned int SYNC:1;
         unsigned int HYS:1;
         unsigned int Reserved:1;
         unsigned int ZLF:1;
         unsigned int POL:1;
         unsigned int OE:1;
         unsigned int OUT:1;
         unsigned int ON:1;
      };

      struct {
         unsigned int C1SYNC:1;
         unsigned int C1HYS:1;
         unsigned int C1SP:1;
         unsigned int C1ZLF:1;
         unsigned int C1POL:1;
         unsigned int C1OE:1;
         unsigned int C1OUT:1;
         unsigned int C1ON:1;
      };
   };
} MCU_CM1CON0;
#byte MCU_CM1CON0 = 0x990
#byte CM1CON0 = 0x990

struct MCU_CM1CON1 {
   union {
      struct {
         unsigned int INTN:1;
         unsigned int INTP:1;
      };

      struct {
         unsigned int C1INTN:1;
         unsigned int C1INTP:1;
      };
   };
} MCU_CM1CON1;
#byte MCU_CM1CON1 = 0x991
#byte CM1CON1 = 0x991

#byte MCU_CM1NSEL = 0x992

#byte MCU_CM1PSEL = 0x993

struct MCU_CM2CON0 {
   union {
      struct {
         unsigned int SYNC:1;
         unsigned int HYS:1;
         unsigned int Reserved:1;
         unsigned int ZLF:1;
         unsigned int POL:1;
         unsigned int OE:1;
         unsigned int OUT:1;
         unsigned int ON:1;
      };

      struct {
         unsigned int C2SYNC:1;
         unsigned int C2HYS:1;
         unsigned int C2SP:1;
         unsigned int C2ZLF:1;
         unsigned int C2POL:1;
         unsigned int C2OE:1;
         unsigned int C2OUT:1;
         unsigned int C2ON:1;
      };
   };
} MCU_CM2CON0;
#byte MCU_CM2CON0 = 0x994
#byte CM2CON0 = 0x994

struct MCU_CM2CON1 {
   union {
      struct {
         unsigned int INTN:1;
         unsigned int INTP:1;
      };

      struct {
         unsigned int C2INTN:1;
         unsigned int C2INTP:1;
      };
   };
} MCU_CM2CON1;
#byte MCU_CM2CON1 = 0x995
#byte CM2CON1 = 0x995

#byte MCU_CM2NSEL = 0x996

#byte MCU_CM2PSEL = 0x997

struct MCU_CLCDATA {
   unsigned int MLC1OUT:1;
   unsigned int MLC2OUT:1;
   unsigned int MLC3OUT:1;
   unsigned int MLC4OUT:1;
} MCU_CLCDATA;
#byte MCU_CLCDATA = 0xE0F
#byte CLCDATA = 0xE0F

struct MCU_CLC1CON {
   union {
      struct {
         unsigned int LC1MODE:3;
         unsigned int LC1INTN:1;
         unsigned int LC1INTP:1;
         unsigned int LC1OUT:1;
         unsigned int LC1OE:1;
         unsigned int LC1EN:1;
      };

      struct {
         unsigned int MODE:3;
         unsigned int INTN:1;
         unsigned int INTP:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };
   };
} MCU_CLC1CON;
#byte MCU_CLC1CON = 0xE10
#byte CLC1CON = 0xE10

struct MCU_CLC1POL {
   union {
      struct {
         unsigned int LC1G1POL:1;
         unsigned int LC1G2POL:1;
         unsigned int LC1G3POL:1;
         unsigned int LC1G4POL:1;
         unsigned int :3;
         unsigned int LC1POL:1;
      };

      struct {
         unsigned int G1POL:1;
         unsigned int G2POL:1;
         unsigned int G3POL:1;
         unsigned int G4POL:1;
         unsigned int :3;
         unsigned int POL:1;
      };
   };
} MCU_CLC1POL;
#byte MCU_CLC1POL = 0xE11
#byte CLC1POL = 0xE11

struct MCU_CLC1SEL0 {
   union {
      struct {
         unsigned int LC1D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} MCU_CLC1SEL0;
#byte MCU_CLC1SEL0 = 0xE12
#byte CLC1SEL0 = 0xE12

struct MCU_CLC1SEL1 {
   union {
      struct {
         unsigned int LC1D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} MCU_CLC1SEL1;
#byte MCU_CLC1SEL1 = 0xE13
#byte CLC1SEL1 = 0xE13

struct MCU_CLC1SEL2 {
   union {
      struct {
         unsigned int LC1D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} MCU_CLC1SEL2;
#byte MCU_CLC1SEL2 = 0xE14
#byte CLC1SEL2 = 0xE14

struct MCU_CLC1SEL3 {
   union {
      struct {
         unsigned int LC1D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} MCU_CLC1SEL3;
#byte MCU_CLC1SEL3 = 0xE15
#byte CLC1SEL3 = 0xE15

struct MCU_CLC1GLS0 {
   union {
      struct {
         unsigned int LC1G1D1N:1;
         unsigned int LC1G1D1T:1;
         unsigned int LC1G1D2N:1;
         unsigned int LC1G1D2T:1;
         unsigned int LC1G1D3N:1;
         unsigned int LC1G1D3T:1;
         unsigned int LC1G1D4N:1;
         unsigned int LC1G1D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} MCU_CLC1GLS0;
#byte MCU_CLC1GLS0 = 0xE16
#byte CLC1GLS0 = 0xE16

struct MCU_CLC1GLS1 {
   union {
      struct {
         unsigned int LC1G2D1N:1;
         unsigned int LC1G2D1T:1;
         unsigned int LC1G2D2N:1;
         unsigned int LC1G2D2T:1;
         unsigned int LC1G2D3N:1;
         unsigned int LC1G2D3T:1;
         unsigned int LC1G2D4N:1;
         unsigned int LC1G2D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} MCU_CLC1GLS1;
#byte MCU_CLC1GLS1 = 0xE17
#byte CLC1GLS1 = 0xE17

struct MCU_CLC1GLS2 {
   union {
      struct {
         unsigned int LC1G3D1N:1;
         unsigned int LC1G3D1T:1;
         unsigned int LC1G3D2N:1;
         unsigned int LC1G3D2T:1;
         unsigned int LC1G3D3N:1;
         unsigned int LC1G3D3T:1;
         unsigned int LC1G3D4N:1;
         unsigned int LC1G3D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} MCU_CLC1GLS2;
#byte MCU_CLC1GLS2 = 0xE18
#byte CLC1GLS2 = 0xE18

struct MCU_CLC1GLS3 {
   union {
      struct {
         unsigned int LC1G4D1N:1;
         unsigned int LC1G4D1T:1;
         unsigned int LC1G4D2N:1;
         unsigned int LC1G4D2T:1;
         unsigned int LC1G4D3N:1;
         unsigned int LC1G4D3T:1;
         unsigned int LC1G4D4N:1;
         unsigned int LC1G4D4T:1;
      };

      struct {
         unsigned int G4D1N:1;
         unsigned int G4D1T:1;
         unsigned int G4D2N:1;
         unsigned int G4D2T:1;
         unsigned int G4D3N:1;
         unsigned int G4D3T:1;
         unsigned int G4D4N:1;
         unsigned int G4D4T:1;
      };
   };
} MCU_CLC1GLS3;
#byte MCU_CLC1GLS3 = 0xE19
#byte CLC1GLS3 = 0xE19

struct MCU_CLC2CON {
   union {
      struct {
         unsigned int LC2MODE:3;
         unsigned int LC2INTN:1;
         unsigned int LC2INTP:1;
         unsigned int LC2OUT:1;
         unsigned int LC2OE:1;
         unsigned int LC2EN:1;
      };

      struct {
         unsigned int MODE:3;
         unsigned int INTN:1;
         unsigned int INTP:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };
   };
} MCU_CLC2CON;
#byte MCU_CLC2CON = 0xE1A
#byte CLC2CON = 0xE1A

struct MCU_CLC2POL {
   union {
      struct {
         unsigned int LC2G1POL:1;
         unsigned int LC2G2POL:1;
         unsigned int LC2G3POL:1;
         unsigned int LC2G4POL:1;
         unsigned int :3;
         unsigned int LC2POL:1;
      };

      struct {
         unsigned int G1POL:1;
         unsigned int G2POL:1;
         unsigned int G3POL:1;
         unsigned int G4POL:1;
         unsigned int :3;
         unsigned int POL:1;
      };
   };
} MCU_CLC2POL;
#byte MCU_CLC2POL = 0xE1B
#byte CLC2POL = 0xE1B

struct MCU_CLC2SEL0 {
   union {
      struct {
         unsigned int LC2D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} MCU_CLC2SEL0;
#byte MCU_CLC2SEL0 = 0xE1C
#byte CLC2SEL0 = 0xE1C

struct MCU_CLC2SEL1 {
   union {
      struct {
         unsigned int LC2D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} MCU_CLC2SEL1;
#byte MCU_CLC2SEL1 = 0xE1D
#byte CLC2SEL1 = 0xE1D

struct MCU_CLC2SEL2 {
   union {
      struct {
         unsigned int LC2D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} MCU_CLC2SEL2;
#byte MCU_CLC2SEL2 = 0xE1E
#byte CLC2SEL2 = 0xE1E

struct MCU_CLC2SEL3 {
   union {
      struct {
         unsigned int LC2D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} MCU_CLC2SEL3;
#byte MCU_CLC2SEL3 = 0xE1F
#byte CLC2SEL3 = 0xE1F

struct MCU_CLC2GLS0 {
   union {
      struct {
         unsigned int LC2G1D1N:1;
         unsigned int LC2G1D1T:1;
         unsigned int LC2G1D2N:1;
         unsigned int LC2G1D2T:1;
         unsigned int LC2G1D3N:1;
         unsigned int LC2G1D3T:1;
         unsigned int LC2G1D4N:1;
         unsigned int LC2G1D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} MCU_CLC2GLS0;
#byte MCU_CLC2GLS0 = 0xE20
#byte CLC2GLS0 = 0xE20

struct MCU_CLC2GLS1 {
   union {
      struct {
         unsigned int LC2G2D1N:1;
         unsigned int LC2G2D1T:1;
         unsigned int LC2G2D2N:1;
         unsigned int LC2G2D2T:1;
         unsigned int LC2G2D3N:1;
         unsigned int LC2G2D3T:1;
         unsigned int LC2G2D4N:1;
         unsigned int LC2G2D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} MCU_CLC2GLS1;
#byte MCU_CLC2GLS1 = 0xE21
#byte CLC2GLS1 = 0xE21

struct MCU_CLC2GLS2 {
   union {
      struct {
         unsigned int LC2G3D1N:1;
         unsigned int LC2G3D1T:1;
         unsigned int LC2G3D2N:1;
         unsigned int LC2G3D2T:1;
         unsigned int LC2G3D3N:1;
         unsigned int LC2G3D3T:1;
         unsigned int LC2G3D4N:1;
         unsigned int LC2G3D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} MCU_CLC2GLS2;
#byte MCU_CLC2GLS2 = 0xE22
#byte CLC2GLS2 = 0xE22

struct MCU_CLC2GLS3 {
   union {
      struct {
         unsigned int LC2G4D1N:1;
         unsigned int LC2G4D1T:1;
         unsigned int LC2G4D2N:1;
         unsigned int LC2G4D2T:1;
         unsigned int LC2G4D3N:1;
         unsigned int LC2G4D3T:1;
         unsigned int LC2G4D4N:1;
         unsigned int LC2G4D4T:1;
      };

      struct {
         unsigned int G4D1N:1;
         unsigned int G4D1T:1;
         unsigned int G4D2N:1;
         unsigned int G4D2T:1;
         unsigned int G4D3N:1;
         unsigned int G4D3T:1;
         unsigned int G4D4N:1;
         unsigned int G4D4T:1;
      };
   };
} MCU_CLC2GLS3;
#byte MCU_CLC2GLS3 = 0xE23
#byte CLC2GLS3 = 0xE23

struct MCU_CLC3CON {
   union {
      struct {
         unsigned int LC3MODE:3;
         unsigned int LC3INTN:1;
         unsigned int LC3INTP:1;
         unsigned int LC3OUT:1;
         unsigned int LC3OE:1;
         unsigned int LC3EN:1;
      };

      struct {
         unsigned int MODE:3;
         unsigned int INTN:1;
         unsigned int INTP:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };
   };
} MCU_CLC3CON;
#byte MCU_CLC3CON = 0xE24
#byte CLC3CON = 0xE24

struct MCU_CLC3POL {
   union {
      struct {
         unsigned int LC3G1POL:1;
         unsigned int LC3G2POL:1;
         unsigned int LC3G3POL:1;
         unsigned int LC3G4POL:1;
         unsigned int :3;
         unsigned int LC3POL:1;
      };

      struct {
         unsigned int G1POL:1;
         unsigned int G2POL:1;
         unsigned int G3POL:1;
         unsigned int G4POL:1;
         unsigned int :3;
         unsigned int POL:1;
      };
   };
} MCU_CLC3POL;
#byte MCU_CLC3POL = 0xE25
#byte CLC3POL = 0xE25

struct MCU_CLC3SEL0 {
   union {
      struct {
         unsigned int LC3D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} MCU_CLC3SEL0;
#byte MCU_CLC3SEL0 = 0xE26
#byte CLC3SEL0 = 0xE26

struct MCU_CLC3SEL1 {
   union {
      struct {
         unsigned int LC3D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} MCU_CLC3SEL1;
#byte MCU_CLC3SEL1 = 0xE27
#byte CLC3SEL1 = 0xE27

struct MCU_CLC3SEL2 {
   union {
      struct {
         unsigned int LC3D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} MCU_CLC3SEL2;
#byte MCU_CLC3SEL2 = 0xE28
#byte CLC3SEL2 = 0xE28

struct MCU_CLC3SEL3 {
   union {
      struct {
         unsigned int LC3D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} MCU_CLC3SEL3;
#byte MCU_CLC3SEL3 = 0xE29
#byte CLC3SEL3 = 0xE29

struct MCU_CLC3GLS0 {
   union {
      struct {
         unsigned int LC3G1D1N:1;
         unsigned int LC3G1D1T:1;
         unsigned int LC3G1D2N:1;
         unsigned int LC3G1D2T:1;
         unsigned int LC3G1D3N:1;
         unsigned int LC3G1D3T:1;
         unsigned int LC3G1D4N:1;
         unsigned int LC3G1D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} MCU_CLC3GLS0;
#byte MCU_CLC3GLS0 = 0xE2A
#byte CLC3GLS0 = 0xE2A

struct MCU_CLC3GLS1 {
   union {
      struct {
         unsigned int LC3G2D1N:1;
         unsigned int LC3G2D1T:1;
         unsigned int LC3G2D2N:1;
         unsigned int LC3G2D2T:1;
         unsigned int LC3G2D3N:1;
         unsigned int LC3G2D3T:1;
         unsigned int LC3G2D4N:1;
         unsigned int LC3G2D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} MCU_CLC3GLS1;
#byte MCU_CLC3GLS1 = 0xE2B
#byte CLC3GLS1 = 0xE2B

struct MCU_CLC3GLS2 {
   union {
      struct {
         unsigned int LC3G3D1N:1;
         unsigned int LC3G3D1T:1;
         unsigned int LC3G3D2N:1;
         unsigned int LC3G3D2T:1;
         unsigned int LC3G3D3N:1;
         unsigned int LC3G3D3T:1;
         unsigned int LC3G3D4N:1;
         unsigned int LC3G3D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} MCU_CLC3GLS2;
#byte MCU_CLC3GLS2 = 0xE2C
#byte CLC3GLS2 = 0xE2C

struct MCU_CLC3GLS3 {
   union {
      struct {
         unsigned int LC3G4D1N:1;
         unsigned int LC3G4D1T:1;
         unsigned int LC3G4D2N:1;
         unsigned int LC3G4D2T:1;
         unsigned int LC3G4D3N:1;
         unsigned int LC3G4D3T:1;
         unsigned int LC3G4D4N:1;
         unsigned int LC3G4D4T:1;
      };

      struct {
         unsigned int G4D1N:1;
         unsigned int G4D1T:1;
         unsigned int G4D2N:1;
         unsigned int G4D2T:1;
         unsigned int G4D3N:1;
         unsigned int G4D3T:1;
         unsigned int G4D4N:1;
         unsigned int G4D4T:1;
      };
   };
} MCU_CLC3GLS3;
#byte MCU_CLC3GLS3 = 0xE2D
#byte CLC3GLS3 = 0xE2D

struct MCU_CLC4CON {
   union {
      struct {
         unsigned int LC4MODE:3;
         unsigned int LC4INTN:1;
         unsigned int LC4INTP:1;
         unsigned int LC4OUT:1;
         unsigned int LC4OE:1;
         unsigned int LC4EN:1;
      };

      struct {
         unsigned int MODE:3;
         unsigned int INTN:1;
         unsigned int INTP:1;
         unsigned int OUT:1;
         unsigned int OE:1;
         unsigned int EN:1;
      };
   };
} MCU_CLC4CON;
#byte MCU_CLC4CON = 0xE2E
#byte CLC4CON = 0xE2E

struct MCU_CLC4POL {
   union {
      struct {
         unsigned int LC4G1POL:1;
         unsigned int LC4G2POL:1;
         unsigned int LC4G3POL:1;
         unsigned int LC4G4POL:1;
         unsigned int :3;
         unsigned int LC4POL:1;
      };

      struct {
         unsigned int G1POL:1;
         unsigned int G2POL:1;
         unsigned int G3POL:1;
         unsigned int G4POL:1;
         unsigned int :3;
         unsigned int POL:1;
      };
   };
} MCU_CLC4POL;
#byte MCU_CLC4POL = 0xE2F
#byte CLC4POL = 0xE2F

struct MCU_CLC4SEL0 {
   union {
      struct {
         unsigned int LC4D1S:8;
      };

      struct {
         unsigned int D1S:8;
      };
   };
} MCU_CLC4SEL0;
#byte MCU_CLC4SEL0 = 0xE30
#byte CLC4SEL0 = 0xE30

struct MCU_CLC4SEL1 {
   union {
      struct {
         unsigned int LC4D2S:8;
      };

      struct {
         unsigned int D2S:8;
      };
   };
} MCU_CLC4SEL1;
#byte MCU_CLC4SEL1 = 0xE31
#byte CLC4SEL1 = 0xE31

struct MCU_CLC4SEL2 {
   union {
      struct {
         unsigned int LC4D3S:8;
      };

      struct {
         unsigned int D3S:8;
      };
   };
} MCU_CLC4SEL2;
#byte MCU_CLC4SEL2 = 0xE32
#byte CLC4SEL2 = 0xE32

struct MCU_CLC4SEL3 {
   union {
      struct {
         unsigned int LC4D4S:8;
      };

      struct {
         unsigned int D4S:8;
      };
   };
} MCU_CLC4SEL3;
#byte MCU_CLC4SEL3 = 0xE33
#byte CLC4SEL3 = 0xE33

struct MCU_CLC4GLS0 {
   union {
      struct {
         unsigned int LC4G1D1N:1;
         unsigned int LC4G1D1T:1;
         unsigned int LC4G1D2N:1;
         unsigned int LC4G1D2T:1;
         unsigned int LC4G1D3N:1;
         unsigned int LC4G1D3T:1;
         unsigned int LC4G1D4N:1;
         unsigned int LC4G1D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} MCU_CLC4GLS0;
#byte MCU_CLC4GLS0 = 0xE34
#byte CLC4GLS0 = 0xE34

struct MCU_CLC4GLS1 {
   union {
      struct {
         unsigned int LC4G2D1N:1;
         unsigned int LC4G2D1T:1;
         unsigned int LC4G2D2N:1;
         unsigned int LC4G2D2T:1;
         unsigned int LC4G2D3N:1;
         unsigned int LC4G2D3T:1;
         unsigned int LC4G2D4N:1;
         unsigned int LC4G2D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} MCU_CLC4GLS1;
#byte MCU_CLC4GLS1 = 0xE35
#byte CLC4GLS1 = 0xE35

struct MCU_CLC4GLS2 {
   union {
      struct {
         unsigned int LC4G3D1N:1;
         unsigned int LC4G3D1T:1;
         unsigned int LC4G3D2N:1;
         unsigned int LC4G3D2T:1;
         unsigned int LC4G3D3N:1;
         unsigned int LC4G3D3T:1;
         unsigned int LC4G3D4N:1;
         unsigned int LC4G3D4T:1;
      };

      struct {
         unsigned int D1N:1;
         unsigned int D1T:1;
         unsigned int D2N:1;
         unsigned int D2T:1;
         unsigned int D3N:1;
         unsigned int D3T:1;
         unsigned int D4N:1;
         unsigned int D4T:1;
      };
   };
} MCU_CLC4GLS2;
#byte MCU_CLC4GLS2 = 0xE36
#byte CLC4GLS2 = 0xE36

struct MCU_CLC4GLS3 {
   union {
      struct {
         unsigned int LC4G4D1N:1;
         unsigned int LC4G4D1T:1;
         unsigned int LC4G4D2N:1;
         unsigned int LC4G4D2T:1;
         unsigned int LC4G4D3N:1;
         unsigned int LC4G4D3T:1;
         unsigned int LC4G4D4N:1;
         unsigned int LC4G4D4T:1;
      };

      struct {
         unsigned int G4D1N:1;
         unsigned int G4D1T:1;
         unsigned int G4D2N:1;
         unsigned int G4D2T:1;
         unsigned int G4D3N:1;
         unsigned int G4D3T:1;
         unsigned int G4D4N:1;
         unsigned int G4D4T:1;
      };
   };
} MCU_CLC4GLS3;
#byte MCU_CLC4GLS3 = 0xE37
#byte CLC4GLS3 = 0xE37

struct MCU_PPSLOCK {
   unsigned int PPSLOCKED:1;
} MCU_PPSLOCK;
#byte MCU_PPSLOCK = 0xE8F
#byte PPSLOCK = 0xE8F

#byte MCU_INTPPS = 0xE90

#byte MCU_T0CKIPPS = 0xE91

#byte MCU_T1CKIPPS = 0xE92

#byte MCU_T1GPPS = 0xE93

#byte MCU_T3CKIPPS = 0xE94

#byte MCU_T3GPPS = 0xE95

#byte MCU_T5CKIPPS = 0xE96

#byte MCU_T5GPPS = 0xE97

#byte MCU_CCP1PPS = 0xEA1

#byte MCU_CCP2PPS = 0xEA2

#byte MCU_CCP3PPS = 0xEA3

#byte MCU_CCP4PPS = 0xEA4

#byte MCU_SMT1WINPPS = 0xEA9

#byte MCU_SMT1SIGPPS = 0xEAA

#byte MCU_SMT2WINPPS = 0xEAB

#byte MCU_SMT2SIGPPS = 0xEAC

#byte MCU_CWG1PPS = 0xEB1

#byte MCU_CWG2PPS = 0xEB2

#byte MCU_CLCIN0PPS = 0xEBB

#byte MCU_CLCIN1PPS = 0xEBC

#byte MCU_CLCIN2PPS = 0xEBD

#byte MCU_CLCIN3PPS = 0xEBE

#byte MCU_ADCACTPPS = 0xEC3

#byte MCU_SSP1CLKPPS = 0xEC5

#byte MCU_SSP1DATPPS = 0xEC6

#byte MCU_SSP1SSPPS = 0xEC7

#byte MCU_SSP2CLKPPS = 0xEC8

#byte MCU_SSP2DATPPS = 0xEC9

#byte MCU_SSP2SSPPS = 0xECA

#byte MCU_RXPPS = 0xECB

#byte MCU_TXPPS = 0xECC

#byte MCU_RA0PPS = 0xF10

#byte MCU_RA1PPS = 0xF11

#byte MCU_RA2PPS = 0xF12

#byte MCU_RA3PPS = 0xF13

#byte MCU_RA4PPS = 0xF14

#byte MCU_RA5PPS = 0xF15

#byte MCU_RA6PPS = 0xF16

#byte MCU_RA7PPS = 0xF17

#byte MCU_RB0PPS = 0xF18

#byte MCU_RB1PPS = 0xF19

#byte MCU_RB2PPS = 0xF1A

#byte MCU_RB3PPS = 0xF1B

#byte MCU_RB4PPS = 0xF1C

#byte MCU_RB5PPS = 0xF1D

#byte MCU_RB6PPS = 0xF1E

#byte MCU_RB7PPS = 0xF1F

#byte MCU_RC0PPS = 0xF20

#byte MCU_RC2PPS = 0xF22

#byte MCU_RC3PPS = 0xF23

#byte MCU_RC4PPS = 0xF24

#byte MCU_RC5PPS = 0xF25

#byte MCU_RC6PPS = 0xF26

#byte MCU_RC7PPS = 0xF27

struct MCU_ANSELA {
   unsigned int ANSA:8;
} MCU_ANSELA;
#byte MCU_ANSELA = 0xF38
#byte ANSELA = 0xF38

struct MCU_WPUA {
   unsigned int WPUA:8;
} MCU_WPUA;
#byte MCU_WPUA = 0xF39
#byte WPUA = 0xF39

struct MCU_ODCONA {
   unsigned int ODCA:8;
} MCU_ODCONA;
#byte MCU_ODCONA = 0xF3A
#byte ODCONA = 0xF3A

struct MCU_SLRCONA {
   unsigned int SLRA:8;
} MCU_SLRCONA;
#byte MCU_SLRCONA = 0xF3B
#byte SLRCONA = 0xF3B

struct MCU_INLVLA {
   unsigned int INLVLA:8;
} MCU_INLVLA;
#byte MCU_INLVLA = 0xF3C
#byte INLVLA = 0xF3C

struct MCU_IOCAP {
   unsigned int IOCAP:8;
} MCU_IOCAP;
#byte MCU_IOCAP = 0xF3D
#byte IOCAP = 0xF3D

struct MCU_IOCAN {
   unsigned int IOCAN:8;
} MCU_IOCAN;
#byte MCU_IOCAN = 0xF3E
#byte IOCAN = 0xF3E

struct MCU_IOCAF {
   unsigned int IOCAF:8;
} MCU_IOCAF;
#byte MCU_IOCAF = 0xF3F
#byte IOCAF = 0xF3F

struct MCU_CCDNA {
   unsigned int CCDNA:8;
} MCU_CCDNA;
#byte MCU_CCDNA = 0xF40
#byte CCDNA = 0xF40

struct MCU_CCDPA {
   unsigned int CCDPA:8;
} MCU_CCDPA;
#byte MCU_CCDPA = 0xF41
#byte CCDPA = 0xF41

struct MCU_ANSELB {
   unsigned int ANSB:8;
} MCU_ANSELB;
#byte MCU_ANSELB = 0xF43
#byte ANSELB = 0xF43

struct MCU_WPUB {
   unsigned int WPUB:8;
} MCU_WPUB;
#byte MCU_WPUB = 0xF44
#byte WPUB = 0xF44

struct MCU_ODCONB {
   unsigned int ODCB:8;
} MCU_ODCONB;
#byte MCU_ODCONB = 0xF45
#byte ODCONB = 0xF45

struct MCU_SLRCONB {
   unsigned int SLRB:8;
} MCU_SLRCONB;
#byte MCU_SLRCONB = 0xF46
#byte SLRCONB = 0xF46

struct MCU_INLVLB {
   unsigned int INLVLB:8;
} MCU_INLVLB;
#byte MCU_INLVLB = 0xF47
#byte INLVLB = 0xF47

struct MCU_IOCBP {
   unsigned int IOCBP:8;
} MCU_IOCBP;
#byte MCU_IOCBP = 0xF48
#byte IOCBP = 0xF48

struct MCU_IOCBN {
   unsigned int IOCBN:8;
} MCU_IOCBN;
#byte MCU_IOCBN = 0xF49
#byte IOCBN = 0xF49

struct MCU_IOCBF {
   unsigned int IOCBF:8;
} MCU_IOCBF;
#byte MCU_IOCBF = 0xF4A
#byte IOCBF = 0xF4A

struct MCU_CCDNB {
   unsigned int CCDNB:8;
} MCU_CCDNB;
#byte MCU_CCDNB = 0xF4B
#byte CCDNB = 0xF4B

struct MCU_CCDPB {
   unsigned int CCDPB:8;
} MCU_CCDPB;
#byte MCU_CCDPB = 0xF4C
#byte CCDPB = 0xF4C

struct MCU_ANSELC {
   unsigned int ANSC:8;
} MCU_ANSELC;
#byte MCU_ANSELC = 0xF4E
#byte ANSELC = 0xF4E

struct MCU_WPUC {
   unsigned int WPUC:8;
} MCU_WPUC;
#byte MCU_WPUC = 0xF4F
#byte WPUC = 0xF4F

struct MCU_ODCONC {
   unsigned int ODCC:8;
} MCU_ODCONC;
#byte MCU_ODCONC = 0xF50
#byte ODCONC = 0xF50

struct MCU_SLRCONC {
   unsigned int SLRC:8;
} MCU_SLRCONC;
#byte MCU_SLRCONC = 0xF51
#byte SLRCONC = 0xF51

struct MCU_INLVLC {
   unsigned int INLVLC:8;
} MCU_INLVLC;
#byte MCU_INLVLC = 0xF52
#byte INLVLC = 0xF52

struct MCU_IOCCP {
   unsigned int IOCCP:8;
} MCU_IOCCP;
#byte MCU_IOCCP = 0xF53
#byte IOCCP = 0xF53

struct MCU_IOCCN {
   unsigned int IOCCN:8;
} MCU_IOCCN;
#byte MCU_IOCCN = 0xF54
#byte IOCCN = 0xF54

struct MCU_IOCCF {
   unsigned int IOCCF:8;
} MCU_IOCCF;
#byte MCU_IOCCF = 0xF55
#byte IOCCF = 0xF55

struct MCU_CCDNC {
   unsigned int CCDNC:8;
} MCU_CCDNC;
#byte MCU_CCDNC = 0xF56
#byte CCDNC = 0xF56

struct MCU_CCDPC {
   unsigned int CCDPC:8;
} MCU_CCDPC;
#byte MCU_CCDPC = 0xF57
#byte CCDPC = 0xF57

struct MCU_WPUE {
   unsigned int :3;
   unsigned int WPUE3:1;
} MCU_WPUE;
#byte MCU_WPUE = 0xF65
#byte WPUE = 0xF65

struct MCU_INLVLE {
   unsigned int :3;
   unsigned int INLVLE3:1;
} MCU_INLVLE;
#byte MCU_INLVLE = 0xF68
#byte INLVLE = 0xF68

struct MCU_IOCEP {
   unsigned int :3;
   unsigned int IOCEP3:1;
} MCU_IOCEP;
#byte MCU_IOCEP = 0xF69
#byte IOCEP = 0xF69

struct MCU_IOCEN {
   unsigned int :3;
   unsigned int IOCEN3:1;
} MCU_IOCEN;
#byte MCU_IOCEN = 0xF6A
#byte IOCEN = 0xF6A

struct MCU_IOCEF {
   unsigned int :3;
   unsigned int IOCEF3:1;
} MCU_IOCEF;
#byte MCU_IOCEF = 0xF6B
#byte IOCEF = 0xF6B

struct MCU_STATUS_SHAD {
   unsigned int C_SHAD:1;
   unsigned int DC_SHAD:1;
   unsigned int Z_SHAD:1;
} MCU_STATUS_SHAD;
#byte MCU_STATUS_SHAD = 0xFE4
#byte STATUS_SHAD = 0xFE4

#byte MCU_WREG_SHAD = 0xFE5

#byte MCU_BSR_SHAD = 0xFE6

#byte MCU_PCLATH_SHAD = 0xFE7

#byte MCU_FSR0L_SHAD = 0xFE8

#byte MCU_FSR0H_SHAD = 0xFE9

#byte MCU_FSR1L_SHAD = 0xFEA

#byte MCU_FSR1H_SHAD = 0xFEB

#byte MCU_STKPTR = 0xFED

#word MCU_TOS = 0xFEE

