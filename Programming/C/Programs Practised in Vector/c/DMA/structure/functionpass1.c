#include<stdio.h>
struct one
{
int i;
char ch;
float f;
};
void som(struct one);
main()
{
struct one o1={10,'a',23.5};
som(o1);
}
void som(struct one o1)
{
printf("%d %c %f\n",o1.i,o1.ch,o1.f);
}

