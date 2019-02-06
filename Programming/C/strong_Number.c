#include<stdio.h>
int main()
{
	int i,j,number,remainder,sum;
	printf("enter the number to chck strong number or not:-\n");
	scanf("%d",&number);	//To scan the number
	while(num>0) // loop rotation 
	{
		r=num%10;	//Condition to get remainder
		i=r+r+r;
		sum=sum+i;
		num=num/10;
	}	//End of the loop
	if(sum==num)		//Condition for strong number
		printf("Given Number is Strong Number");	//To print Strong number on screen 
	else
		printf("Given Number is not strong Number");	//To print as not strong number on screen 
}

