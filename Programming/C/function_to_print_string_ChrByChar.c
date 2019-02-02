#include<stdio.h>
void print_string(const char *);
int main()
{
char s[]="AkhilReddy";
print_string(s);
printf("\n");
}
void print_string(const char *p)
{
while(*p)
printf("%c",*p++);
}

