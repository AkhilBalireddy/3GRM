#include<stdio.h>
int main()
{
int i,sum,num,r,temp;
printf("enter the number");
scanf("%d",&num);
temp=num;
while(num>0)
//for(i=0;i<=num;i++)
{
r=num%10;
sum=sum*10+r;
num=num/i;
}
num=temp;
if(sum==num)
printf("Polindrome Number");
else
printf("Not Polindrome Number");
}

