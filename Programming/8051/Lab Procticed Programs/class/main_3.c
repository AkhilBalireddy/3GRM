#include"header.h"
#include<reg51.h>
void main()
{
	int a=-1234;
	float b=-23.7471;
	
	
	lcd_init();
	if(a<0)
	{
		lcd_data(45);
		a=a*(-1);
	}

	lcd_int(a);
	delay_ms(2500);

	lcd_cmd(0x1);

	if(b<0)
	{
		lcd_data(45);
		b = b*(-1);
	}
	lcd_float(b);
	while(1);
}
