#include<stdio.h>
int main()
{
int i,j,k;
printf("enter numbers for i and j");
scanf("%d%d",&i,&j);
printf("before i=%d j=%d",i,j);
i=i+j-(j=i);
printf("after i=%d j=%d",i,j);
}
//swapping numbers in single line//

