#include<stdio.h>
int main()
		{
		int i,j,pos,ele;
		printf("enter the number of elements:-");
		scanf("%d",&ele);
		int a[ele];
		printf("enter the elements:-");
		for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
		for(i=0;i<ele;i++)
		printf("%d ",a[i]);
		printf("\n");
		printf("enter the position to delete");
		scanf("%d",&pos);
		
for(i=0;i<pos-1;i++)
{
	if((pos-1)==i)
	break;
}

for(j=i;j<ele;j++)
{
	a[j]=a[j+1];
}
		
for(i=0;i<ele-1;i++) 
 
		printf("%d ",a[i]);
		printf("\n");
		}


