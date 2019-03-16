#include<stdio.h>
int main()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
//if((num/2)*2==num)
if((num&1)==1)
printf("%d is odd number\n",num);
else
printf("%d is even number\n",num);
}

