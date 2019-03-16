#include<stdio.h>
int main()
{
int m;
printf("enter student masrks\n");
scanf("%d",&m);

if(m>=0 && m<=39)
printf("Fail");

if(m>=40 && m<=59)
printf("C");

if(m>=60 && m<=74)
printf("B");

if(m>=75 && m<=100)
printf("A");

else
printf("wrong input\n");

}
