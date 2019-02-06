#include<stdio.h>
void my_strupr(char *);		//Function Declaration
int main()
{
	char string[20];
	printf("enter the string in small letters to convert into uppercase:-\n");	//To take input from the user
	scanf("%s",strint);	//To scan the string
	printf("The given  string is  %s\n",s);	//To print given string on the screen
	my_strupr(s);		//Function Call
	printf("After Convertion of the string to uppercase is %s\n",s);	//To print string after convertion on screen
}
void my_strupr(char *p)		//Function Definition
{
	while(*p)
	{
		if(*p>='a' && *p<='z')
			*p=*p-32;		//logic to convert the string to uppercase
		++p;
	}			//end of while loop
}				//End of the function


