//https://blog.jmaker.com.tw/lcd_big_font/


#include "BigFont_LCD.h"


void lcd_BigFont_init(void){
    for (nb=0; nb<8; nb++ ) {                     // create 8 custom characters
        //for (bc=0; bc<8; bc++) bb[bc]= pgm_read_byte( &custom[nb][bc] );
        for (bc=0; bc<8; bc++){
            bb[bc]= (custom[nb][bc] );
        }
        //lcd_setCustomChar(dir, dato);
        lcd_setCustomChar( nb, bb ); ////********************funcion a cambiar de ser necesario)
        //lcd_setCustomChar( nb+1, bb );
    }
    //lcd_setCustomChar( 0, bb );
}

uint8_t lcd_BigFont_writeBigChar(uint8_t ch, uint8_t x, uint8_t y) {
    if (ch < ' ' || ch > '_') return 0;               // If outside table range, do nothing
    
    nb=0;                                             // character byte counter 
    for (bc=0; bc<8; bc++) {                        
        bb[bc] = (bigChars[ch-' '][bc] );
        if(bb[bc] != 0) nb++;
    }  

    bc=0;
    for (row = y; row < y+2; row++) {
        for (col = x; col < x+nb/2; col++ ) {
            lcd_gotoxy(col, row);                      // move to position
            lcd_send_byte(1,bb[bc++]);          // write byte and increment to next// escribe custom char
        }
    }
    return nb/2-1;                                      // returns number of columns used by char
}

// writeBigString: writes out each letter of string
void lcd_BigFont_writeBigString(uint8_t *str, uint8_t x, uint8_t y){
    char c;
    while ((c = *str++))
    x += lcd_BigFont_writeBigChar(c, x, y) + 1;
}