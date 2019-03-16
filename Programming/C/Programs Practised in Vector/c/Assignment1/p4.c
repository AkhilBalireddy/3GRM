#include<stdio.h>
int main()
{
int num,i,j;
printf("enter the number for i and j:-\n");
scanf("%d %d",&i,&j);
printf("before swap i=%d, j=%d\n",i,j);
i=i^j;
j=i^j;
i=i^j;
printf("after swap i=\%d, j=%d\n",i,j);
}

