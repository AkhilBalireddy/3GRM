#include<stdio.h>
int main()
{
	int num,pos,opt,c=0;
	printf("enter the number\n");
	scanf("%d",&num);
L1:
	printf("Enter bit position");
	scanf("%d",&pos);
	if(pos>=0 && pos<31)
	{

		printf("enter the opt\n1)Set the bit\n2)Clear the bit\n3)Compliment the bit");
		//To print options one by one
		scanf("%d",&opt);		//To Scan Options
		if(opt==1)
		{
			num=num|1<<pos; 	//Condition for set a bit
			printf("num=%d\n",num);		//To print the number after set a bit

		}
		else if(opt==2)
		{
			num=num&~(1<<pos);		//Condition for Clear a bit
			printf("num=%d\n",num);		//To print after clear a bit
		}
		else if(opt==3)
		{
			num=num^1<<pos;			//Condition for Complimenting a bit
			printf("num=%d\n",num);		//to print after Complimenting a bit
		}
		else
			printf("unknown option");

	}
	else
	{
		c++;

		printf("Wrong input\n");
		if(c<3)
			goto L1;        
	}
}

