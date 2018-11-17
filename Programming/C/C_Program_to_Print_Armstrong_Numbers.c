#include<stdio.h>
int main()
{
    int num, n, cube, d, sum;
    printf("Armstrong Numbers are :\n");
    for(num=100; num<=999; numm++)       /*outer loop to generate numbers*/
    {
        num=n;
        sum=0;
        while(n>0)         /*inner loop to calcilate sum of cube of digits*/
        {
            d=n%10;
            n/=10;
            cube=d*d*d;
            sum=sum+cube;
        }       /*End of While Loop*/
        if(num==sum)
            printf("%d\n",num);
    }       /*End of for loop*/
    return 0;
    
}


