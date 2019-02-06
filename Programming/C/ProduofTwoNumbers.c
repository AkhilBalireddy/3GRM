#include<stdio.h>
int main()
{
	int number1,number2,product;
	printf("enter two numbers for product\n");
	printf("enter value for number1");	//To take a number from user
	scanf("%d",&number1);       //To scan number1
	printf("enter value for number2");
	scanf("%d",&number2);       //to scan number2
	product=number1*number2;        //condition for Profuct of two numbers
	printf("product=%d",product);       //to print the product
	return 0;
}
