#include<stdio.h>
int main()
{
int num,r;
printf("enter the number to check divisible by 8 or not:-\n");
scanf("%d",&num);
num==((num>>3)<<3)?printf("divisible of 8\n"):printf("Not divisible of 8 \n");
}










