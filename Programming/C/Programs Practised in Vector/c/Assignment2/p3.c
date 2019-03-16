#include<stdio.h>
int main()
{
int num,sum=0,i,rem;
printf("enter the number\n");
scanf("%d",&num);
//for(i=1;i<=num;i++)
while(num)
{
rem=num%10;
sum=sum*10+rem;
num=num/10;
}
printf("%d\n",sum);
}

