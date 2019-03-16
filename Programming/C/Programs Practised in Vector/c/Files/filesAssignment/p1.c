#include<stdio.h>
main(int argc,char **argv)
{
	//char s[20];
	char ch;
	FILE *fp;
	if(argc!=2)
	{
		printf("Usage:-./a.out fname\n");
		return;
	}
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("File not Present\n");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')		
		{
			
			ch=ch^32;
			fseek(fp,-1,1);
			fputc(ch,fp);
		}
	}
}

