#include<stdio.h>
main()
{
char s[100],w[20];
printf("Enter File Name:-\n");
scanf("%s",s);
fp=fopen(s,"r+");
if(fp==0)
{
printf("file not found\n");
return;
}
printf("\n Your data in opened file is \n%s",s);
printf("Which word you want to replace:-\n");
scanf("%s",w);
printf("Enter the word to replace in file\n");
scanf(" %[^\n]",);




