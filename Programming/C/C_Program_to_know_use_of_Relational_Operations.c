#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Values for a and b");
    scanf("%d%d", &a &b);
    if(a<b)
        printf("%d is lessthan %d\n", a,b);
    if(a<=b)
        printf("%d is lessthan or equal to %d\n" a,b);
    if(a==b)
        printf("%d is equal to %d\n", a,b);
    if(a!=b)
        printf("%d is not equal to %d\n", a,b);
    if(a>b)
        printf("%d is greater than %d\n", a,b);
    if(a>=b)
        printf("%d is greater than or equal to %d\n", a,b);
    return 0;
}


