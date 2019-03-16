#include<stdio.h>
int main()
{
int i=10,j;
j=i;
char c[25],d[25];
printf("enter a string\n");
scanf("%s",c);
printf("before move c[i]=%s\n",c);
for(i=0;c[i]!='\0';i++)
{
d[i]=c[i];
}
d[i]='\0';
printf("After move d[i]=%s\n",d);
}













