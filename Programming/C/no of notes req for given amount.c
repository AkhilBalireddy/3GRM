#include<stdio.h>
int main()
{
    int n, choice, notes;
    printf("Enter the total amount in Rs :");
    scanf("%d", &n);
    printf("Enter the value of the notes from which you want to begin:");
    scanf("%d", &choice);
    switch(choice)
    {
        case 100:
            notes=n/100;
            printf("Number of 100Rs notes= %d\n", notes);
            n=n%100;
        case 50:
            notes=n/50;
            printf("Number of 50Rs notes= %d\n", notes);
            n=n%50;
        case 20:
            notes=n/20;
            printf("Number of 20Rs notes= %d\n", notes);
            n=n%20;
        case 10:
            notes=n/10;
            printf("Number of 10Rs notes= %d\n", notes);
            notes=n%10;
        case 5:
            notes=n/5;
            printf("Number of 5Rs notes= %d\n", notes);
            notes=n%5;
        case 2:
            notes=n/2;
            printf("Number of 2Rs notes= %d\n", notes);
            notes=n%2;
        case 1:
            notes=n/1;
            printf("Number of 1Rs notes= %d\n", notes);
            notes=n%1;
            break;
        default:
            printf("Enter only Valid Values");
            break;
    }
    printf("\n");
    return 0;
}
