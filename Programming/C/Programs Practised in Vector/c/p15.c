#include<stdio.h>
main()
{
int num,pos;
printf("enter  number and position\n");
scanf("%d%d",&num,&pos);
printf("before num=%d\n", num);
num=num|1<<pos;  //to clear bit
//num=num&~(1<<pos);
printf("After num=%d\n", num);

}


