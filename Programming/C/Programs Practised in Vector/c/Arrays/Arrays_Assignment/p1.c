#include<stdio.h>
int main()
{
	int sum=0,prod=1,num,ele,i,j;
	int a[5];

	ele=sizeof(a)/sizeof(a[0]);

	printf("enter 5 elements into array:-\n");
	for(i=0; i<ele; i++)
		scanf(" %d", &a[i]);

	for(i=0; i<ele; i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
	
//	printf("sum=%d ",sum);
	

//for(i=0; i<ele; i++)



		else
		{
			prod=prod*a[i];
		}
	}	
printf("product of odd numbers is %d\n ",prod);
		
printf("sum of the even numbers is %d \n",sum);
	
}
/*	
	for(i=0; i<ele; i++)
	{
	
		if(num%2==0)
	{	
			prod=prod*num;
			printf("prod=%d ",prod);
		}
	}
*/	//printf("\n");



