#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=5;i++)	//Outer loop rotation less than five
	{
		for(j=1;j<=i;j++)	//Innerloop get pattern
			printf("%d ",i*j);	//To print Multiplication i and j
		printf("\n");	//To print in separate line
	}	//End of the outer loop
}	//End of the main

