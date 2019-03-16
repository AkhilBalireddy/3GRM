#include<stdio.h>
main(int argc, char **argv)
{
	int l,i,j,c=0;

	char ch,c1,c2,s[i];
	FILE *fp;
	if(argc!=2)
	{
		printf("Usage:-./a.out Fname\n");
		return;
	}
	fp=fopen(argv[2],"r");
	if(fp==0)
	{
		printf("File not Present\n");
		return;
	}
	fscanf(fp,"%s",s);
	printf("%s",s);

	while((ch=fgetc(fp))!=-1)
	{
		c++;
		if(ch=='\n')
		{
			if(c1>c2)
				c2=c1;
			c1=0;
		}
	}
	for(l=0;s[l];l++)
		for(i=0,j=l-1;i<j; i++,j--)
		{
			ch=s[i];
			s[i]=s[j];
			s[j]=ch;
		}
}









