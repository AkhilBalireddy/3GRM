/*E10.27*/
#include<stdio.h>
void func1(char x[]);
void func2(char x[]);
int main(void)
{
	char arr[5];
	puts(arr);	
	func1(arr);
	puts(arr);      
	func2(arr);   
	puts(arr);     
	return 0;
}
void func1(char x[])
{
	//x[0]='j',x[1]='a',x[2]='c',x[3]='k',x[4]='\0';
	x="jack";	
	puts(x);	
}
void func2(char x[])
{
	x[0]='J', x[1]='i', x[2]='l', x[3]='l', x[4]='\0';
	puts(x);  		
}
