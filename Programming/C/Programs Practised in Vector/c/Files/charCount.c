#include<stdio.h>
main(int argc, char **argv)
{
int c=0;	
char ch;
	FILE *fp;
	if(argc!=3)
	{
		printf("Usage:- ./a.out fname char\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File not Present\n");
		return;
	}
	c=0;
	while((ch=fgetc(fp))!=-1)
	{
		if(ch==argv[2][0])
			c++;
	}
	printf("count=%d\n",c);
}

