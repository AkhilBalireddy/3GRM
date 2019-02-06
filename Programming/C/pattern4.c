#include<stdio.h>
int main()
{
	int i,j,k,sp;
	for(i=0;i<5;i++)	//Loop to give numbers
	{
		for(j=0;j<4-i;j++)	//Inner Loop to get Pattern Space
			printf(" ");	//To Print Space
		for(k=0;k<=i;k++)	//Another Inner loop to get star in pattern
			printf("* ");	//To print * in Pattern
		printf("\n");	//To print in Separate line
	}	//End of the outer loop
}	//End of the main

