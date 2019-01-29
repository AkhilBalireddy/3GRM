#include<stdio.h>
int main()
{
int num,i,c=0,j;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<=num;i++)
if(num%i==0)
c++;
if(c==2)
printf("prime number");
else
printf("not prime number");

}

