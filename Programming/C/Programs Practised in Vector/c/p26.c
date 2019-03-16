#include<stdio.h>
int main()
{
int n,i,j,c=0;
printf("enter the number");
scanf("%d",&n);
for(i=0,c=0;i<n;i++)
{
if(n%i==0)
c++;
}
if(c==2)
printf("numbr");
else
printf("not nmbr\n");
}


