#include<stdio.h>
main()
{
	char c[10],ch;
	int i,j;
	printf("enter string\t");
	scanf("%s",c);
	printf("enter character to be replaced\t");
	scanf(" %c",ch);

	for(i=0;c[i]!='\0';i++)
		if(c[i]==ch)
			if(ch>96 && ch<=122)
				ch=ch-32;
			else ch+=32;

	printf("%s\n",c);

}























/*	int i,count=0;
	char c[25]="Hello",d='l';
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==d)
		{
			c[i]='e';
			count++;
		}
	}
	
	printf("%d\n",count);	
}
	int a,b,d;
	char c[10],temp;
	scanf("%s",c);
	for(a=0;c[a]!=0;a++);
	for(b=0,d=a-1;b<d;b++,d--)
	{
	temp=c[b];
	c[b]=c[d];
	c[d]=temp;
	}
printf("\n%s\n",c);
}

printf("%s",c);
}*/
