#include<stdio.h>
int main()
{
int number, multiplication, remainder, sum,temparary;
    printf("enter the number to find Armstrong Numbers:- \n");  //To Take Number
scanf("%d",&number);        //To scan the Number
temparary=number;
while(number>0)
{
    r=number%10;        //To separate variables
    multiplication=r*r*r;
    sum=sum+multiplication;
    number=number/10;
}
    number=temparary;
if(sum==number)     //Condition for Armstrong Number
    printf("Given Number is Armstrong Number\n");   //To print on screen
else
    printf("Not Armstrong Number");
}

