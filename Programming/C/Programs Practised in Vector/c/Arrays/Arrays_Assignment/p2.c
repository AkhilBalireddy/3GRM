#include<stdio.h>
int main()
{
	int ele,i,big,index;
	int  a[5];
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter numbers for array:-\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf(" %d",a[i]);
	printf("\n");

	big=a[0];
	index=0;
	for(i=1;i<ele;i++)
		if(a[i]>big)
		{
			big=a[i];
			index=i;
		}

	printf("big element=%d index=%d\n",big,index);
}

