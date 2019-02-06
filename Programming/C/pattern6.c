#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=-3;i<=3;i++)	//Outer Loop rotation to get numbers
	{
		k=i;
		if(k<0)
			k=-k;
		for(j=3;j>=0;j--)	//Inner loop to get pattern
		{
			if(j<=k)
				printf("* ");
			else
				printf(" ");
		}	//End of the Inner loop
		printf("\n");	//To print in Separate line
	}	//End of the Outer loop
}	//End of the Main
