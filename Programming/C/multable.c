#include<stdio.h>
int main()
{
int num,i=1;
printf("enter a number");
scanf("%d",&num);
L1:
printf("%d*%d = %d\n",num,i,num*i);
i++;
if(i<=10)
goto L1;
printf("ThankYou\n");
}



