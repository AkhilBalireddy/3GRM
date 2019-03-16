#include<stdio.h>
main()
{
	int f,i,j;
	char s[25],ch;
	scanf("%[^\n]",s);
	printf("enter a character\t");
	scanf(" %c",&ch);

	for(f=0;s[f]!='\0';f++);
	printf("%d\n",f);
	
	for(i=f-1;i>=0;i--)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
			{
				s[j]=s[j+1];
			}
		}
	}
	printf("after %s\n",s);
}
