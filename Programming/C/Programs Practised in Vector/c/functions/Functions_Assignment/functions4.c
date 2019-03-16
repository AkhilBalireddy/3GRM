#include<stdio.h>
int perfect_check(int);
main()
{
int num,c,i,j;
printf("enter the number");
scanf("%d",&num);
c=perfect_check(num);
if(i%j==0)
printf("%d is a perfect number\n",num);
else
printf("%d is not perfect number\n",num);
}
int perfect_check(int num)
{
int sum,i,j;
for(i=2;i<num;i++)
{
for(j=1;j<i;j++)
{
if(i%j==0)
sum=sum+j;
}
if(sum==i)
{
return 0;
}
else
return 1;
}
}
