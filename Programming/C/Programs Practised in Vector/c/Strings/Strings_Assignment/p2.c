#include<stdio.h>
main()
{
	char s[50],c,t;
	int i,j,k,len,m,n;
	printf("enter the string:-\n");
	gets(s);
	for(i=0;s[i];i++)
		len=i;
	for(i=0;s[i];i++)
	{
		m=i;
		for(;s[i]!=32 && s[i];j++)
			n=i-1;
		for(;m<n;m++,n--)
		{
			t=s[m];
			s[m]=s[n];
			s[n]=t;
		}
	}
	printf("%s\n",s);
}

