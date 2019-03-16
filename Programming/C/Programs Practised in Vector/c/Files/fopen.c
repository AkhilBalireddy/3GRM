#include<stdio.h>
main(int argc, char **argv)
{
FILE *fp;
if(argc!=2)
{
printf("Usage:- ./a.out filename\n");
return;
}
fp=fopen(argv[1],"w");
if(fp==0)
{
printf("File not Present\n");
return;
}
printf("File is present\n");
}

