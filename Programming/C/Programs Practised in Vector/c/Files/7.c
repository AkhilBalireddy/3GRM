#include<stdio.h>
main(int argc,char **argv)
{
	int c=0;
	FILE *fp;
	char s[20];
	if(argc!=3)
	{
		printf("Usage:-./a.out fname string\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File not Present\n");
		return;
	}
	c=0;
	while(fscanf(fp,"%s",s)!=-1)
	{
printf("%s\n",s);		
if(strcmp(s,argv[2])==0)
			c++;
	}
	printf("count=%d\n",c);
}

