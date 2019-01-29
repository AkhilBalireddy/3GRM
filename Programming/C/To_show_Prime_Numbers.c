#include<stdio.h>
int main()
{
	int num,i,j,c=0;
	printf("enter the number");
	scanf("%d",&num);
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
			printf("%d ",i);

	}
}


