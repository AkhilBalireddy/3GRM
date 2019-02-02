#include<stdio.h>
void swap(int *,int *);
int main()
{
int i=10,j=20;
printf("Before swap i=%d,j=%d\n",i,j);
swap(&i,&j);
printf("After swap i=%d,j=%d\n",i,j);
}
void swap(int *p,int *q)
{
int t;
t=*p;
*p=*q;
*q=t;
}

