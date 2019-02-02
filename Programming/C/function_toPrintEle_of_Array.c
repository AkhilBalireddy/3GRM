#include<stdio.h>
void print_array(const int *,int);
int main()
{
int a[5]={10,20,30,40,50};
int ele,i;
ele=sizeof(a)/sizeof(a[5]);
print_array(a,ele);
printf("\n");
}
void print_array(const int *p,int ele)
{
int i;
for(i=0;i<ele;i++)
printf(" %d",*p++);
}

