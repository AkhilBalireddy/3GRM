#include<stdio.h>
int main()
{
float f=23.5;
int *ip,pos;
ip=(int *)&f;
for(pos=31; pos>=0; pos--)
printf("%d", *ip>>pos&1);
printf("\n");
}

