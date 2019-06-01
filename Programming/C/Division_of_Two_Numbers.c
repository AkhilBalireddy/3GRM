#include<stdio.h>
int main()
{
    int Dividend, Divisor, Quotient, Remainder;
   
 printf("Enter Dividend:- ");
    scanf("%d", &Dividend);     //to scan the dividend

    printf("Enter Divisor:- ");
    scanf("%d", &Divisor);      //to scan the divisor

    Quotient=Dividend/Divisor;      //condition to get quotient
    Remainder=Dividend% Divisor;        //condition to get Remainder

    printf("Quotient=%d\n",Quotient);       //to print Quotient
    printf("Remainder=%d\n",Remainder);     //to print remainder
    return 0;
}

