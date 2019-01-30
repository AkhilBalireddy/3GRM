#include<stdio.h>
int main()
{
int i,j,k;
for(i=0;i<4;i++)
{
for(k=i;k>=0;--k)
printf(" ");
for(j=4-i;j>0;--j)
printf("* ");
printf("\n");
}
}


