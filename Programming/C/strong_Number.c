#include<stdio.h>
int main()
{
int i,j,num,r,sum;
printf("enter the number");
scanf("%d",&num);
while(num>0)
{
r=num%10;
i=r;+r;+r;;
sum=sum+i;
num=num/10;
}
if(sum==num)
printf("Strong Number");
else
printf("Not Strong Number");
}

