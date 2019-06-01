#include<reg51.h>
#include"header.h"

sbit RS = P3^4;
sbit RW = P3^5;
sbit EN = P3^6;
#if(abc==0)
void lcd_string(char *s)
{
	while(*s)
	{	  		
		lcd_data(*s);
		s++;
	}
}
#endif

code unsigned char a[] = {0x04,0x04,0x04,0x05,0x1f,0x1f,0x1f,0x0};
#if(abc==0)
void custom(void)
{
	
	 char i;
	 lcd_cmd(0x40);
	 for(i=0;i<8;i++)
	 	lcd_data(a[i]);
	lcd_data(0x80);
}
#endif

#if(abc==0)
void lcd_string_cir(char *s,char j)
{
	while(*s)
	{	  		
	  lcd_cmd(0x80+j);		//for circular scrolling
		lcd_data(*s);
		s++;
		j++;
	if(j==16)
		j=0;
	}
}

#endif

#if(abc==0)
void lcd_float(float f)
{	   
	int i=f;
 	lcd_int(f);
	lcd_data(46);
	i=i*100;
	f=(f)*100;
	f-=i;
	i=f;
	lcd_data(i/10+48);
	lcd_data(i%10+48);
}
#endif

#if(abc==0)
void lcd_int(int a)
{
	int c=a,b=0,k=10;
	unsigned char i=0,j;
	while(c)
	{
		c/=10;
		i++;
	}
	c=a;
	for(j=i;j>2;j--)
		k *= 10;
	while(c)
	{
		b=(c/k);
		lcd_data(b%10+48);
		c = c%k;
		k/=10;
	}
}
#endif

#if(abc==0)
void lcd_cmd(unsigned char c)
{
	P0 = c;
	RS = 0;
	RW = 0;
	EN = 1;
	delay_ms(2);
	EN = 0;
}
#endif

#if(abc==0)
void lcd_data(unsigned char d)
{
	P0 = d;
	RS = 1;
	RW = 0;
	EN = 1;
	delay_ms(2);
	EN = 0;
}
#endif

#if(abc==0)
void lcd_init(void)
{
	lcd_cmd(0x2);
	lcd_cmd(0x38);
	lcd_cmd(0xc);
	lcd_cmd(0x6);
	lcd_cmd(0x1);
}
#endif