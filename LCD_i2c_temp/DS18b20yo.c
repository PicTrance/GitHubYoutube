//#define ONE_WIRE_PIN PIN_A3//definir pin a usar en el main
                           //antes del ds1820.c

void onewire_reset();
void onewire_write(int8 data);
int onewire_read();
float ds1820_read();

void onewire_reset() { 
    output_low(ONE_WIRE_PIN);       // pull the bus low for reset 
    delay_us(500); 
    output_float(ONE_WIRE_PIN);     // float the bus high 
    delay_us(500);                  // wait-out remaining initialisation window 
    output_float(ONE_WIRE_PIN); 
} 

void onewire_write(int8 data) { 
    int8 count; 
    for(count = 0; count < 8; ++count) { 
        output_low(ONE_WIRE_PIN); 
        delay_us(2);                // pull 1-wire low to initiate write time-slot. 
        output_bit(ONE_WIRE_PIN, shift_right(&data, 1, 0)); // set output bit on 1-wire 
        delay_us(60);               // wait until end of write slot. 
        output_float(ONE_WIRE_PIN); // set 1-wire high again, 
        delay_us(2);                // for more than 1us minimum. 
    } 
} 

int onewire_read() { 
    int count, data; 
    for(count = 0; count < 8; ++count) { 
        output_low(ONE_WIRE_PIN); 
        delay_us(2);                // pull 1-wire low to initiate read time-slot. 
        output_float(ONE_WIRE_PIN); // now let 1-wire float high, 
        delay_us(8);                // let device state stabilise, 
        shift_right(&data, 1, input(ONE_WIRE_PIN)); // and load result. 
        delay_us(120);              // wait until end of read slot. 
    } 
    return data; 
} 

float ds18b20_read() { 
    int8 busy=0, temp1, temp2; 
    signed int16 temp3; 
    float result;  
    onewire_reset(); 
    onewire_write(0xCC);            //Skip ROM, address all devices 
    onewire_write(0x44);            //Start temperature conversion 
    while(busy == 0)                //Wait while busy (bus is low) 
    busy = onewire_read(); 
    onewire_reset(); 
    onewire_write(0xCC);            //Skip ROM, address all devices 
    onewire_write(0xBE);            //Read scratchpad 
    temp1 = onewire_read(); 
    temp2 = onewire_read(); 
    temp3 = make16(temp2, temp1);  
    result = (float) temp3 / 16.0;    //Calculation for DS18B20 
    //delay_ms(200); 
    return(result);  
}
