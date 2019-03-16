#include<stdio.h>
main()
{
	int a[3][3];
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf(" %d",&a[i][j]);



	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%2d ",a[i][j]*a[i][j]);
		printf("\n");
	}
}
