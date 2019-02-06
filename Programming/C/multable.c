#include<stdio.h>
int main()
{
	int number,i=1;
	printf("enter a number to get the Multiplication Table:-\n");	//To take Input from the user 
	scanf("%d",&number);				//To scan the given Number
L1:
	printf("%d*%d = %d\n",num,i,num*i);		//Condition for Multiplication Table
	i++;
	if(i<=10)				//Condition to get the multiplication upto 10
		goto L1;
	printf("ThankYou\n");			//To Print ThankYou On Screen
}



