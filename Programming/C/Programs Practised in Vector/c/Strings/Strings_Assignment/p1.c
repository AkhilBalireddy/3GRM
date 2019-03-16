                                                                                #include<stdio.h>
main()
{
	char s[50];
	int i,j=0;
	printf("enter the string:-\n");
	gets(s);
	j=0;
	for(i=0;s[i];i++)
	{
		if(s[i]==32 && s[i+1]==32)
		continue;
		s[j++]=s[i];
	}
	s[j]='\0';
	printf("%s\n",s);

}

