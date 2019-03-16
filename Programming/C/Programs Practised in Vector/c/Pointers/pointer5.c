#include<stdio.h>
main()
{
int i=10,j;
int *p=&i;
printf("p=%u\n",p);
//j=*p++;
//j=++*p;
//j=*++p
//j=++(*p);
j=(*p)++;
printf("p=%u\n",p);
printf("i=%d j=%d\n",i,j);
}

