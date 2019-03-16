#include<stdio.h>
main()
{
	int al,bl,i,j;
	char a[25],b[10];
	printf("enter a\t");
	scanf("%s",a);
	printf("enter b\t");
	scanf("%s",b);

	for(al=0;al[a]!='\0';al++);
	printf("a length=%d\n",al);
	for(bl=0;bl[b]!='\0';bl++);
	printf("b length=%d\n",bl);

	a[al]=' ';
	printf("%d\n",' ');
	for(i=al,j=0;b[j]!='\0';j++,i++)
		a[i]=b[j];
	a[i]='\0';
	printf("%s\n",a);
}
