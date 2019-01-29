#include<stdio.h>
int main()
{
int num,num1,sum;
printf("enter the number");
scanf("%d",&num);
for(num1=num,sum=0;num1;num1=num1/10)
sum=sum+num1%10;
printf("sum=%d\n",sum);
}
