#include<stdio.h>
void main()
{
int a[3]={2,3,4};
char *p;
p=a;
p=(char*)((int)*(p));
printf("%d",*p);
p=(int *)(p+1);
printf("%d",*p);
return 0;


}
