#include<stdio.h>
struct one
{
int i;
char ch;
float f;
};
main()
{
int n;
struct one o1={10,'a',23.5},o2;
printf("%d %c %f\n",o1.i,o1.ch,o1.f);
printf("%d %c %f\n",o2.i,o2.ch,o2.f);
o2=o1;
printf("%d %c %f\n",o1.i,o1.ch,o1.f);
printf("%d %c %f\n",o2.i,o2.ch,o2.f);
}

