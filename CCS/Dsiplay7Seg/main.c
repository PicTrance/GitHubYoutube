#include <16f18855.h>

#fuses RSTOSC_HFINTRC
//#fuses RSTOSC_HFINTRC_32MHZ
#fuses NOEXTOSC,NOCLKOUT,NOCKS,NOFCMEN
#fuses MCLR,PUT,NOLPBOR,NOBROWNOUT,BORV24,NOZCDDIS,NOPPS1WAY,NOSTVREN,NODEBUG
#fuses WDTSW,NOWDT,WDTWIN_100%,WDTCLK_LFINTRC
#fuses NOWRT,NOSCANE,NOLVP, NOPROTECT,NOCPD

//#use delay(internal=4M)
#use delay(clock=4MHz)
#use rs232(baud=9600,parity=N,xmit=PIN_C0,rcv=PIN_C1,bits=8)
//multiplexacion de display de 7 seg
//

#define d1 PIN_A0
#define d2 PIN_A1
#define d3 PIN_A2
#define d4 PIN_A3
int16 contador=0;
int8 u,d,c,um; //se separa en unidades
int8 flag=0;//flag para los display

#INT_TIMER0
void Ext_int_timer0(void){
   set_timer0(65534);
   
   if (flag == 1){
      
      output_b(u);
      output_a(1);
//!      output_high(d1);
//!      output_low(d2);
//!      output_low(d3);
   }
   if (flag == 2){
      
      output_b(d);
      output_a(2);
//!      output_high(d2);
//!      output_low(d1);
//!      output_low(d3);
   }
   if (flag == 3){
      flag = 0;
      output_b(c);
      output_a(4);
//!      output_high(d3);
//!      output_low(d2);
//!      output_low(d1);
   }   
   if (flag == 4){
      flag = 0;
      output_b(um);
      output_a(8);
   }
   flag++;

   
   //output_toggle(d3);
   
}

void main(){
   
   setup_adc(NO_ANALOGS);
   setup_adc_ports(NO_ANALOGS);
   setup_comparator(NC_NC_NC_NC);
//!   setup_adc(ADC_LEGACY_MODE|ADC_CLOCK_DIV_2|ADC_ADRES_TO_ADPREV_AT_START );
//!   setup_adc_ports(sAN4|VSS_VDD);

   setup_oscillator(OSC_HFINTRC_4MHZ|OSC_CLK_DIV_BY_1);
   setup_timer_0(T0_HFINTOSC| T0_16_BIT | T0_DIV_4096);
   set_timer0(65525);
   //set_tris_a(0x00);       ///0 es para salida,  1, es para copnfigurar entrada
   set_tris_a(0b11110000);
   set_tris_b(0x00);    //puerto b como salida
   output_b(0);
   output_a(0);
   
   ENABLE_INTERRUPTS(INT_TIMER0);
   ENABLE_INTERRUPTS(GLOBAL);
   ENABLE_INTERRUPTS(PERIPH);
   
   while(true){
      contador++;
      if (contador>999){contador=0;}
      u = contador%10;
      d = (contador/10)%10;
      c = (contador/100)%10;
      um = (contador/1000)%10;
      delay_ms(500);
   }
}
