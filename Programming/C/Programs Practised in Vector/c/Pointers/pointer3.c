#include<stdio.h>
int main()
{
int i,pos;
float f=23.5;
char *cp;
cp=(char *)&f;
cp=cp+3;
for(i=0;i<=4;i++)
{
for(pos=7;pos>=0;pos--)
printf("%d",*cp>>pos&1);
cp=cp-1;
}
}
