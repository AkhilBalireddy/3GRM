#include<stdio.h>
main()
{
unsigned int i=200,j=300,k;
k=i&j;
printf("k=%d\n",k);

k=i|j;
printf("k=%d\n",k);

k=i^j;
printf("k=%d\n",k);

k=~i;
printf("k=%d\n",k);
}



