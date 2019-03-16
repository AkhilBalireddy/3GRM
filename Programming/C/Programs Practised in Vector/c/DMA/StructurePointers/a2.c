#include<stdio.h>
struct one 
{
int i;
char ch[20];
float f;
};
main()
{
struct one o1,o2;
scanf("%d %[^\n] %f",&o1.i,o1.ch,&o1.f);

o2=o1;

printf("%d %s %f\n",o1.i,o1.ch,o1.f);

printf("%d %s %f\n",o2.i,o2.ch,o2.f);
}

