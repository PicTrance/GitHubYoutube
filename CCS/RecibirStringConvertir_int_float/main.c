#include <18f4550.h>
#fuses XT,MCLR,NODEBUG,NOWDT,CPUDIV1
#use delay(clock=4M)
#use rs232(baud=9600,parity=N,stop=1,xmit=PIN_C6,rcv=PIN_C7,bits=8)//,TIMEOUT=100,DISABLE_INTS)
#include <stdlib.h>     /* atof */ /* atoi */ 
#include "get_string.c"

   #define LCD_DB4   PIN_D4
   #define LCD_DB5   PIN_D5 
   #define LCD_DB6   PIN_D6 
   #define LCD_DB7   PIN_D7 
   #define LCD_RS    PIN_D0 
   //#define LCD_RW    PIN_D1 
   #define LCD_E     PIN_D2 
   #include "lcd20x4.c"

////Variables globales
char buffer[10];
int1 flag = 0;

#INT_RDA
void  RDA_isr(void){
   int i=0;
   do{
      buffer[i++] = getc();
      output_toggle(PIN_A0);
    }while( (buffer[i-1] !='\n') && (buffer[i-1] !='\r') );
    //}while( buffer[i-1] !='i');
    buffer[i-1] = '\0';
    flag = 1;
    //gets(buffer);//funcion bloquenate
    //flag = 1;
}

void main(){
   float numero = 0,num2;
   unsigned int8 contador = 0;
   delay_ms(500);
   lcd_init();
   lcd_putc("\fRecibir string\nTo int o float");
   printf("Hola mundo\n\rRecibir string y convertir a\n\rint o float\n\r");
   
   delay_ms(500);
   //enable_interrupts(INT_RTCC);
   //enable_interrupts(INT_TIMER0);
   //enable_interrupts(INT_TIMER1);
   enable_interrupts(INT_RDA);
   enable_interrupts(GLOBAL);
   
   while(TRUE){
      printf(lcd_putc,"\f%i",contador++); 
      if (flag==1){
         flag=0;
         numero = atof(buffer);
         num2 = numero/2;
          printf(lcd_putc," %s\n%f, %f",buffer,numero,num2);
          //delay_ms(500);
      }
      delay_ms(500);
   }

}
