#include<stdio.h>
int main()
{
	char character;
	printf("enter the character\n");	//To take the character from user
	scanf("%ch",&character);		//To scan the Character
	if(character>='a' && character<='z')	//To Check Character is in between a and z
		printf("Given Character is in lower case\n");
	else if(character>='A' && character<='Z')	//To check character is in  between A and Z
		printf("Given Character is in Upper Case\n");
	else if(character>=0 && character<=9) 	//TO check Character is in between 0 to 9
		printf("Given Character is Digit");
	else
		printf("None\n");

}
