#include<stdio.h>
int main()
{
float f=23.5, *fp;
int *ip;
fp=&f;
ip=(int *)&f;
printf("%d %f\n",*ip,*fp);
}

