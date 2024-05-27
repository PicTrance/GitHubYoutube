/*
 * File:   myLib_I2C.c
 * Author: Administradorr
 *
 * Created on 26 de mayo de 2024, 12:26 PM
 */


#include "myLib_I2C.h"\

static const i2c_host_interface_t *myLib_I2C = &I2C1_Host;

#define I2C_ERROR (1U)
#define I2C_NO_ERROR (0U)

uint8_t I2C_status = I2C_ERROR;
uint8_t I2C_get_error;

uint8_t I2C_Read1Byte(uint8_t deviceAddress, uint8_t registerAddress, uint8_t *readData)
{
    uint8_t I2C_status = I2C_ERROR;
    if(myLib_I2C->WriteRead( deviceAddress,
                              &registerAddress,
                              1,
                              readData,
                              1 )){
        while(myLib_I2C->IsBusy()){
            myLib_I2C->Tasks();
        }
        I2C_get_error = myLib_I2C->ErrorGet();
        if( I2C_get_error == I2C_ERROR_NONE)
        {
            I2C_status = I2C_NO_ERROR;
        }else
        {
            I2C_status = I2C_get_error;
        }

    }
    return I2C_status;
}

uint8_t I2C_ReadNByte(uint8_t deviceAddress, uint8_t registerAddress, uint8_t *readData, size_t readLength)
{
    uint8_t I2C_status = I2C_ERROR;
    if(myLib_I2C->WriteRead( deviceAddress,
                              &registerAddress,
                              1,
                              readData,
                              readLength )){
        while(myLib_I2C->IsBusy()){
            myLib_I2C->Tasks();
        }
        I2C_get_error = myLib_I2C->ErrorGet();
        if( I2C_get_error == I2C_ERROR_NONE)
        {
            I2C_status = I2C_NO_ERROR;
        }else
        {
            I2C_status = I2C_get_error;
        }

    }
    return I2C_status;
}

uint8_t I2C_Read(uint16_t deviceAddress, uint8_t *data, size_t dataLength)
{
    
    if(myLib_I2C->Read( deviceAddress,
                              data,
                              dataLength )){
        while(myLib_I2C->IsBusy()){
            myLib_I2C->Tasks();
        }
        I2C_get_error = myLib_I2C->ErrorGet();
        if( I2C_get_error == I2C_ERROR_NONE)
        {
            I2C_status = I2C_NO_ERROR;
        }else
        {
            I2C_status = I2C_get_error;
        }
    }
    return I2C_status;
    
//    //uint8_t waitCounter = 0;
//    if (I2C1_Host.Read(deviceAddress,
//                        data,
//                        dataLength))
//    {
//        //waitCounter = 100; // This value depends on the system clock, I2C clock and data length.    
//        while(I2C1_Host.IsBusy())
//        {
//            I2C1_Host.Tasks();
//            //waitCounter--;
//        }
//        uint8_t error = I2C1_Host.ErrorGet();
//        if( error == I2C_ERROR_NONE)
//        {
//            status = I2C_NO_ERROR;
//        }else
//        {
//            status = error;
//        }
//    }
//    return status;
}


uint8_t I2C_Write(uint8_t deviceAddress, uint8_t *data, size_t writeLength)
{

    if(myLib_I2C->Write( deviceAddress,
                          data,
                          writeLength)){
        while(myLib_I2C->IsBusy()){
            myLib_I2C->Tasks();
        }
        I2C_get_error = myLib_I2C->ErrorGet();
        if( I2C_get_error == I2C_ERROR_NONE)
        {
            I2C_status = I2C_NO_ERROR;
        }else
        {
            I2C_status = I2C_get_error;
        }
    }
    return I2C_status;
}
uint8_t I2C_Write1Byte(uint8_t deviceAddress, uint8_t data)
{

    if(myLib_I2C->Write( deviceAddress,
                          &data,
                          1)){
        while(myLib_I2C->IsBusy()){
            myLib_I2C->Tasks();
        }
        I2C_get_error = myLib_I2C->ErrorGet();
        if( I2C_get_error == I2C_ERROR_NONE)
        {
            I2C_status = I2C_NO_ERROR;
        }else
        {
            I2C_status = I2C_get_error;
        }
    }
    return I2C_status;
}

bool I2C_AckPoll(uint8_t deviceAddress)
{
    if(myLib_I2C->Write(deviceAddress, NULL, 0) ||
       !(myLib_I2C->ErrorGet() != I2C_ERROR_ADDR_NACK))
    {
        while (myLib_I2C->IsBusy()){
        }
    }
    return myLib_I2C->ErrorGet() != I2C_ERROR_ADDR_NACK;
}
