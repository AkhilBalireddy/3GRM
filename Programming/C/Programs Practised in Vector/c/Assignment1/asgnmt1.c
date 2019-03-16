/*#include<stdio.h>
int main()
{
	int *p=10;
	printf("%u\n",(unsigned int)p);	 //10
	printf("%d\n",*p);	//segmentation fault
}
*/


#include<stdio.h>
int main()
{
int *ptr,a=10;
ptr=&a;
*ptr+=1;
printf("%d,%d/n",*ptr,a);
}





