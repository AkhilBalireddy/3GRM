#include"header.h"
#include<reg51.h>

sbit SW = P3^0;
/*
void main()
{
		unsigned char ch= 15;
		while(1)
		{
					if( (io_read(PORT3,SW) ) == 0 )
					{		
						delay_ms(50);
						while(io_read(PORT3,SW) == 0);
						delay_ms(50);
						io_byte_write(PORT2,ch--);
						delay_ms(50);
					}
					if(ch == 0)
						ch=15;
		}
}
*/