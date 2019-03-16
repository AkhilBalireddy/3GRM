#include<stdio.h>
main()
{
int num, pos;
printf("enter the number to clear a bit:-\n");
scanf("%d",&num);
printf("enter the bit position to clear abit:-\n");
scanf("%d",&pos);
num=num&~(1<<pos);
printf("Number after clear the bit is %d\n", num);
}

