
#include "mcc_generated_files/system/system.h"
#include "myLib_I2C.h"
#include "LCD_i2c.h"

/*
    Main application
*/
////////////////////////// cp ${ImagePath} x:/


//#define EMC1001    0b01110000
uint8_t EMC1001 =  0b0111000;
uint8_t dato[4], th,tl;

int main(void)
{
    uint8_t contador = 0;
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
    lcd_init();
    
    lcd_puts("\fHola mundo\ni2c MMC_Melody");
            


    while(1)
    {
        uint16_t adc = ADCC_GetSingleConversion(POT);
        I2C_Read1Byte(EMC1001,0,&th);
        I2C_Read1Byte(EMC1001,2,&tl);
        printf("Ejemplo i2c YouTube\ncontador: %d\tADC: %d\n",contador++,adc);
        printf("T: %d.%d\n", th,(tl>>6)*25);
        
        lcd_gotoxy(1,3);
        sprintf(buffer,"ADC: %04d",adc);
        lcd_puts(buffer);
        
        lcd_gotoxy(1,4);
        sprintf(buffer,"T: %d.%02d",th,(tl>>6)*25);
        lcd_puts(buffer);
        __delay_ms(500);
    }    
}