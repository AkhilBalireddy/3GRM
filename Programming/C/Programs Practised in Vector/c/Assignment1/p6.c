#include<stdio.h>
int main()
{
int num,i,j;
printf("enter the number\n");
scanf("%d",&num);
//if(num%8==0)
if(((num>>3)<<3)==num)
printf("%d is divisible by 8\n",num);
else
{
printf("%d is not divisible by 8\n",num);
}
}

