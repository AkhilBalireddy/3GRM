#include<stdio.h>
int prime_check(int);
main()
{
int num,c;
printf(" enter the number\n");
scanf("%d",&num);
c=prime_check(num);
if(c==0)
printf("%d is not prime number\n",num);
else
printf("%d is a prime number\n",num);
}
int prime_check(int num)
{
int a,i;
for(a=2;a<num;a++)
if(num%a==0)
break;
if(num==a)
return 1;
else
return 0;
}
