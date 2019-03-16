#include<stdio.h>
int main()
{
int a[5]={10,20,30,40,50},i=0,*p;
p=a;
for(i=0;i<5;i++)
printf("%d",*p++);
printf("\n");
}

