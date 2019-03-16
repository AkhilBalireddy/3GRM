#include<stdio.h>
main(int argc, char **argv)
{
	int i;
	char ch;
	FILE *fs, *fd;
	if(argc<3)
	{
		printf("Usage:- ./a.out sf df1 df2\n");
		return;
	}
	fs=fopen(argv[1],"r");
	if(fs==0)
	{
		printf("File Not Present\n");
		return;
	}
	for(i=0; i<argc; i++)
	{
		fd=fopen(argv[i],"w");
		while((ch=fgetc(fs))!=-1)
				fputc(ch,fd);
				rewind(fd);
	}
}

