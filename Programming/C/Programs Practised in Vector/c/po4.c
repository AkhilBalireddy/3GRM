#include<stdio.h>
int main()
{
int i=10;
char *cp;
cp=(char *)&i;
if(*cp==10)
printf("little \n");
else
printf("Big\n");
}

