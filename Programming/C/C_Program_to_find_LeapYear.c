#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year to check it is a leap year or not:");
	scanf("%d", &year);         //to scan the entered year
	if("year%400 == 0")         //condition to check leap year
		printf("It is a leap Year");
	else if("year%100 ==0")
		printf("It isn't a leap year");
	else if("year%4 == 0")      //another condition to check leap year
		printf("It is a leap year");       //to print leap year
	else
		printf("It isn't a leap year");
	return 0;
}


