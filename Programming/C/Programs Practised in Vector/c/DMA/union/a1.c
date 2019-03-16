#include<stdio.h>
union u
{
int i;
char ch;
float f;
};
main()
{
union u a1;
//printf("%u %u %u\n",&a1.i,&a1.ch,&a1.f);
a1.i=258;
a1.ch='a';
printf("%d %d %f\n",a1.i,a1.ch,a1.f);
}
