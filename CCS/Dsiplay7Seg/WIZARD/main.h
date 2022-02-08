#include <16F18855.h>
#device ADC=10

#FUSES NOEXTOSC              	//External Oscillator not enabled
#FUSES RSTOSC_HFINTRC_32MHZ  	//On Power-up clock running from HFINTRC at 32 MHz
#FUSES NOBROWNOUT            	//No brownout reset

#use delay(internal=32MHz)
#use FIXED_IO( A_outputs=PIN_A3,PIN_A2,PIN_A1,PIN_A0 )
#use FIXED_IO( B_outputs=PIN_B7,PIN_B6,PIN_B5,PIN_B4,PIN_B3,PIN_B2,PIN_B1,PIN_B0 )
#define d1	PIN_B0
#define d2	PIN_B1
#define d3	PIN_B2
#define d4	PIN_B3


#pin_select U1TX = PIN_C0
#pin_select U1RX = PIN_C1

#use rs232(baud=9600,parity=N,xmit=PIN_C0,rcv=PIN_C1,bits=8,stream=PORT1)
#pin_select SDA1=PIN_C3
#pin_select SCL1=PIN_C4
#use i2c(Master,Fast,sda=PIN_C3,scl=PIN_C4,force_hw)

