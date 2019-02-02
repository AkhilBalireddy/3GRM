#include<stdio.h>
void my_strcpy(const char *, char *);
int main()
{
char s[]="AkhilReddy";
char d[10];
my_strcpy(s,d);
printf("s=%s d=%s\n",s,d);
}
void my_strcpy(const char *p,char *q)
{
while(*p)
{
*q=*p;
p++;
q++;
}
*q='\0';
}

