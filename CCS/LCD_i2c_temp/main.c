//#case
#include <16f18855.h>
#include "PIC16F18855_registe.h"

//#fuses RSTOSC_HFINTRC
#fuses RSTOSC_HFINTRC_32MHZ
#fuses NOEXTOSC,NOCLKOUT,NOCKS,NOFCMEN
#fuses MCLR,PUT,NOLPBOR,NOBROWNOUT,BORV24,NOZCDDIS,NOPPS1WAY,NOSTVREN,NODEBUG
#fuses WDTSW,NOWDT,WDTWIN_100%,WDTCLK_LFINTRC
#fuses NOWRT,NOSCANE,NOLVP, NOPROTECT,NOCPD

//#use delay(internal=4M)
#use delay(clock=32MHz)
#use rs232(baud=9600,parity=N,xmit=PIN_C0,rcv=PIN_C1,bits=8)
#use i2c(master,slow,sda=PIN_C3,scl=PIN_C4)


#define addrr     0b01001111
#define addrw     0b01001110
#define PCF       112         // Puede ser 112 � 64 (PCF8574T=64, PCF8574A=112, PCF8574=64)
#include "LCD_i2c.c"

#define ONE_WIRE_PIN PIN_B1
#include "DS18b20yo.c"

const char Letra1[8]= {0b00000,0b11011,0b11011,0b00000,
                       0b11111,0b11111,0b01110,0b00000};
                       
void main(){
   float temp;
   int8  high_byte;
   unsigned int8 low_byte;
   setup_adc(NO_ANALOGS);
   setup_adc_ports(NO_ANALOGS);
   setup_comparator(NC_NC_NC_NC);
//!   setup_adc(ADC_LEGACY_MODE|ADC_CLOCK_DIV_2|ADC_ADRES_TO_ADPREV_AT_START );
//!   setup_adc_ports(sAN4|VSS_VDD);

   //setup_oscillator(OSC_HFINTRC_32MHZ|OSC_CLK_DIV_BY_1);
   
   //set_tris_a(0x00);       ///0 es para salida,  1, es para copnfigurar entrada
   //TRISA.TRISA0 = 1;
   set_tris_a(0b11110000);
   set_tris_b(0x00);    //puerto b como salida
   output_b(0);
   output_a(0);
   
   lcd_init();
   lcd_putc("\fHola 3\nsaludos");
   CGRAM_x(5);
   for(int i=0;i<=7 ;i++) lcd_send_byte(1,Letra1[i]);
   delay_ms(1000);
   
   while(TRUE){
      /*LATA.LATA0 = 1;
      delay_ms(500);
      LATA = 0;
      delay_ms(500);*/
      i2c_start(); 
      i2c_write(0b01110000);
      I2C_write(0);
      I2C_start();
      I2C_write(0b01110001); //LECTURA
      high_byte = I2C_read(0);
      I2C_stop();
         
      delay_us(50);
          
      I2C_start();
      I2C_write(0b01110000);  //ESCRITURA
      I2C_write(2);
      I2C_start();
      I2C_write(0b01110001); //LECTURA
      low_byte = I2C_read(1);
      I2C_stop();
      low_byte >>= 6;
      
      temp = ds18b20_read();
      printf(lcd_putc,"\fTEMP: %3.2f %cC\n:v %d.%d", temp,223,high_byte, low_byte);
      output_toggle(PIN_A0);
      delay_ms(1000);
   }
}
