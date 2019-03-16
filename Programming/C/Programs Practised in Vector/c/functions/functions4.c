#include<stdio.h>
void swap (int *,int *)
int main()
{
int i=10,j=20;
printf("before swap i=%d,j=%d",i,j);
swap(&i,&j);
printf("after swap i=%d,j=%d",i,j);
}
void swap (int *p,int *q)
{
int t;
t=*p;
*p=*q;
*q=t;
}

