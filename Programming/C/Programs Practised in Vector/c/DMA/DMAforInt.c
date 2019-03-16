#include<stdio.h>
#include<stdlib.h>
main()
{
int *p;
p=malloc(sizeof(int));
if(p==0)
{
printf("Unable to allocate memory\n");
return;
}
printf("enter the number:-\n");
scanf("%d",p);
printf("%d\n",*p);
}

