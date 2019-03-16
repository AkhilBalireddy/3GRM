#include<stdio.h>
int main()
{
int a[5],ele,i,j,temp;
ele=sizeof(a)/sizeof(a[0]);
printf("enter the elements\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
printf("\n");

/*for(i=ele-i;i>0;i--)
printf("%d ",a[i]);
printf("\n");

}*/


for(i=0,j=ele-1;i<j;i++,j--)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
for(i=0;i<ele;i++)printf("%d",a[i]);
printf("%d",a[i]);
}
