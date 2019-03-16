#include<stdio.h>
union A
{
	struct B
	{
		long long int i1;
		char c1;
		char c2;
		short int b11;
		float f;
	}b1;

	struct C
	{
		long long int i2;
		float f1;
		short int i3,i4,i5;
	}c1;
}a1;
main()
{
	union A as;
	printf("%d %d %d\n",sizeof(as),sizeof(as.b1),sizeof(as.c1));
}
