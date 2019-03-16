#include<stdio.h>
#include<string.h>
main(int v,char **c)
{
	FILE *fp;
	char s[200],s1[20];
	int i,j,l;
	char ch;
	if(v!=3)
	{
		printf("Usage:-./a.out fname string \n");
		return;
	}
	fp=fopen(c[1],"r+");
	if(fp==0)
	{
		printf("file not present\n");
		return;
	}
	strcpy(s1,c[2]);
	for(l=0;s1[l];l++);
	for(i=0,j=l-1; i<j; i++,j--)
	{
		ch=s1[i];
		s1[i]=s1[j];
		s1[j]=ch;
	}
	while(fscanf(fp,"%s",s)!=-1)
	{
		if(strcmp(s,c[2])==0)
		{
			fseek(fp,-l,SEEK_CUR);
			fprintf(fp," %s",s1);
		}
	}
}



