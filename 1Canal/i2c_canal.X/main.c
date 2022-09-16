

#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#include "LCD_i2c.h"
#define sensoradd 0b0111000
                    //0b01110000
                    //0b01110001
#define ds1337add 0b1101000

uint8_t bin2bcd(uint8_t binary_value){
  uint8_t temp, retval;
  temp = binary_value;
  retval = 0;

  while(1){
    // Get the tens digit by doing multiple subtraction
    // of 10 from the binary value.
    if(temp >= 10){
      temp -= 10;
      retval += 0x10;
    }else{ // Get the ones digit by adding the remainder.
      retval += temp;
      break;
    }
  }

  return(retval);
}
// Input range - 00 to 99.
uint8_t bcd2bin(uint8_t bcd_value){
  uint8_t temp;
  temp = bcd_value;
  // Shifting upper digit right by 1 is same as multiplying by 8.
  temp >>= 1;
  // Isolate the bits for the upper digit.
  temp &= 0x78;

  // Now return: (Tens * 8) + (Tens * 2) + Ones
  return(temp + (temp >> 2) + (bcd_value & 0x0f));
}

void ds1337_init(void){
    uint8_t seconds = 0;
    seconds = I2C1_Read1ByteRegister(ds1337add, 0x00 );
    //seconds = bin2bcd(seconds & 0x7F);
    __delay_us(10);
    I2C1_Write1ByteRegister(ds1337add, 0x00, seconds);
}
void ds1337_get_time(uint8_t *hr, uint8_t *min, uint8_t *sec){
    *sec =  bcd2bin( I2C1_Read1ByteRegister(ds1337add ,  0x00) & 0x7f );
    *min =  bcd2bin( I2C1_Read1ByteRegister(ds1337add ,  0x01) & 0x7f );
    *hr  =  bcd2bin( I2C1_Read1ByteRegister(ds1337add ,  0x02) & 0x3f );
}

void ds1337_set_date_time(uint8_t day, uint8_t mth, uint8_t year, uint8_t hr, uint8_t min, uint8_t sec){
  sec &= 0x7F;
  hr &= 0x3F;

  I2C1_Write1ByteRegister(ds1337add, 0x00, bin2bcd(sec) );
  I2C1_Write1ByteRegister(ds1337add, 0x01, bin2bcd(min) );
  I2C1_Write1ByteRegister(ds1337add, 0x02, bin2bcd(hr) );
  I2C1_Write1ByteRegister(ds1337add, 0x03, bin2bcd(day) );
  I2C1_Write1ByteRegister(ds1337add, 0x05, bin2bcd(mth) );
  I2C1_Write1ByteRegister(ds1337add, 0x06, bin2bcd(year) );
}
void main(void)
{
    uint8_t buffer[35], temh, teml;
    uint8_t hr=0,min=0,seg=0;
    // initialize the device
    SYSTEM_Initialize();
    lcd_init();
    
    ds1337_init();
    //ds1337_set_date_time(1,6,21,22,03,0);
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    lcd_puts("\fHola mundo\nMCC i2c PicTrance");
    lcd_puts("\nRTC DS1337");
    __delay_ms(1500);
    while (1)
    {
        temh = I2C1_Read1ByteRegister(sensoradd, 0x00);
        teml = I2C1_Read1ByteRegister(sensoradd, 0x02);
        teml >>= 6;
        teml *= 25;
        printf("la temperatura es: %d.%d\n",temh,teml);
        
        ds1337_get_time(&hr, &min, &seg);
        printf("la hora es: %d:%d:%d\n\n",hr,min,seg);
        sprintf(buffer,"\fla temperatura\n es: %d.%d",temh,teml);
        lcd_puts(buffer);
        sprintf(buffer,"\nla hora actual es:\n%d:%d:%d",hr,min,seg);
        lcd_puts(buffer);
        __delay_ms(500);
        // Add your application code
    }
}
/**
 End of File
*/