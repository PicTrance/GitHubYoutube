#include "I2C_MCC_Personal.h"    
void I2C1_WR(uint8_t address, uint8_t data){
    while(!I2C1_Open(address));
    I2C1_SetBuffer(&data,1);
    I2C1_SetAddressNackCallback(NULL,NULL);
    I2C1_MasterWrite();
    while(I2C1_BUSY == I2C1_Close());
        
}

uint8_t I2C1_RD(uint8_t address){
    uint8_t returnValue = 0;
    while(!I2C1_Open(address));
    I2C1_SetBuffer(&returnValue,1);
    I2C1_MasterRead();
    while(I2C1_BUSY == I2C1_Close());
    return returnValue;
}