#include"header.h"
#include<reg51.h>
#include<intrins.h>

#if(abc==0)
void tdelay_1ms()
{
	TMOD = 0x0;
 	TH0  = 0xe0;
 	TL0  = 0x18+1;
 	TR0  = 1;
 	while(TF0 == 0);
 	TR0 = 0;
 	TF0 = 0;
 	_nop_();
}
#endif

#if(abc==1)
void tdelay_500us()
{
	TMOD = 0x1;
	TH0 = 0xfe;
	TL0 = 0x19;
	TR0 = 1;
	while(TF0 == 0);
	TR0 = 0;
	TF0 = 0;
	_nop_();
}
#endif