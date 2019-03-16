#include<stdio.h>
int main()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
//if(num&num-1)
if(num%2==0)
printf("%d is power 2 number",num);
else
printf("%d is not power of 2 number",num);
}

