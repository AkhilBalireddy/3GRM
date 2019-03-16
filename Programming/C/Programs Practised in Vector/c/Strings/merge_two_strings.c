#include<stdio.h>
int main()
{
int i=10,j;
j=i;
char c[25]="abcde",d[25]="fghijk";
printf("\nbefore merging c[i]=%s\n",c);
printf("before merging d[i]=%s\n",d);
for(i=0;c[i]!='\0';i++);
for(j=0;d[j];j++)
{
c[i+j]=d[j];
}

c[i+j]='\0';
printf("\nafter merging c=%s\n\n",c);
}

