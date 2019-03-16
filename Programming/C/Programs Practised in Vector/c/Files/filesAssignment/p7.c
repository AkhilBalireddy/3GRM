#include<stdio.h>
#include<stdlib.h>
main(int argc, char **argv)
{
int i;
char ch;
FILE  *fp,*fd;
if(argc<3)
{
printf("Usage:-./a.out fname d1 d2 d3\n");
return;
}
fp=fopen(argv[1],"r");
if(fp==0)
{
printf("file not present\n");
return;
}
for(i=2; i<argc; i++)
{
fd=fopen(argv[i],"w");
while((ch=fgetc(fp))!=-1)
fputc(ch,fd);
rewind(fp);
}
}

