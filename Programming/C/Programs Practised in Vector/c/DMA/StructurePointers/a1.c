#include<stdio.h>
struct one
{
	int i;
	char ch;
	float f;
}
main()
{
	int n;
	struct one a1;
	a1.i=10;
	a1.ch='a';
	a1.f=23.7;
	printf("%d %c %f\n",++a1.i,++a1.ch,a1.f+1.0);
}
