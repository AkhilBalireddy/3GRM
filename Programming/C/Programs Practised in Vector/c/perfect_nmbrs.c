#include<stdio.h>
int main()
{
	int num,sum=0,i,j,c=0,a=0,b=0,d=0;
	for(i=2;i<500;sum=0,i++)
	{

		for(j=1;j<i;j++)
		{
			if(i%j==0)
				sum=sum+j;

		}

		if(sum==i)
		{
			printf(" %d\n",i);
			c++;	
		}
	}
	if(sum<9)
		a++;
	printf("1-10=%d\n",a);
	if(sum<=99)
		b++;
	printf("10-100=%d\n",b);
	if(sum<=999)
		d++;
	printf("100-1000=%d\n",d);


	printf("total=%d\n",c);

}

