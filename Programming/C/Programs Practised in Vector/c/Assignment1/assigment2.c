#include<stdio.h>
int main()
{
int num,i;
printf("enter a number to check even or odd");
scanf("%d",&num);
/*if(num%2)
{
printf("given number is even");
}
else
printf("given number is odd");
*/
i=num%2;
i==1?printf("odd\n"):printf("even\n");
//i==0?printf("even\n"):printf("odd\n");

}

