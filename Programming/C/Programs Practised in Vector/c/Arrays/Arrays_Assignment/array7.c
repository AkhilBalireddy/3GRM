#include<stdio.h>
int main()
{
int i;
char f[10],s[10];
printf("enter string1\n");
scanf("%s",f);
printf("enter another string to compare\n");
scanf("%s",s);
for(i=0;f[i];i++)
//if(f[i]!=s[i])
//break;
if(f[i]==s[i])
{
printf("\n Both Strings are eual...\n");
//break;
}
else if(f[i]!=s[i])
{
printf("\n Both strings are not equal\n");
//break;
}
}
