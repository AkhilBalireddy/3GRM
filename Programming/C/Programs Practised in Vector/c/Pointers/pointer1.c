#include<stdio.h>
int main()
{
int i=10,j=20;
int *p;
p=&i;
printf("i=%d *p=%d\n",i,*p); //i=10, *p=100
*p=100;
printf("i=%d *p=%d\n",i,*p);	//i=100, *p=100
}











