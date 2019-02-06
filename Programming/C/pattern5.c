#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<4;i++)	//Outer loop to give nnumbers
	{
		for(k=i;k>=0;--k)	//Inner loop to get space on pattern
			printf(" ");	//To print space in pattern
		for(j=4-i;j>0;--j)	//Loop to get * in pattern
			printf("* ");	//To print * in pattern
		printf("\n");	//To print separate line
	}	//End of the outer loop
}	//End of the main


