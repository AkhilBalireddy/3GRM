#include<stdio.h>
struct one
{
	int i;
	char ch;
	float f;
};
struct one* abcdef(void);
main()
{
	struct one *p;
	p=abcdef();
	printf("%d\t%c\t%f\n",p->i,p->ch,p->f);
}
struct one* abcdef(void)
{
	struct one a;
	a.i=463;
	a.ch='k';
	a.f=27.5;
	return &a;
}
