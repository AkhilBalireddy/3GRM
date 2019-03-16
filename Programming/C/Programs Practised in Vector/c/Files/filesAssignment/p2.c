#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *fp;
	int i,l=0;
	char ch,s[100],s1[100];
		if(argc!=3)
		{
			printf("Usage:-./a.out FileName LineNumber\n");
			return;
		}
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("FIle not Present\n");
		return;
	}
	i=atoi(argv[2]);
	while(fgets(s,100,fp))
	{
		l++;
		if(l!=i)
			strcat(s1,s);
		else
			l++;
	}
	fp=fopen(argv[1],"w");
		fputs(s1,fp);
}

