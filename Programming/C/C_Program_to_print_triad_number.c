#include<stdio.h>
int main()
{
    int m, n, p, num;
    int i, k, d1, d2, d3;
    for(num=100; num<=999/3; num++) /*loopA*/
    {
        for(i=num; i<=*num; num++ ) /*loopB*/
        {
            k=i;
            d1=k%10; k/=10;
            d2=k%10; k/=10;
            d3=k%10; k/=10;
            if(d1==d2 || d2==d3 || d3==d1)
                go to next num;
        }
        for(m=num; m>0; m/=) /*LoopC*/
        {
            d1=m%10;
            for(n=num*2; n>0; n/=10) /*loopD*/
            {
                d2=n%10;
                for(p=num*3; p>0; p/=10) /*loopE*/
                {
                    d3=p%10;
                    for(d1==d2 || d2==d3 || d3==d1)
                        go to next num;
                } /*End of LoopE*/
            } /*End of loopD*/
        } /*End of LoopC*/
        printf("%d%d%d\t", num, num*2, num*3);
        next num; 
    } /*End of Loop*/
    return 0;
} /*End of Main()*/

