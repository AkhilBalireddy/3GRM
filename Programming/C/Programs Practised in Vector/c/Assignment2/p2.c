#include<stdio.h>
int main()
{
int num,i,rem,sum=0;
printf("enter the number\n");
scanf("%d",&num);
while(num)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("sum of digits is %d\n",sum);
}

