#include<reg51.h>
#include"header.h"
#define PULSE 0
void main()
{
	while(1)
	{
		io_write(PORT2,PULSE,LOW);
			tdelay_500us();
		io_write(PORT2,PULSE,HIGH);
			tdelay_500us();
	}
}