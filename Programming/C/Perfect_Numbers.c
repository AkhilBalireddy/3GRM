#include<stdio.h>
int main()
{
	int number,sum,i,r,temparary;
	printf("enter the number\n");       //To take a Number from the user
	scanf("%d",&number);        //To scan The Given Number
//	temparary=number;
//	while(number>0)

for(i=0;i<=number;i++)      //Loop Rotation to get Perfect numbers
	{
		number=number%10;       //Condition to get digits individually
		sum=sum+number;         //Condition to get sum value
//num=num/10;
//num++;		
	}

//	num=temp;
	if(sum==number)     //Condition for Perfect number
		printf("Given Number is Perfect Number");   //To print as Perfect number on Screen
	else
		printf("Given number is not Perfect Number");   //To print not perfect number on screen

