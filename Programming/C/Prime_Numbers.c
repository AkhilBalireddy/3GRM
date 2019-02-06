#include<stdio.h>
int main()
{
	int number,loop,count=0;
	printf("enter the number to check prime or not:-\n");	//To take number from user
	scanf("%d",&number);		//To scan the number
	for(loop=1;loop<=number;i++)	//Loop rotation to get prime numbers
		if(number%i==0)		//Condition for Prme number
			count++;	//To take count
	if(count==2)
		printf("prime number");		//To print as prime number
	else
		printf("not prime number");	//To print as not a prime number

}

