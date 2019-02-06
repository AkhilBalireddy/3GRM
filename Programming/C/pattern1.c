#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=0;i<5;i++)		//Outer loop to give the numbers
	{
		for(j=0;j<5-i;j++)	//Inner loop to set the pattern
		{
			printf("* ");	//To print * on screen

		}			//End of the Innerloop
		printf("\n");		//To Print line by line	

	}	//End of Outer loop 

}	//End of the main


