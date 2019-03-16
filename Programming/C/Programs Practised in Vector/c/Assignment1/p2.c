#include<stdio.h>
int main()
{
int num,len;
printf("enter the number:- \n");
scanf("%d", &num);
//if(num>0)
len=(sizeof(num)*8)-2;
if((num>>len))
printf("The given number %d is positive number\n",num);
else
printf("The given number %d is negative number\n",num);
}

