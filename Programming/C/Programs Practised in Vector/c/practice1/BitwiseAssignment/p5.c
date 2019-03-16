#include<stdio.h>
main()
{
int num;
printf("enter the number to check power of 2 or not\n");
scanf("%d",&num);
if(num=num&num-1)
printf("the number is power 2\n");
else
printf("not power of 2");
}

