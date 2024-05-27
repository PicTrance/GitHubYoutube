
#include "mcc_generated_files/system/system.h"
#include "myLib_I2C.h"
#include "LCD_i2c.h"

/*
    Main application
*/
//#define EMC1001    0b01110000
uint8_t EMC1001 =  0b0111000, EMC1001_Wdata = 0;
uint8_t dato[4], th,tl;

uint8_t contador=0;


int main(void)
{
    uint8_t status,buffer[10];
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    //INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 

    // Enable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptEnable(); 

    // Disable the Peripheral Interrupts 
    //INTERRUPT_PeripheralInterruptDisable(); 

    printf("\n\ni2c Melody\n\n\n" );
    lcd_init();
    lcd_puts("\f     Hola mundo\n   I2C MCC Melody");
    while(1)
    {
        static int contador = 0;
        uint16_t adc = ADCC_GetSingleConversion(POT);

        status = I2C_Read1Byte(EMC1001, 0, &th);
        status = I2C_Read1Byte(EMC1001, 2, &tl);
        printf("hola mundo: %d\tADC: %d\n",contador++,adc);
        printf("Status i2c: %d\n",status);
        printf("temp: %d.%d\n",th,((tl>>6)*25));
        
        lcd_gotoxy(1,3);
        sprintf(buffer,"T: %d.%d%cC",th,((tl>>6)*25),223);
        lcd_puts(buffer);
        lcd_gotoxy(1,4);
        sprintf(buffer,"ADC: %04d",adc);
        lcd_puts(buffer);
        if(SW_GetValue()==0){
            LED1_SetHigh();
        }else{
            LED1_SetLow();
        }
        __delay_ms(900);
    }    
}

