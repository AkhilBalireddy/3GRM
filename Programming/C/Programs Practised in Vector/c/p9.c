#include<stdio.h>
int main()
{
int i='a',j='b',k;
printf(" before swap i=%c j=%c\n",i,j);
k=i;
i=j;
j=k;
printf(" after swap i=%c j=%c\n", i,j);
}
