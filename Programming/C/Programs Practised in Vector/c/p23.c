#include<stdio.h>
main()
{
int num,pos;
printf("enter the number");
scanf("%d",&num);
for(pos=31;pos>=0;pos--)
printf("%d",num>>pos&1);
}
