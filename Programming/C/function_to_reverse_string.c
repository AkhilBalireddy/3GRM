#include<stdio.h>
void my_strrev(char *);
int main()
{
char s[20];
printf("enter the string");
scanf("%s",s);
printf("before s=%s\n",s);
my_strrev(s);
printf("after s=%s\n",s);
}
void my_strrev(char *p)
{
int l,i,j;
char t;
l==my_strrev(p);
//for(i=0;j=l-1;i<j;i++,j--)
while(j==i-1)
{
t=p[i];
p[i]=p[j];
p[j]=t;
i++;
j--;
}
}

