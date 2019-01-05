#include<stdio.h>
int main()
{
char ch;
printf("enter the character\n");
scanf("%ch",&ch);
if(ch>='a' && ch<='z')
	printf("lower case\n");
else if(ch>='A' && ch<='Z')
	printf("Upper Case\n");
	else if(ch>=0 && ch<=9)
		printf("Digit");
else
printf("None\n");

}
