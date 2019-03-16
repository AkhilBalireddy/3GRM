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
struct one o1;
o1.i=10;
o1.ch='a';
o1.f=23.5;
printf("%d %c %f\n",o1.i,o1.ch,o1.f);
}

