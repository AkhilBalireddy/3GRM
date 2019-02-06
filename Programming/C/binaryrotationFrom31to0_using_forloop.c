#include<stdio.h>
int main()
{
	int number,position;
	printf("enter the number"); //To Take the Number
	scanf("%d",&number);        //To scan the Number
	for(position=31;position>=0;position--)     //Loop rotation for binary format
		printf("%d",number>>position&1);        //To print in binary format
}

