#include<stdio.h>
struct one 
{
	int i;
	char ch;
	float f;
};
void pri(struct one*);
main()
{
	struct one o1={10,'a',23.5};
	pri(&o1);
}
void pri(struct one *p)
{
	printf("%d %c %f\n",p->o1.i,p->o1.ch,p->o1.f);
}

