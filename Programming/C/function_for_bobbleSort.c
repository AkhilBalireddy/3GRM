#include<stdio.h>
void bobble_sort(int *,int);
int main()
{
int sort[5]={23,1,56,3,55};
int ele,i;
ele=sizeof(sort)/sizeof(sort[0]); //to get size of the array
for(i=0;i<ele;i++)
printf("before sort %d\n",a[i]);
bubble_sort(a,ele);
for(i=0;i<ele;i++)
printf("after sort %d\n",a[i]);
printf("\n");
}
void bubble_sort(int *p,int elements)
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
