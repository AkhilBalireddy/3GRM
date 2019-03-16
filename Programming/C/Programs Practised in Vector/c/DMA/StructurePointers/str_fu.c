#include<stdio.h>
struct one
{
	int i;
	char ch;
	float f;
};
void print (int ,char ,float);
void print1(struct one);
void print2(struct one *);
main()
{
	struct one o1={10,'a',23.7};
	print(o1.i,o1.ch,o1.f);
	print1(o1);
	print2(&o1);


}
void print(int o1,char o2,float o3)
{
	printf("%d %c %f\n",o1,o2,o3);
}
void print1(struct one a1)
{
	printf("%d %c %f\n",a1.i,a1.ch,a1.f);
}
void print2(struct one *p)
{
	printf("%d %c %f\n",p->i,p->ch,p->f);
}

