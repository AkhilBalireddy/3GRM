#include<stdio.h>
int main()
{
	int number, sum=0, loop1, loop2, count=0;
	for(loop1=2;loop1<100;sum=0,loop1++)	//outer loop to give numbers
	{
		for(loop2=1;loop2<loop1;loop2++)	//Inner loop to check the number
		{
			if(loop1%loop2==0)		//Condition to get sum of digits
				sum=sum+loop2;
		}
		if(sum==loop1)				//Condition for perfect number
		{
			printf("%d \n",loop1); 	//To print perfect numbers
			count++;		//to take count of the numbers
		}	
	}

	printf("count=%d\n",count);		//to print the count
}

