#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch, s[100],s1[100];
	int l=0,i,r=0,len=0;
	if(argc!=4)
	{
		printf("Usage:-./a.out FileName LineNumber to replace\n");
		return;
	}
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("File not Present\n");
		return;
	}
	q=atoi(argv[2]);
	printf("%d",i);
s1=argv[2]
	while(fgets(s,100,fp))
		r++;
	printf("%d",r);
	rewind(fp);

	/*	while(fgets(s,100,fp))
		{
		l++;	
		if(l==(i-1))
		{
		i=r-1;
	//			fputs(argv[3],fp);
	while(s1[k])
	{
	s=
	while((ch=fgetc(fp))!=-'\n');
	}


	 */
	k=0;
	l=0;
	i=0;
	while((ch=fgetc(fp))!=-1)
	{	
		s[i++]=ch;
		if(ch=='\n') l++;
		if(l==(q-1))
		{
			while(s1[k])
				s[i++]=s1[k++];
			s[i]='\n';
			while((ch=fgetc(fp))!='\n')
		}
	}
	s[i]=0;
	printf("%s",s);


}





/*		l++;
		len=strlen(s);
		if(l==i)
		{
		fseek(fp,-len,1);
			fputs(argv[3],fp);*/

		

	}
	fclose(fp);	
	fp=fopen(argv[1],"w");
	fputs(s,fp);




}


