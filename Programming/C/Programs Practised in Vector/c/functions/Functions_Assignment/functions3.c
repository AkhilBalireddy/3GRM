#include<stdio.h>
int armstrong_check(int);
main()
{
	int num,sum,c,temp;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	c=armstrong_check(num);
	if(c==1)
		printf("armstrong Number");
	else
		printf("Not Armstrong Number");
}
int armstrong_check(int num)
{
	int sum=0,temp,r;
	while(num>0)
	{
		r=num%10;
		sum+=(r*r*r);
		num=num/10;
	}
	if(sum==temp)
		return 0;
	else
		return 1;
}

