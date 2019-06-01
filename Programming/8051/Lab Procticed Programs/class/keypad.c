#include<reg51.h>
#include"header.h"
sbit R0 = P2^0;
sbit R1 = P2^1;
sbit R2 = P2^2;
sbit R3 = P2^3;

sbit C0 = P2^4;
sbit C1 = P2^5;
sbit C2 = P2^6;
sbit C3 = P2^7;

char row,col;

typedef unsigned char U8;
U8 kpd[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
U8 keyscan()
{
	R0 = R1 = R2 = R3 = 0;
	C0 = C1 = C2 = C3 =1;
	while( (C0 & C1 & C2 & C3) == 1);
	delay_ms(50);
	R0 =0;
	R1 = R2 = R3 = 1;
	if( (C0 & C1 & C2 & C3) == 0)
	{
		row=0;
		goto colcheck;
	}
	
	R0 = R2 = R3 =1;
	R1 =0;
	if( (C0 & C1 & C2 & C3) ==0)
	{
		row = 1;
		goto colcheck;
	}

	R0 = R1 = R3 =1;
	R2 =0;
	if( (C0 & C1 & C2 & C3) ==0)
	{
		row = 2;
		goto colcheck;
	}

	R0 = R1 = R2 =1;
	R3 =0;
	if( (C0 & C1 & C2 & C3) ==0)
	{
		row = 3;
		goto colcheck;
	}		   

	colcheck:
	if( C0 == 0)
		col = 0;
	else if (C1 == 0)
		col = 1;
	else if (C2 == 0)
	     col = 2;
	else 
		col = 3;
	while( (C0 & C1 & C2 &C3) == 0);
		return (kpd[row][col]);
}