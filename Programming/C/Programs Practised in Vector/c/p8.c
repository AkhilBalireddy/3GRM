#include<stdio.h>
int main()
{
int x=20,y=35;
x=y++ + x++;
y=++x + ++y;
printf("%d%d",x,y);
}
//increment
