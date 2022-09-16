#include <16F18855.h>
#device ADC=10

#fuses RSTOSC_HFINTRC_32MHZ
//#fuses RSTOSC_HFINTRC
//#fuses RSTOSC_HFINTRC_1MHZ
#fuses NOEXTOSC,NOCLKOUT,NOCKS,NOFCMEN
#fuses MCLR,PUT,NOLPBOR,NOBROWNOUT,BORV24,NOPPS1WAY,NOSTVREN,NODEBUG
#fuses WDTSW,NOWDT,WDTWIN_100%,WDTCLK_LFINTRC
#fuses NOWRT,NOSCANE,NOLVP, NOPROTECT,NOCPD
#fuses ZCDDIS
//#fuses NOZCDDIS
#use delay(clock=32M)
//#use delay(internal=32MHz)


//#use rs232(baud=9600,parity=N,xmit=PIN_C0,rcv=PIN_C1,bits=8,stream=PORT1,invert,float_high,errors)
#use rs232(baud=9600,parity=N,xmit=PIN_C0,rcv=PIN_C1,bits=8)
#use i2c(Master,slow,sda=PIN_C3,scl=PIN_C4)

int8  high_byte;
unsigned int8 low_byte;
float temp;
//bool flag =0;
int16 adc, timer;// timer = 6768;

#INT_EXT
void  EXT_isr(void) {
   set_timer5(timer);
   if (timer > 65530){
      output_bit(PIN_B1,1);
   }else{
      output_bit(PIN_B1,0);
   }
}

#INT_TIMER5
void  TIMER5_isr(void) {   
   if (timer <= 150){
      output_bit(PIN_B1,0);
   }else{
      output_bit(PIN_B1,1);
   }
}


float map(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}


void main()
{
   set_tris_b(0b00000001);
   set_tris_a(0b00110000);
   output_a(0);
   setup_adc_ports(sAN4, VSS_VDD);
   setup_adc(ADC_CLOCK_DIV_32 |  ADC_LEGACY_MODE );
   setup_timer_5(T5_FOSC | T5_SYNC | T5_DIV_BY_4);      //528 us overflow, 8.4 ms interrupt
   set_timer5(0);
   enable_interrupts(INT_EXT);
   enable_interrupts(INT_TIMER5);
   enable_interrupts(GLOBAL);   
   enable_interrupts(PERIPH);
   
   set_adc_channel(4);
   while(TRUE)
   {
      output_toggle(PIN_A0);
      adc = READ_ADC();
      timer = (int16)map(adc, 0, 1023, 0,65535);
      //printf("%LU\n",timer);

      delay_ms(500);
      //delay_ms(50);
   }

}
