#include<stdio.h>
int main()
{
	char character;
	printf("enter a Character:- \n");	//To take a character from the user
	scanf("%c",&character);		//To scan the character
	if(ch>='a' && ch<='z') 		//Condition to check charcter between a and z
		ch=ch-32;		//Condition to change given character from lower case to uppercase
	printf("character=%c and its ASCII=%d\n",character,character);	//to print Character and its ASCII value
}
