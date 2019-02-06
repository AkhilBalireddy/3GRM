#include<stdio.h>
void print_string(const char *);	//function Declaration
int main()
{
	char s[]="AkhilReddy";		//Given string
	print_string(s);		//function call
	printf("\n");			//To print in separate line
}
void print_string(const char *p)	//Function Definition
{
	while(*p)			//Loop to get character by character
		printf("%c",*p++);	//To print given string in character by character on screen 
}

