#include<stdio.h>
int main()
{
int n1,n,rev=0,rem;
printf("enter the number:- ");
scanf("%d",&n);
n1=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(n1==rev)
{
printf("%d is a polindrome number\n",n1);
}
else
printf("%d is not a polindrome number\n",n1);
}

