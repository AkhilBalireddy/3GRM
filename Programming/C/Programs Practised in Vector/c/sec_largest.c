#include<stdio.h>
int main()
{
	int ele,i,l,sl,a[5];
ele=sizeof(a)/sizeof(a[0]);
	printf("enter elements");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);

	if(a[0]>a[1])
	{
		sl=a[1];
		l=a[0];
	}

	else
	{
sl=a[0];
		l=a[1];
	}
printf("large value in first two numbers is %d\n",l);
printf("second large value in first two numbers is %d\n",sl);



	for(i=2;i<ele;i++)
	{
		if(a[i]>l)
		{
			sl=l;
			l=a[i];
		}
		else if(a[i]>sl)
		sl=a[i];

	//	printf("%d",sl);
	}
		printf("second largest number is %d",l);
}
