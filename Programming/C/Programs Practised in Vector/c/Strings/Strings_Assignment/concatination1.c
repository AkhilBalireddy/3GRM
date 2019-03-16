#include<stdio.h>
#include<string.h>
main()
{
	int al,i,j,k;
	char a[30],b[5],c[5],d[5],*cp;
	printf("enter string a\t");
	scanf("%s",a);
	printf("enter string b\t");
	scanf(" %s",b);
	printf("enter string c\t");
	scanf(" %s",c);
	printf("enter string d\t");
	scanf(" %s",d);

	cp=b;

	printf("%u %u %u\n",b,c,d);		//b c d address
	al=strlen(a);
	a[al]=' ';

//printf("%d\n",al);
	for(k=1;k<=3;cp=cp+5,k++)
	{
		for(i=al+1,j=0;*(cp+j);i++,j++)
			a[i]=*(cp+j);
//		a[i]=' ';
		al=strlen(a);
//		a[i]=' ';
	}
puts(a);
}
