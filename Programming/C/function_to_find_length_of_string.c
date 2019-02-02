#include<stdio.h>
int my_strlen(const char *);
int main()
{
char s[]="AkhilReddy";
int l;
l=my_strlen(s);
printf("l=%d\n",l);
}
int my_strlen(const char *p)
{
int i,l;
for(i=0;p[i];i++)
return l;
}
