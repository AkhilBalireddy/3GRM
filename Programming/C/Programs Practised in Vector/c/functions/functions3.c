#include<stdio.h>
int armstrong_check(int);
main()
{
	int num,c,sum,temp,r;
	printf("enter the number");
	scanf("%d",&num);
temp=num;	
c=armstrong_check(num);
	if(c==1)
		printf("%d is a Armstrong Number\n",num);
	else
		printf("%d is not Armstrong Number\n",num);
}
int armstrong_check(int num)
{
	int r,sum=0,c,i,temp;
	while(num>0)
	{
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}

	if(sum==temp)
		return 1;
	else
		return 0;
}

