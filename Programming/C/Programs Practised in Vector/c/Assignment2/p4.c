#include<stdio.h>
int main()
{
int i;
	char ch[20];
	printf("enter the character:-\n");
	scanf("%s",ch);
	printf("Before process ch=%s\n",ch);
for(i=0; ch[i];i++)
{
	if(ch[i]>='a' && ch[i]<='z')
	
ch[i]=ch[i]-32;
	else if(ch[i]>='A' && ch[i]<='Z')
		ch[i]=ch[i]+32;
	else
		printf("Wrong input\n");
}

	printf("After process ch=%s\n",ch);
}

