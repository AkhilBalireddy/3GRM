#include<stdio.h>
int main()
{

	int a[5],i,j,t,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the elements");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n-----------\n");
	printf("\n");

	for(i=0;i<ele-1;i++)
	{

		for(j=i+1;j<ele;j++)
		{
			if(a[i]>a[j])
			{
//				t=a[j];
//				a[j]=a[i];
//				a[i]=t;
				a[j]=a[i]+a[j]-(a[i]=a[j]);
			}
		}
	}
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}

