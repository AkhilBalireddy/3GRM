#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<5;i++)	//Outer loop to give the numbers
	{
		for(j=0;j<=i;j++)	//Inner Loop to Check the Paatern
		{
			printf("* ");	//To Print * on Screen

		}	//End of the Inner Loop
		printf("\n");		//To print separate line

	}	//End of the Outer loop
}	//End of the Main


