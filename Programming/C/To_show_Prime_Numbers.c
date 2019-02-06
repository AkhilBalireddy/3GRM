#include<stdio.h>
int main()
{
	int number, loop1, loop2,count=0;

	printf("enter the number to get prime number upto that:-\n");	//To take the number from the user
	scanf("%d",&number);	//To scan the number
	for(loop1=1;loop1<=number;loop1++)	//outer loop to give the numbers
	{
		for(loop2=2;loop2<loop1;loop2++)	//inner loop to check tha numbers
		{
			if(loop1%loop2==0)
			{
				break;
			}		//End of the if loop
		}			//End of the Inner loop
		if(loop1==loop2)	//condition for prime numbers
			printf("%d \n",loop1);		//to print the prime numbers

	}	//End of the Outer loop
}		//End of the main


