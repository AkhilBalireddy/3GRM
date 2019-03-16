#include<stdio.h>
int main()
{
int num,pos,opt;
printf("enter the number:- \n");
scanf("%d",&num);
printf("enter the bit position:- \n");
scanf("%d",&pos);
//num=num|1<<pos;	//to set a bit
//num=num&~(1<<pos);	//to Clear a bit
num=num^1<<pos;
printf("After the process the number is %d\n",num);
}


