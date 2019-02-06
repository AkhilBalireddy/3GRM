#include<stdio.h>
int main()
{
	int number1, number, reverse=0, remainder;
	printf("enter the number");	//To take input from the user
	scanf("%d",&number);		//To scan the number
	number1=num;
	while(num>0)		//Loop rotation to get polindrome numbers
	{
		remainder=num%10;		//Condition to get digits of the number
		reverse=reverse*10+remainder;	//Condition for Reverse the number
		number=number/10;
	}
	if(number1==reverse)		//Condition to get Polindrome numbers
	{
		printf("%d is a polindrome number", number1);
	}
	else
		printf("%d is not a polindrome number", number1);
}

