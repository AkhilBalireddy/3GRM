#include<stdio.h>
main()
{
int a[][5]={1,2,3,4,5,6,7,8,9,10};
printf("a=%u\n",a);

printf("a+1=%u\n",a+1);
printf("&a+1=%u\n",&a+1);
printf("a[1]+1=%u\n",a[0]+1);

printf("&a[1]+1=%u\n",&a[0]+1);

printf("&a[0][0]+1=%u\n",&a[0][0]+1);
}
