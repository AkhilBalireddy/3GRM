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
            num=num^1<<pos;
        printf("num=%d\n",num);
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

