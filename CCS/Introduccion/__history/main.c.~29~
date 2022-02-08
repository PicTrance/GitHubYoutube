#include <16f18855.h>

#fuses RSTOSC_HFINTRC
#fuses NOEXTOSC,NOCLKOUT,NOCKS,NOFCMEN
#fuses MCLR,PUT,NOLPBOR,NOBROWNOUT,BORV24,ZCDDIS,NOPPS1WAY,NOSTVREN,NODEBUG
#fuses WDTSW,NOWDT,WDTWIN_100%,WDTCLK_LFINTRC
#fuses NOWRT,NOSCANE,NOLVP, NOPROTECT,NOCPD

//#use delay(internal=4M)
#use delay(clock=4MHz)
#use rs232(baud=9600,parity=N,xmit=PIN_C0,rcv=PIN_C1,bits=8)


void main(){
   setup_adc(ADC_OFF);
   setup_adc_ports(NO_ANALOGS);
   setup_oscillator(OSC_HFINTRC_4MHZ|OSC_CLK_DIV_BY_1);
   set_tris_a(0x00);       ///0 es para salida,  1, es para copnfigurar entrada
   set_tris_b(0x00);    //puerto b como salida
   
   
   output_high(Pin_a0);
   output_high(Pin_a3);

   while(1){
      output_high(Pin_a0);
      output_high(Pin_a3);
      output_high(Pin_b0);
      delay_ms(10);
      output_low(Pin_a0);
      output_low(Pin_a3);
      output_low(Pin_b0);
      delay_ms(10);
   }
}
