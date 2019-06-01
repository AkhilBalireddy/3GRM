#include<reg51.h>
#include"header.h"

sbit RS = P3^4;
sbit RW = P3^5;
sbit EN = P3^6;

void lcd_string(char *s)
{
	while(*s)
	{
		lcd_data(*s++);
	}
}



void lcd_cmd(unsigned char c)
{
	P0 = c;
	RS = 0;
	RW = 0;
	EN = 1;
	delay_ms(2);
	EN = 0;
}

void lcd_data(unsigned char d)
{
	P0 = d;
	RS = 1;
	RW = 0;
	EN = 1;
	delay_ms(2);
	EN = 0;
}
	void lcd_init(void)
{
	lcd_cmd(0x2);
	lcd_cmd(0x38);
	lcd_cmd(0xc);
	lcd_cmd(0x6);
	lcd_cmd(0x1);
}
