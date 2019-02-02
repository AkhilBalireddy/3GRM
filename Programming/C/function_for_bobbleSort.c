#include<stdio.h>
void bobble_sort(int *,int);
int main()
{
int a[5]={23,1,56,3,55};
int ele,i;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
printf("before sort %d\n",a[i]);
bobble_sort(a,ele);
for(i=0;i<ele;i++)
printf("after sort %d\n",a[i]);
printf("\n");
}
void bobble_sort(int *p,int ele)
{
int i,j,t;
for(i=0;i<ele;i++)
{
for(j=0;j<ele-i;j++)
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
