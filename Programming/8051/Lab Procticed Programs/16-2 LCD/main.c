#include"header.h"
#include<reg51.h>
#define SW 0
sbit PI = 0xA0^0;
void main()
{
	unsigned char n=1;
//PI = 0x0;
	lcd_init();
	while(1)
	{
			lcd_data('A');
		while(11)
		{
		for( ;n<60; )
		{
			
			if((io_read(PORT2,SW) )== 0)
			{
				lcd_cmd(0x1);
				delay_ms(50);
				while(io_read(PORT2,SW) == 0);
				delay_ms(50);
				n++;
				
				lcd_data(n/10+48);
					lcd_data(n%10+48);
					//delay_ms(1000);
				}
		}
				n=1;
		}
	}
}