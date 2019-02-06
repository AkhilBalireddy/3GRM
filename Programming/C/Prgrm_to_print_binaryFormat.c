#include<stdio.h>
int main()
{
	int number,position;
	
	printf("enter a number");		//To take a number
	scanf("%d",&number);		//To scan the number

	position=sizeof(int)*8-1;		//Condition to know position
L1:
	printf("%d",number>>position&1);	//To print binary numbers
	position--;
	if(position>=0)
		goto L1;
	printf("\n Thanks \n");
}

