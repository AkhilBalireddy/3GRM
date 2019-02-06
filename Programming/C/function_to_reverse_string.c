#include<stdio.h>
void my_strrev(char *);			//Function Declaration
int main()
{
	char s[20];			//String size
	printf("enter the string");	//To take string from the user
	scanf("%s",s);			//To scan the string
	printf("The Given String s=%s\n",string);
	my_strrev(s);			//function Call
	printf("After Reversing The String =%s\n",string);	//To print String After Reversing
}
void my_strrev(char *p)			//Function Definition
{
	int l,i,j;
	char temaprary;
	l==my_strrev(p);
	while(j==i-1)			//Loop to get reverse string
	{
		temparary=p[i];
		p[i]=p[j];
		p[j]=t;			//Logic to swap the string
		i++;			//increment of i
		j--;			//Decrement of j
	}				//End of the loop
}				//End of the function

