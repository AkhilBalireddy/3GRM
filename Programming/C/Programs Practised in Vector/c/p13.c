#include<stdio.h>
int main()
{
int i=10,j=34,k;
i=i-1;
//k=i>>j;	//right shift
k=i<<j;	//left shift
printf("\n left shift i=%d,j=%d,k=%d\n",i,j,k);
}
