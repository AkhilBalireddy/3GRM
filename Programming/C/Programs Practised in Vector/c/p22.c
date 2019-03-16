#include<stdio.h>
int main()
{
int num,i=1;
printf("enter number\n");
scanf("%d",&num);
L1:
printf("%d*%d=%d\n",num,i,num*i);
i++;
if(i<=10)
goto L1;
printf("thanks");
}

//for(i=1;i<11;i++)
//printf("%d*%d=%d\n",num,i,num*i);
//printf("thanks");
//}
