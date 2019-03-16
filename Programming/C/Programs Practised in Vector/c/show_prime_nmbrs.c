#include<stdio.h>
int main()
{
	int num,i,j;
	printf("enter the number");
	scanf("%d",&num);
	printf("prime numbers are");
	for(i=1;i<=num;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j)
			printf(" %d",i);
	}
}

