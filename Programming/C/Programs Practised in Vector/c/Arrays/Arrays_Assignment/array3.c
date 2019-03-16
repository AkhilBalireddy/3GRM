#include<stdio.h>
int main()
{
	int i,j,b[10],k=0,c,ch,ele;
	printf("enter number of elements");
	scanf("%d",&ele);
int a[ele];
	printf("enter elements");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0,c=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			break;
		}
		if(j==a[i])
		{
			c++;
			b[k++]=a[i];
		}
	}
	for(i=0;i<c;i++)
		printf("%d ",b[i]);
	printf("\n");
	printf("count=%d\n",ch);


}








