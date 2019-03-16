#include<stdio.h>
int main()
{
int i=258, *ip;
char *cp;
ip=&i;
cp=(char *)&i;
printf("*ip=%d *cp=%d\n",*ip,*cp);
*cp='a';
printf("*ip=%d *cp=%d\n",*ip,*cp);
}

