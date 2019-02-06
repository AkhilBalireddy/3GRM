#include<stdio.h>
int main()
{
	int number,number1,sum;
	printf("Enter the number to get reverse:-\n");	//To take input from the user
	scanf("%d",&number);	//To scan the number
	for(number1=number,sum=0;number1;number1=number1/10)	//Loop Rotation to raverse digits
		sum=sum*10+number1%10;	//Condition for Reverse the number
	printf("sum=%d\n",sum);		//To print the sum on screen
}

