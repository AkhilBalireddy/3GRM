#include<stdio.h>
int main()
{
int m;
printf("enter student marks\n");
scanf("%d",&m);
if(m>=40)
	{
	if(m>=60)
	{
		if(m>=75)
		{
			if(m>=100)
			{
			printf("\n Sorry.... you entered wrong marks\n\n");
			}
		else
		{
		printf("\nA\n\n");
		}
		}
		else
		{	
		printf("\nB\n\n");
 		}
	}
		else
		{
		printf("\nC\n\n");
 		}
	}
	else
	{ 
	printf("\nFail\n\n");
	}
}

