#include<stdio.h>
struct one
{
int i;
char ch;
float f;
};
main()
{
struct one o1;
printf("enter the integer\n");
scanf("%d",&o1.i);
printf("enter the character\n");
scanf(" %c",&o1.ch);
printf("enter the float value\n");
scanf(" %f",&o1.f);

printf("%d %c %f",o1.i,o1.ch,o1.f);
}


