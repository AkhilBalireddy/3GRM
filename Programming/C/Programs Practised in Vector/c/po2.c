#include<stdio.h>
int main()
{
char ch,*cp;
int i, *ip;
float f, *fp;
printf("%d %d %d\n",sizeof(cp),sizeof(ip),sizeof(fp));
printf("%d %d %d\n",sizeof(ch),sizeof(i),sizeof(f));
}

