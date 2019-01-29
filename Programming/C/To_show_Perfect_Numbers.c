#include<stdio.h>
int main()
{
	int num,sum=0,i,j,c=0;
	for(i=2;i<100;sum=0,i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
				sum=sum+j;
		}
		if(sum==i)
		{
			printf("%d \n",i);
			c++;
		}	
	}

	printf("count=%d\n",c);
}

