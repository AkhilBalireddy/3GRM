#include<stdio.h>
struct one
{
int i;
char ch;
float f;
};
void one abc(void);
main()
{
struct one o1;

print("o1.i,=%d,o1.ch=%c,o1.f=%f\n",o1.i,o1.ch,o1.f);
}
struct one abc(void)
{
struct one o2={10,'a',23.5};
return o2;
}

