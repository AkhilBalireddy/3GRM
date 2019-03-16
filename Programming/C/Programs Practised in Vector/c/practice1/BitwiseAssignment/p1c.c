#include<stdio.h>
main()
{
int num,pos;
printf("enter the number to compliment a bit:-\n");
scanf("%d",&num);
printf("enter the bit position to clear a bit :-\n");
scanf("%d",&pos);
num=num^(1<<pos);
printf("number After Compliment a bit is %d\n",num);
}

