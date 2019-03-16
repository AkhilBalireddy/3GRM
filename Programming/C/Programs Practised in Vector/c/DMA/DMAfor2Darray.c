#include<stdio.h>
#include<stdlib.h>
main()
{
	int **p,i,j,r,c;
	printf("enter rows and colomns:-\n");
	scanf("%d %d", &r,&c);
	p=malloc(sizeof(int)*r);
	for(i=0;i<r;i++)
		p[i]=malloc(sizeof(int)*c);
	printf("enter the data\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&p[i][j]);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf(" %d",p[i][j]);
		printf("\n");
	}
}

