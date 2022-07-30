#include <18F4550.h>
#device PASS_STRINGS = IN_RAM

#define size_buffer 20                                                     // Tamaño de la cadena principal
                                                   // Libreria para descomposicion de tramas de datos
#use delay(crystal=20000000)
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=PORT1)
#FUSES NOWDT                    /*No Watch Dog Timer*/
#FUSES HS                       /*High speed Osc (> 4mhz) */
#FUSES PUT                      /*Power Up Timer*/
#FUSES NOPROTECT                /*Code not protected from reading*/
#FUSES NOBROWNOUT               /*No brownout reset*/
#FUSES NOMCLR                     /*Master Clear pin enabled*/
#FUSES NOLVP                    /*No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O*/
#FUSES NOCPD
#define LCD_ENABLE_PIN PIN_B0 // ASIGNAMOS EL PIN "B0" COMO SALIDA PARA E
#define LCD_RS_PIN PIN_B1 // ASIGNAMOS EL PIN "B1" COMO SALIDA PARA RSW
#define LCD_RW_PIN PIN_B2 // ASIGNAMOS EL PIN "B2" COMO SALIDA PARA RW
#define LCD_DATA4 PIN_B3 // ASIGNAMOS EL PIN "B3" COMO SALIDA PARA D4
#define LCD_DATA5 PIN_B4 // ASIGNAMOS EL PIN "B4" COMO SALIDA PARA D5
#define LCD_DATA6 PIN_B5 // ASIGNAMOS EL PIN "B5" COMO SALIDA PARA D6
#define LCD_DATA7 PIN_B6 // ASIGNAMOS EL PIN "B6" COMO SALIDA PARA D7
#include<lcd.c>
#define ok pin_D2
#BYTE TRISC=0X87
#BYTE TRISB=0XF93
#BYTE PORTB=0XF81

char trama_principal[size_buffer];                                         // Almacena la cadena recibida desde el puerto serial
char trama_1[10];                                                          // Almacena la trama 1
char trama_2[10];                                                          // Almacena la trama 2
int dato_rx[2]; 

#include <stdlib.h>
#include <get_string.c>                                                    // Libreria para lectura de cadenas de caractares
#include <get_plot.c>   

         
float setpoint = dato_rx[0];//valor de temperatura deceada
void SET_POINT(){
while (true)
   {
      if(kbhit() > 0)                                                      // Verificacion se ha recibido datos por el puerto serial
      {
         read_string(trama_principal, size_buffer);                        // Lee la cadena de caracteres principal
         read_plot('a','b', trama_principal, trama_1, size_buffer);        // Descompone la primer trama de datos
         read_plot('b','c', trama_principal, trama_2, size_buffer);        // Descompone la segunda trama de datos
         
         dato_rx[0] = atoi(trama_1);                                       // Convierte las cadenas de caracteres a datos enteros
         dato_rx[1] = atoi(trama_2);
      }
      }
while (true){

      lcd_gotoxy (1,1);printf(LCD_PUTC, "SET POINT %f       ",setpoint); //muestra la temperatura deceada
      lcd_gotoxy (1,2);printf(LCD_PUTC, "                   ");

      while (input(ok))//establece la temperatura para iniciar el sistema
      {
         delay_ms(200);
         if(!input(ok))
         {
            return;
         }
      }

      delay_ms(130);

   }
}

void main(){
   lcd_init ();
   SET_POINT();
   float valor=0.0;
   float  kp,ki,kd;
   float k1=0.0,k2=0.0,k3=0.0;
   float e0=0.0,e1=0.0,e2=0.0, u0=0.0,u1=0.0;
   float retroalimentacion=0.0;
   int16 max, min, duty;

   min=0;//valor minimo para el PWM
   max=997;//valor maximo para el PWM

//!   //constantes del PID
   kp=0.1248;
   ki=0.00624;//muestreo de 100ms
   kd=0.624;

   TRISC=0;
   setup_adc_ports(AN0);//selecciona el puerto AN0 como analogico
   setup_adc(ADC_CLOCK_INTERNAL|ADC_TAD_MUL_0);
   setup_timer_2(T2_DIV_BY_4,249,1); //interrupt 0-997 //ancho de PWM en 1ms
   setup_ccp1(CCP_PWM|CCP_SHUTDOWN_AC_L|CCP_SHUTDOWN_BD_L);
   set_adc_channel (0); //numero 0 = pin A0 //selecciona la entrada analogica

   while(TRUE)
   {

      while (input(ok))
      {
         delay_ms(200);
         if(!input(ok))
         {
            set_pwm1_duty(0);
            SET_POINT();
         }
      }

      valor=read_adc();   //lee el valor analogico de AN0
      retroalimentacion=(valor*500)/1023;// realizamos la convercion para obtener la temperatura real

      lcd_gotoxy (1,1);printf(LCD_PUTC, "SET POINT %f       ",setpoint);//muestra la temperatura deceada
      lcd_gotoxy (1,2);printf(LCD_PUTC, "TEMPERATURA %f       ", retroalimentacion);//muestra la temperatura actual

      e0=setpoint - retroalimentacion;//se obtiene el error del valor deceado - la salida del sistema

      k1=e0*(kp+ki+kd);
      k2=e1*((-2*kd)-kp);
      k3=e2*kd;
      u0=k1+k2+k3+u1;

      if (u0>=max)//asegurando que el valor de la salida no exeda el valor maximo permitido para el PWM
      {
         u0=max;
      }
      if (u0<=min)//asegurando que el valor de la salida no exeda el valor minimo permitido para el PWM
      {
         u0=min;
      }

      duty=u0+0;//la salida u0 se convierte de float a int16

      set_pwm1_duty(duty);//establece el ancho de pulso

      u1=u0;//el valor actual pasa a ser el valor anterior
      e2=e1;
      e1=e0;

      delay_ms(100);//se establece el tiempo de muestreo
   
   }
}
