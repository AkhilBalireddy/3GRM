#include<stdio.h>
int main()
{
int i=10,j=20,k=30,l=40,m;
printf("i=%d,j=%d,k=%d,l=%d",i,j,k,l);
m=i||(j=200)&&(k=300)&&l;
printf("i=%d,j=%d,k=%d,l=%d,m=%d\n",i,j,k,l,m);
}
