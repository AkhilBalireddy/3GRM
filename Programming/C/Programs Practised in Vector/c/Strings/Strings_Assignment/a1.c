#include<stdio.h>
main()
{
	int i,j,pos;
	char ar[10];
	printf("enter a string");
	scanf("%s",ar);
	/*	for(i=0;ar[i]!='\0';i++);

		for(j=i-1;j>=0;j--)
		printf("%c ",ar[j]);*/
	//printf("\n");
	for(pos=0;pos<=9;pos++)
		printf("%c",ar[pos]);
	printf("\n");
}
