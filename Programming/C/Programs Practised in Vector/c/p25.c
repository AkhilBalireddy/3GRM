#include<stdio.h>
int main()
{
	int i,j,sp,n;
	printf("enter the value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(sp=0;sp<=i;sp++)
			printf(" ");
		for(j=0;j<n-i;j++)
			printf(" %d",n-i);
		printf("\n");
	}
}

