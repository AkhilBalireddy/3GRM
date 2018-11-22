#include<stdio.h>
int roman(int, char);
int main()
{
    int num;
    printf("Eter a number : ");
    scanf("%d", &num);
    if(num>=1000)
        num=roman(num,1000, 'm');
    if(num>=500)
        num=roman(num,500, 'd');
    if(num>=100)
        num=roman(num,100, 'd');
    if(num>=50)
        num=roman(num, 50, 'd');
    if(num>=10)
        num=roman(num, 10, 'd');
    if(num>=5)
        num=roman(num, 5, 'd');
    if(num>=1)
        num=roman(num, 1, 'd');
    printf("\n");
    return 0;
}
int roman(int n, int k, char c)
{
    if(n==9)
    {
        printf("ix");
        return 0;
    }
    if(n==4)
        printf("iv");
        return 0;
    }
while(n>=k)
    printf("%c",c);
    n=n-k;  
    }
    return n;
}

