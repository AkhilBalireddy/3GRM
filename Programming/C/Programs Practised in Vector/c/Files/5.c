#include<stdio.h>
main()
{
FILE *fp;
char s[20];
fp=fopen("data","w");
printf("Enter the string\n");
scanf("%s",s);
fprintf(fp,"%s",s);
}

