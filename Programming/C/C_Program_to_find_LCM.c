#include<stdio.h>
int main()
{
    int a,b,LCM;
    printf("Enter two numbers to find LCM: \n");
    scanf("%d%d",&a, &b);
    LCM = find_LCM(a,b);
    printf("\n\n LCM of %d and %d is: %d\n\n", a, b, LCM);
    return 0; 
}
int find_LCM(int a, int b)
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_LCM(a,b);
        return temp;
    }
}

