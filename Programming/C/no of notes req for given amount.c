#include<stdio.h>
int main()
{
    int amount, choice, notes;
    printf("Enter the total amount in Rs :");
    scanf("%d", &amount);       //to scan the amount
    printf("Enter the value of the notes from which you want to begin:");
    scanf("%d", &choice);       //to scan value of the notes
    switch(choice)
    {                       //start of switch case
        case 100:            //case for rs.100
            notes=amount/100;
            printf("Number of 100Rs notes= %d\n", notes);
            amount=amount%100;
        case 50:            //Case for rs.50
            notes=amount/50;
            printf("Number of 50Rs notes= %d\n", notes);
            amount=amount%50;
        case 20:            //case for rs.20
            notes=amount/20;
            printf("Number of 20Rs notes= %d\n", notes);
            amount=amount%20;
        case 10:        //case for rs. 10
            notes=amount/10;
            printf("Number of 10Rs notes= %d\n", notes);
            notes=amount%10;
        case 5:             //case for 5 rupees
            notes=amount/5;
            printf("Number of 5Rs notes= %d\n", notes);
            notes=amount%5;
        case 2:             //case for 2 rupee coin
            notes=amount/2;
            printf("Number of 2Rs notes= %d\n", notes);
            notes=amount%2;
        case 1:             //case for 1 rupee coin
            notes=amount/1;
            printf("Number of 1Rs notes= %d\n", notes);
            notes=amount%1;
            break;
        default:
            printf("Enter only Valid Values");
            break;
    }                   //end of the switch case
    printf("\n");       //to print line by line
    return 0;
}
