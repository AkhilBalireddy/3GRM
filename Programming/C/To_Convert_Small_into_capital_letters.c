#include<stdio.h>
int main()
{
char ch;
printf("enter Character\n");
scanf("%c",&ch);
if(ch>='a' && ch<='z')
ch=ch-32;
printf("ch=%c and its ASCII=%d\n",ch,ch);
}
