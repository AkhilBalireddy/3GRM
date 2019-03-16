#include<stdio.h>
int main()
{
char  i,ch,j;
printf("enter the character:-\n");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
{
ch=ch-32;
}
if(ch>='A' && ch<='Z')
{
ch=ch+32;
}
else
printf("Wrong input\n");
printf("\nAfter ch=%c\n",ch);
}

