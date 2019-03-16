#include<stdio.h>
struct A
{
	int num;
	unsigned int i:3;
	char ch;
	float f;
};
main()
{
	struct A o1;
	o1.num=10;
	o1.ch='a';
	o1.f=23.7;
	o1.i=3;
	printf("%d %c %f %d\n",o1.num,o1.ch,o1.f,++o1.i);
}
