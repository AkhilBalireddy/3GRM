#include<stdio.h>
void print_binary(int);
int main()
{
int num;
printf("enter the number");
scanf("%d",&num);
print_binary(num);
printf("\n");
}
void print_binary(int n)
{
int pos;
for(pos=31;pos>=0;pos--)
printf("%d",n>>pos&1);
}

