#include<stdio.h>
main()
{
	int a[3][3];
	int i,j;
	for(i=0;i<9;i++)
		scanf(" %d",a[i]);


//	for(i=0;i<3;i++)
	{
		for(j=0;j<9;j++)
			printf("%d ",*a[j]);
		printf("\n");
	}
}
