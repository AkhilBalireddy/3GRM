#include<stdio.h>
main()
{
int i,j,t;
printf("enter the number for i\n");
scanf("%d", &i);
printf("enter the number for j\n");
scanf("%d", &j);
i=i^j;
j=i^j;
i=i^j;
printf("After swapping i=%d j=%d\n",i,j);
}

