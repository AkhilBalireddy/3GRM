#include<stdio.h>
void Print_Array (const int *,int)
main()
{
int a[5]={10,20,30,40,50};
int ele,i;
ele=sizeof(a)/sizeof(a[0]);
Print_Array (a,ele)
printf("\n");
}
void Print_Array (const int *p,int ele)
{
int i;
for(i=0;i<ele;i++)
printf("%d",p[i]);
}


