#include<stdio.h>
main()
{
	int a[5]={10,20,30,40,50},i;
	int (*p)[5]=a;
//	p=a;
	for(i=0;i<5;i++)
		printf("%d ",(*p)[i]);
}
