#include<stdio.h>
int main()
{
int i,sum=1, num;
printf("enter the number to find factorial:-\n");
scanf("%d",&num);
for(i=num;i>=1;i--)

sum=sum*i;

printf("sum=%d\n",sum);
}

