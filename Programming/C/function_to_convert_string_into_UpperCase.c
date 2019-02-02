#include<stdio.h>
void my_strupr(char *);
int main()
{
char s[20];
printf("enter the string\n");
scanf("%s",s);
printf("before string = %s\n",s);
my_strupr(s);
printf("After string = %s\n",s);
}
void my_strupr(char *p)
{
while(*p)
{
if(*p>='a' && *p<='z')
*p=*p-32;
++p;
}
}


