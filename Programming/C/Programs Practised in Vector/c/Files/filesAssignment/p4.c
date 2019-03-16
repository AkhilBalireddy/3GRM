#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *fp;
	int c=0,i=0;
	char ch;
	if(argc!=2)
	{
		printf("Usage:->/a.out filename\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File not present\n");
		return;
	}
	while((ch=fgetc(fp))!=EOF)	
		c++;
	printf("count %d\n",c);
	char s[c+2];
	rewind(fp);
	while((ch=fgetc(fp))!=EOF)
	{
		s[i]=ch;
		i++;

	}
	rewind(fp);
	s[i]='\0';
	s[0]=s[0]^(1<<5);
	for(i=1;s[i];i++)
	{
		if(i<c)
		{
			if(s[i-1]==' ')
			s[i]=s[i]^(1<<5);
			else if(s[i-1]=='\n')
				s[i]=s[i]^(1<<5);
		}
	}
		fclose(fp);
		fp=fopen(argv[1],"w");
		for(i=0;s[i];i++)
			fputc(s[i],fp);
	
}

