#include<stdio.h>
int main()
{
int num,i,r,sum,temp;
printf("enter the number\n");
scanf("%d",&num);
temp=num;
while(num>0)
{
r=num%10;
i=r*r*r;
sum=sum+i;
num=num/10;
}
num=temp;
if(sum==num)
printf("Given Number is Armstrong Number\n");
else
printf("Not Armstrong Number");
}

