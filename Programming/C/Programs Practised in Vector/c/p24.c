#include<stdio.h>
int main()
{
	int i,j,k,sp;
	for(i=-3;i<=3;i++)
	{
		k=i;
		if(k<0)
			k=-k;


		for(j=3;j>=0;j--)
		{
			if(j<=k)
				printf(" ");
			else
				printf(" *");
			}
			printf("\n");
		}

	}



