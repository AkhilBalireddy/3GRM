#include<stdio.h>
int main()
{
	int num,sum,i,r,temp;
	printf("enter the number\n");
	scanf("%d",&num);
//	temp=num;
//	while(num>0)

for(i=0;i<=num;i++)
	{
		num=num%10;
		sum=sum+num;
//num=num/10;
//num++;		
	}

//	num=temp;
	if(sum==num)
		printf("Perfect Number");
	else
		printf("Not Perfect Number");
}

