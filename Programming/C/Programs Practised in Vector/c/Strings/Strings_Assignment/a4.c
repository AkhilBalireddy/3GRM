#include<stdio.h>
#include<string.h>
main()
{
	int i,j,k;
	char a[5],b[5];
	printf("enter a\t");
	gets(a);

	printf("enter b\t");
	gets(b);
	
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		if(a[i]!=b[i])
			break;
	}
if(a[i]==b[i]) printf("same\n");
else printf("diff\n");
}

