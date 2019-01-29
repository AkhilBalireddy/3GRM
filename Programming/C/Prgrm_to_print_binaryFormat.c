#include<stdio.h>
int main()
{
int num,pos;
printf("enter a number");
scanf("%d",&num);
pos=sizeof(int)*8-1;
L1:
printf("%d",num>>pos&1);
pos--;
if(pos>=0)
goto L1;
printf("\n Thanks \n");
}

