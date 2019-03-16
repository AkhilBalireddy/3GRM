#include<stdio.h>
int main()
{
int i=258,*ip;
char *cp;
ip=&i;
cp=(char *)&i;
printf("&i=%u\n",&i);
printf("ip=%u ip+1=%u\n",ip,ip+1);
printf("cp=%u cp+1=%u\n",cp,cp+1);
}
