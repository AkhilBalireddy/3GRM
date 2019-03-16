#include<stdio.h>
int main()
{
int num,i;
//printf("enter number");
//scanf("%d",&num);
for(num=1;num<=100;num++)
{
for(i=2;i<num;++i)
{
if(num%i==0)
break;
}
if(num==i)
printf("%d ",num);

}
}


