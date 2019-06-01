#include"header.h"
#include<reg51.h>

#define SW1 0
#define SW2 1
void main()
{
	signed char n=0;
	lcd_init();
	while(1)
	{
		if(io_read(PORT2,SW1) ==0)
		{
			delay_ms(25);
			while( io_read(PORT2,SW1) ==0 );
			delay_ms(25);

			n++;
			lcd_cmd(0x1);
			lcd_data(n/10+48);
			lcd_data(n%10+48);
			delay_ms(1500);
		}
		if(io_read(PORT2,SW2) == 0)
		{
			delay_ms(50);
			while(io_read(PORT2,SW2) == 0);
			delay_ms(50);

			while(n>=0)
			{
				lcd_cmd(0x1);
				delay_ms(300);
				lcd_data(n/10+48);
				lcd_data(n%10+48);
				delay_ms(500);
				n--;
			}
		}
	}
}
