#include<stdio.h>
void bobble_sort(int *,int);
main()
{
int a[5];
int ele,i;
ele = sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
printf("before array=%d\n",a[i]);
printf("\n");
bobble_sort(a, ele);
for(i=0;i<ele;i++)
printf("after array=%d\n",a[i]);
}
void bobble_sort(int *p,int ele)
{
int i,j,t;
for(i=0;i<ele;i++)
{
for(j=0;j<ele-1-i;j++)
{
if(p[j]>p[j+1])
{

t=p[j];
p[j]=p[j+1];
p[j+1]=t;
}
}
}
}

