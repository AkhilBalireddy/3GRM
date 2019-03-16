#include<stdio.h>
main()
{
int num,pos;
printf("enter the number to set a bit:-\n");
scanf("%d",&num);
printf("enter the bit position to set :-\n");
scanf("%d",&pos);
num=num|1<<pos;
printf("number after set a bit is %d\n",num);
}
