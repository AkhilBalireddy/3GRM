

#include<stdio.h>
int main()
{
	int num,pos,opt,c=0;
	printf("enter the number\n");
	scanf("%d",&num);
L1:
	printf("enter the bit position\n");
	scanf("%d",&pos);
	if(pos>=0 && pos<=31)
	{
L2:
		printf("Select the option\n1)set a bit\n2)Clear a bit\n3)Compliment a bit\n");
		scanf("%d",&opt);

		if(opt==1)
		{
			num=num|1<<pos;
			printf("num=%d\n",num);
		}
		else if(opt==2)
		{
			num=num&~(1<<pos);
			printf("num=%d\n",num);
		}
		else if(opt==3)
		{
			num=num^(1<<pos);
			printf("num=%d\n",num);
		}
		else 
c++;
printf("Unknown option\n\n");

goto L2;
	}
	else
{
c++;
		printf("wrong input\n");
if(c<3)
goto L1;
}
}

