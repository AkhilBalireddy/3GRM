#include<stdio.h>
main()
{
	int n,i=0,j=0;
	printf("enter n\t");
	scanf("%d",&n);

	int a[n][n];

	for(i=0;i<n;i++)
	{
//		a[i][j]=i+j;
		for(j=0;j<n;j++)
		{
			a[i][j]=i+j;
			printf("%2d",a[i][j]);
		}
		printf("\n");
		j=0;
	}
}
