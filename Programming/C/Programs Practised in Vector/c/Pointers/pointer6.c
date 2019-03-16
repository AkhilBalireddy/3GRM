/*#include<stdio.h>
int main()
{
int i=258;
char *cp;
cp=(char *)&i;
printf("%d\n",*cp);
cp=cp+1;
printf("%d\n",*cp);
}*/



#include<stdio.h>
int main()
{
int i=258;
int *ip;
ip=(int *)&i;
printf("%d\n",*ip);
ip=ip+2;
printf("%d\n",*ip);
}

