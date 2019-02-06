#include<stdio.h>
void my_strcpy(const char *, char *);		//Function Declaration
int main()
{
	char source[]="AkhilReddy";		//Given String
	char destination[10];			//initialising Size of the another string
	my_strcpy(source,destination);
	printf("source=%s destination=%s\n",source,destination);
}
void my_strcpy(const char *p,char *q)		//Function Definition
{
	while(*p)				//start of while loop
	{
		*q=*p;				//Condition to copy string
		p++;				//post increment of p
		q++;				//post increment of q
	}					//End of the loop
	*q='\0';
}

