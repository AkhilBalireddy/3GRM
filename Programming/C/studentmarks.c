#include<stdio.h>
int main()
{
    int m;
    printf("Enter Student Marks");
    scanf("%d",&m);
    if(m>=40)
    {
        if(m>=60)
        {
            if(m>=75)
            {
                printf("A");
            }
            else
            {
                printf("B");
          
            }
            else
            {
                printf("C");
                
            }
}
            else
            {
                printf("Fail");
            }
       
    }
}
