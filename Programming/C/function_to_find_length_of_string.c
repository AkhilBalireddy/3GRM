#include<stdio.h>
int my_strlen(const char *);		//Function Decl
int main()
{
	char string[]="AkhilReddy";
	int length;
	length=my_strlen(string);			//Function call
	printf("The given string length is %d\n",length);	//To print string length on screen 
}
int my_strlen(const char *p)		//Function Definition
{
	int i,length;
	for(i=0;p[i];i++)		//Loop to get length
		return length;		//To return to Length
}
