#include "hd44780.h"
#include <avr/io.h>
#include <avr/pgmspace.h>

unsigned char symbols[] = 
{//Б
0b11111,
0b10000,
0b10000,
0b11110,
0b10001,
0b10001,
0b11110,
0b00000,
//Г
0b11111,
0b10001,
0b10000,
0b10000,
0b10000,
0b10000,
0b10000,
0b00000,
//Д
0b00111,
0b01001,
0b01001,
0b01001,
0b01001,
0b01001,
0b01111,
0b10001,
//Ж
0b10101,
0b10101,
0b01110,
0b00100,
0b01110,
0b10101,
0b10101,
0b00000,
//П
0b11111,
0b10001,
0b10001,
0b10001,
0b10001,
0b10001,
0b10001,
0b00000,
//И
0b10001,
0b10011,
0b10101,
0b10101,
0b10101,
0b11001,
0b10001,
0b00000,
//Ю
0b10010,
0b10101,
0b10101,
0b11101,
0b10101,
0b10101,
0b10010,
0b00000,
//Л
0b00111,
0b01001,
0b01001,
0b01001,
0b01001,
0b01001,
0b10001,
0b00000,
//Ц
0b10010,
0b10010,
0b10010,
0b10010,
0b10010,
0b10010,
0b11111,
0b00001
}


int main()
{
    lcd_init();
    lcd_clrscr();
    lcd_command(_BV(LCD_CGRAM)+0*8); //The 0 on this line may be 0-7
lcd_putc(0b00000); //5x8 bitmap of character, in this example a backslash
lcd_putc(0b10000);
lcd_putc(0b01000);
lcd_putc(0b00100);
lcd_putc(0b00010);
lcd_putc(0b00001);
lcd_putc(0b00000);
lcd_putc(0b00000);
lcd_goto(0); 
lcd_putc(0);
}
