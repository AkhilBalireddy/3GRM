#include<stdio.h>
#pragma pack(1)
struct A
{
	union B
	{
		long int i1;
		short int i2;
		float f;
		char c;
	}b1;
	union C
	{
		long double d;
		short int s1;
		char c2;
		char c11;
	}c1;
}a1;
main()
{
	struct A a1;
	printf("%d  %d  %d\n",sizeof(a1),sizeof(a1.b1),sizeof(a1.c1));
}
