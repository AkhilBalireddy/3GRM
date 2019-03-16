#include<stdio.h>
main(int argc, char **argv)
{
char ch;
FILE *fp;
if(argc!=2)
{
printf("Usage:- ./a.out fname\n");
return;
}
fp=fopen(argv[1],"r");
if(fp==0)
{
printf("File not Present\n");
return;
}
printf("File is present\n");
while((ch=fgetc(fp)!=-1))
printf("%c ",ch);
}

