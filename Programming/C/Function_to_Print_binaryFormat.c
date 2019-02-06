#include<stdio.h>
void print_binary(int);		//Function Desclarartion
int main()
{
	int num;
	printf("enter the number");	//to Take the Number
	scanf("%d",&num);		//To scan the number which we given
	print_binary(num);		//function call
	printf("\n");
}
void print_binary(int n)		//function declaration
{
	int pos;
	for(pos=31;pos>=0;pos--)		//Loop rotation for 32 bits
		printf("%d",n>>pos&1); 		//to print numbers in binary
}

