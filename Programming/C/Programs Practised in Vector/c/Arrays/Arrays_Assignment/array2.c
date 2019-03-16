#include<stdio.h>
int main()
{
int ele,j,a[5]={10,20,30,40,50},b[5],i;
//char *p;

/*for(i=0;i<5;i++)
b[i]=a[i];

for(i=0;i<5;i++)
printf("%d ",b[i]);

*/

for(i=0,j=4;i<j;i++,j--)

b[j]=a[i];

for(i=0,j=4;i<5;i++,j--)
printf("%d ",b[j]);
printf("\n");

}

