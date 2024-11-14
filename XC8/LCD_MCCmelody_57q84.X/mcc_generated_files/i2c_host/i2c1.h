/**
 * I2C1 Generated Driver API Header File
 *
 * @file i2c1.h
 *
 * @defgroup i2c_host I2C1_HOST
 *
 * @brief This header file contains API prototypes and other data types for the I2C1 driver.
 *
 * @version I2C1 Driver Version 2.1.1
 * 
 * @version I2C1 Package Version 6.1.3
 */

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef I2C1_H
#define I2C1_H

/**
 * @misradeviation {@advisory,2.5} For false positives, which include 
 * macros that are used as arguments but are not getting recognized by the tool.
 * This rule ID is disabled at project level due to its multiple occurrences in several 
 * files.Therefore, in the application project, this rule ID must be disabled in the 
 * MPLAB-X IDE from Tools -> Options -> Embedded -> MISRA Check.
*/

#include <stdint.h>
#include <stdbool.h>
#include "i2c_host_event_types.h"
#include "i2c_host_interface.h"


#define i2c1_host_host_interface I2C1_Host


#define I2C1_Host_Initialize I2C1_Initialize
#define I2C1_Host_Deinitialize I2C1_Deinitialize
#define I2C1_Host_Write I2C1_Write
#define I2C1_Host_Read I2C1_Read
#define I2C1_Host_WriteRead I2C1_WriteRead
#define I2C1_Host_ErrorGet I2C1_ErrorGet
#define I2C1_Host_CallbackRegister I2C1_CallbackRegister
#define I2C1_Host_IsBusy I2C1_IsBusy

#define I2C1_Host_Tasks I2C1_Tasks




/**
 * @ingroup i2c_host
 * @brief External object for I2C1_Host.
 */
extern const i2c_host_interface_t I2C1_Host;

/**
 * @ingroup i2c_host
 * @brief Initializes the I2C1 module. This routine is called only
 *        once during system initialization, before calling other APIs.
 * @param None.
 * @return None.
 */
void I2C1_Initialize(void);

/**
 * @ingroup i2c_host
 * @brief Deinitializes and disables the I2C1 modules.
 * @param None.
 * @return None.
 */
void I2C1_Deinitialize(void);

/**
 * @ingroup i2c_host
 * @brief Writes data to a client on the bus. The routine
 *        will attempt to write a number of bytes from the data buffer to a client.
 *        The I2C host generates a Start condition, writes the data and then
 *        generates a Stop condition. If the client sends a NACK for the request or a bus 
 *        error is encountered on the bus, the transfer is terminated.
 *        The application can call the I2C1_ErrorGet() function to
 *        find out the cause of the error.
 *
 *        The function is nonblocking. It initiates bus activity and returns
 *        immediately. The transfer is then completed in the peripheral 
 *        interrupt. For Polling mode, the user has to call  I2C1_Tasks
 *        in while loop. 
 *        A transfer request cannot be placed when another transfer is in progress,
 *        otherwise it will cause the function to return false.
 * @param [in] address - 7-bit/10-bit client address
 * @param [in] data - Pointer to the source data buffer containing the data to
 *                    be transmitted
 * @param [in] dataLength - Length of data buffer in number of bytes, and the number of bytes to be written
 *@retval True  - The request was placed successfully and the bus activity was
 *                 initiated
 *@retval False - The request fails if a transfer was in progress when the function was called
 */
bool I2C1_Write(uint16_t address, uint8_t *data, size_t dataLength);

/**
 * @ingroup i2c_host
 * @brief Reads data to a client on the bus. The routine
 *        The function will attempt to read a number of bytes into the data
 *        buffer from a client. The I2C host generates a Start condition, reads the data and then 
 *        generates a Stop condition. If the client sends a NACK for the request or a bus 
 *        error is encountered on the bus, the transfer is terminated. 
 *        The application can call I2C1_ErrorGet() function
 *        to find out the cause of the error.
 *
 *        The function is nonblocking. It initiates bus activity and returns
 *        immediately. The transfer is then completed in the peripheral 
 *        interrupt. For Polling mode, the user has to call  I2C1_Tasks
 *        in while loop. A transfer request cannot be placed when another transfer is in progress,
 *        otherwise it will cause the function to return false. 
 * @param [in] address - 7-bit/10-bit client address
 * @param [out] data - Pointer to the destination data buffer containing the data to
 *                    be received
 * @param [in] dataLength - Length of data buffer in number of bytes, and the number of bytes to be read
 *@retval True  - The request was placed successfully and the bus activity was
 *                 initiated
 *@retval False - The request fails if a transfer was in progress when the function was called
 */
bool I2C1_Read(uint16_t address, uint8_t *data, size_t dataLength);

/**
 * @ingroup i2c_host
 * @brief Writes data from the writeData, then reads data from the client and stores the
 *        received information in the readData. The routine generates a Start condition on the bus and 
 *        and then sends the writeLength number of bytes contained in the writeData. 
 *        It then inserts a repeated Start condition and proceeds to read the
 *        readLength number of bytes from the client. The received bytes are stored
 *        in the readData buffer. A Stop condition is generated after the last byte has been received.
 *        
 *        If the client sends a NACK for the request or a bus error was encountered on 
 *        the bus, the transfer is terminated. The application can call 
 *        I2C1_ErrorGet() function to find out the cause of the error.
 *
 *        The function is nonblocking. It initiates bus activity and returns
 *        immediately. The transfer is then completed in the peripheral 
 *        interrupt. For Polling mode, the user has to call  I2C1_Tasks
 *        in while loop. A transfer request cannot be placed when another transfer is in progress,
 *        otherwise it will cause the function to return false.
 * @param [in] address     - 7-bit/10-bit client address
 * @param [in] writeData   - Pointer to write data buffer
 * @param [in] writeLength - Write data length in bytes
 * @param [out] readData    - Pointer to read data buffer
 * @param [in] readLength  - Read data length in bytes
 *@retval True  - The request was placed successfully and the bus activity was
 *                 initiated
 *@retval False - The request fails if a transfer was in progress when the function was called
 */
bool I2C1_WriteRead(uint16_t address, uint8_t *writeData, size_t writeLength, uint8_t *readData, size_t readLength);

/**
 * @ingroup i2c_host
 * @brief Retrieves errors occurring during I2C transmit and receive.
 *        
 * @param None.
 *@retval I2C_ERROR_NONE - No error
 *@retval I2C_ERROR_NACK - Client returned NACK
 *@retval I2C_ERROR_BUS_COLLISION - Bus collision error
 */
i2c_host_error_t I2C1_ErrorGet(void);

/**
 * @ingroup i2c_host
 * @brief Checks if I2C is busy. Call I2C1_Initialize() before calling this API.
 * @param None.
 *@retval True - I2C is busy
 *@retval False - I2C is free
 */
bool I2C1_IsBusy(void);

/**
 * @ingroup i2c_host
 * @brief Setter function for the I2C interrupt callback. This routine is called when an error is generated.
 * @param CallbackHandler - Pointer to custom callback
 * @return None.
 *
 */
void I2C1_CallbackRegister(void (*callbackHandler)(void));

/**
 * @ingroup i2c_host
 * @brief This is polling function for non interrupt mode
 * @param None.
 * @return None.
 */
void I2C1_Tasks(void);

#endif //I2C1_H