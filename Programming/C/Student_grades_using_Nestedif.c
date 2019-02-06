#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Student Marks to get Grades:-\n");	To take marks from the user
    scanf("%d",&marks);		//To scan Marks
    if(marks>=40)		//Condition for Marks more than 40
    {
        if(marks>=60)		//Condition for Marks more than 60
        {
            if(marks>=75)	//Condition for marks morethan 75
            {
                printf("A");	//To print A grade
            }
            else
            {
                printf("B");	//To print B grade
          
            }
            else
            {
                printf("C");	//To print C grade
                
            }
            else
            {
                printf("Fail");	To print as Fail
            }
        }
       
    }
}
