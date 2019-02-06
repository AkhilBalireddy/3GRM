#include<stdio.h>
void swap(int *,int *);		//Function Declaration
int main()
{
	int i=10,j=20;
	printf("Given Numbers Before swapping i=%d,j=%d\n",i,j);	//To print Numbers before swapping
	swap(&i,&j);		// Function Call
	printf("Given numbers After swapping i=%d,j=%d\n",i,j);		//To print the numbers after swap
}
void swap(int *p,int *q)		//Function Definition
{
	int temparary;
	temparary=*p;
	*p=*q;
	*q=t;		//Condition for Swapping the numbers
}

