#include<stdio.h>
int main()
{
int i,j,k;
printf("enter values for i,j");
scanf("%d%d",&i,&j);
printf("before i=%d j=%d\n",i,j);
/*
i=i*j;
j=i/j;
i=i/j;
*/

/*
t=i;
i=j;
j=t;
*/

i=i+j;
j=i-j;
i=i-j;
printf("after i=%d j=%d\n",i,j);
//to swap the numbers by using third variable//
}
