#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<5;i++)	//Outer loop to check with numbers
	{
		for(j=0;j<i;j++)	//Inner loop to Check Pattern
		{
			printf(" ");	//To Print Space
		}	//End of the For loop

		for(k=0;k<5-i;k++)	//Another inner loop to Check Pattern
		{
			printf("* ");	//To print * 
		}	//End of the Second Inner loop

		printf("\n");	//To print in Separate line
	}	//End of the Outer loop
}

