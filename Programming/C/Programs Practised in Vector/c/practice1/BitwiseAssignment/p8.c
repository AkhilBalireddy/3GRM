#include<stdio.h>
int main()
{
char ch;
printf("enter the Character to convert:-\n");
scanf("%c",&ch);
//if("ch>='A'&& ch<=='Z'")
ch=ch^32;
printf("After Convertthe character is %c\n",ch);
}

