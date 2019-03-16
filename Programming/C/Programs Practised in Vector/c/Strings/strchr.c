#include<stdio.h>
int* my_strchr(char *, char);
main()
{
	char ch,s[30];
	int i, *r;
	printf("Enter the string:-\n");
	scanf("%s",s);
	printf("enter a character:-\n");
	scanf(" %c",&ch);
	r=my_strchr(s,ch);
if(r==0)
printf("character not found\n");
else
	printf("%u\n",r);
	printf(" %c\n",ch);


}
int* my_strchr(char *s,char ch)
{
	int i=0;
	while(s[i])
	{
		if(ch==s[i])
		{
		return(&s[i]);
		
		}
		else
	
		i++;
	}

return 0;
}

