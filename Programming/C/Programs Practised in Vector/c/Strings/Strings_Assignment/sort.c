#include<stdio.h>
#include<string.h>
main()
{
	int i,j,al,te,l,op;
	char a[25];
	printf("enter string\t");
	gets(a);
	printf("enter opttion\n1.capital\n2.small");
//	scanf("%c",&op);

	al=strlen(a);
	printf("%d\n",al);
	for(i=0;a[i];i++)
	{
		if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122));
		else
		{
			for(j=i ;a[j];j++)
				a[j]=a[j+1];
			i--;
		}
	}
	puts(a);

	scanf("%d",&op);

	if(op==1)
	{
		for(l=0;a[l];l++)
			if(a[l]>=97 && a[l]<=122)
				a[l]=a[l]-32;
	}
	else if(op==2)
	{
		for(l=0;a[l];l++)
			if(a[l]>=65 && a[l]<=90)
				a[l]=a[l]+32;
	}
	al=strlen(a);
	puts(a);

	for(i=0;a[i];i++)
	{
		for(j=i+1;j<al;j++)
			if(a[i]>a[j])
			{
				te=a[i];
				a[i]=a[j];
				a[j]=te;
			}
	}




	puts(a);

}
