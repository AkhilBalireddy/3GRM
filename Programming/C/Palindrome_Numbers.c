#include<stdio.h>
int main()
{
	int sum, number, loop, remainder, temparary;
	printf("enter the number to check polindrome or not :- ");		//To take number 
	scanf("%d",&num);		//To scan the number
	temparary=number;
	while(number>0)
		//for(loop=0;loop<=number;loop++)	//Loop to get sum of the number
	{
		remainder=number%10;
		sum=sum*10+remainder;
		number=number/i;
	}
	number=temparary;
	if(sum==number)
		printf("Polindrome Number");		//To print as Polindrome number
	else
		printf("Not Polindrome Number");
}

