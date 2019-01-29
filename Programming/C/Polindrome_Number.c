#include<stdio.h>
int main()
{
int n1,num,rev=0,rem;
printf("enter the number");
scanf("%d",&num);
n1=num;
while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(n1==rev)
{
printf("%d is a polindrome number", n1);
}
else
printf("%d is not a polindrome number", n1);
}

