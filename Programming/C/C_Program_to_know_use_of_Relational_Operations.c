#include<stdio.h>
int main()
{
	int number1,number2;
	printf("Enter Values for number1 and number2:-");
	scanf("%d %d", &number1,&number2);       //to scan the variables
	if(number1 < number2)            		 //Condition to check lessthan
		printf("%d is lessthan %d\n", number1,number2);

	else if(number1 <= number2)           		 //condition to check lessthan or equal to
		printf("%d is lessthan or equal to %d\n", number1,number2);

	else if(number1 == number2)           		 //condition to check equal to
		printf("%d is equal to %d\n", number1,number2);

	else if(number1 != number2)           		 //Condition to check not equal to
		printf("%d is not equal to %d\n", number1,number2);

	else if(number1 > number2)             		//Condition to check greater then
		printf("%d is greater than %d\n", number1,number2);

	else if(number1 >= number2)           		 //Condition to check greater than or equal to
		printf("%d is greater than or equal to %d\n", number1,number2);
	return 0;
}


