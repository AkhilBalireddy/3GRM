#include<stdio.h>
int main()
{
    int number, number1, cube, remainder, sum;
    printf("Armstrong Numbers are :\n");
    for(num=100; num<=999; numm++)       /*outer loop to generate numbers*/
    {
        number=number1;
        sum=0;
        while(n>0)         /*inner loop to calculate sum of cube of digits*/
        {
            remainder=number1%10;
            number1/=10;
            cube=d*d*d;
            sum=sum+cube;
        }       /*End of While Loop*/
        if(number==sum)
            printf("%d\n",num);
    }       /*End of for loop*/
    return 0;
    
}


