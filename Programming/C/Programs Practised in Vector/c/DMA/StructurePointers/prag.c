#include<stdio.h>
#pragma pack(1)
struct A
{
int i;
char ch;
float f;
};
main()
{
struct A a1;
printf("%d\n",sizeof(a1));
}
