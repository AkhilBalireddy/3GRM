#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Student marks to get grades\n");	//to take marks from the user
    scanf)("%d",&marks);		//to scan the given marks
    if(marks>=0 && marks<=34)		//Condition for marks between o and 34
        printf("Fail\n");		//To print as Fail
    else if(marks>=35 && marks<=59)	//Condition for marks between 35 to 59
        printf("C");			//To print as C grade
    else if(marks>=60 && marks<=79)	//Condition for Marks between 60 to 79
        printf("B");			//To print as B grade
    else
        printf("A");			//To print as A grade
    
}		//End of the main

