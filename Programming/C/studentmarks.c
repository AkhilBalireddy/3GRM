#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Student Marks to get grade:-\n");	//To enter the marks from the user
    scanf("%d",&marks);		//to Scan marks
    if(m>=40)	//Condition for more than 4o marks
    {
        if(m>=60)		//Condition for more than 60 marks
        {
            if(m>=75)		//Condition for more then 75 marks
            {
                printf("A");	//To print as A grade
            }	//End of the If loop
            else
            {
                printf("B");	//To print as B grade
          
            }
            else
            {
                printf("C");	//To print as C grade
                
            }	//End of the else loop
}
            else
            {
                printf("Fail");		//To print as Fail
            }		//End of the loop
       
    }		//End of the If loop
}		//End of the main
