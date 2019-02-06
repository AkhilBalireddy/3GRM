#include<stdio.h>
int main()
{
	int number,number1,sum;
	printf("enter the number");     //To Enter the Number
	scanf("%d",&number);   		 //To Scan Number
	for(number1=number,sum=0;number1;number1=number1/10)    //Loop rotation to sum of digits of number
		sum=sum+number1%10;     //Condition for sum of digits of number
	printf("sum=%d\n",sum);     	//To print Sum
}
