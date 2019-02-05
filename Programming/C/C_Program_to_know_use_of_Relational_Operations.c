#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter Values for a and b");
    scanf("%d%d", &number1 &number2);       //to scan the variables
    if(a<b)             //Condition to check lessthan
        printf("%d is lessthan %d\n", number1,number2);
    if(a<=b)            //condition to check lessthan or equal to
        printf("%d is lessthan or equal to %d\n" number1,number2);
    if(a==b)            //condition to check equal to
        printf("%d is equal to %d\n", number1,number2);
    if(a!=b)            //Condition to check not equal to
        printf("%d is not equal to %d\n", number1,number2);
    if(a>b)             //Condition to check greater then
        printf("%d is greater than %d\n", number1,number2);
    if(a>=b)            //Condition to check greater than or equal to
        printf("%d is greater than or equal to %d\n", number1,number2);
    return 0;
}


