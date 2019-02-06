#include<stdio.h>
void print_array(const int *,int);
int main()
{
	int array[5]={10,20,30,40,50};
	int elements,i;
	elements=sizeof(array)/sizeof(array[5]);
	print_array(array,elements);
	printf("\n");
}
void print_array(const int *p,int elements)
{
	int loop;
	for(loop=0;loop<ele;loop++)
		printf(" %d",*p++);
}

