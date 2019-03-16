#include<stdio.h>
int prime_check(int);
main()
{
int num,c;
printf("enter the number\n");
scanf("%d",&num);
c=prime_check(num);
if(c==0)
printf("not prime number\n");
else
printf("prime number\n");
}
int prime_check(int num)
{
int a;

for(a=2;a<=num;a++)
if(num%a==0)
break;
if(num==a)
return 1;
else
return 0;
}



