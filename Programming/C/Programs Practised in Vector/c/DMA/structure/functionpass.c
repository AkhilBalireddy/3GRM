#include<stdio.h>
struct one
{
	int i;
	char ch;
	float f;
};
void print(int,char,float);
main()
{
	struct one o1={10,'a',23.5};
	print(o1.i,o1.ch,o1.f);
}
void print(int n,char ch,float f)
{
	printf("%d %c %f\n",n,ch,f);
}

