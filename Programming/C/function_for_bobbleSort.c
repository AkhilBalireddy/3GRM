#include<stdio.h>
void bubble_sort(int *,int);		//function declaration
int main()
{
	int sort[5]={23,1,56,3,55};
	int elements,i;
	ele=sizeof(sort)/sizeof(sort[0]);	 //to get size of the array
	for(i=0;i<elements;i++)
		printf("before the bubble sort, the array is %d\n",a[i]);
	bubble_sort(sort,elements);    		 //function call
	for(i=0; i<elements; i++)
		printf("after sorting the array elements is %d\n",a[i]);
	printf("\n");
}
void bubble_sort(int *p,int elements)		//function declaration 
{
	int loop1,loop2,temparary;

	for(loop1=0;loop1<elements;loop1++)	//outer loop to give numbers
	{


		for(loop2=0; loop2<elements-i; loop2++) 	//inner loop to check the number nubers in sort or not
		{

			if(p[loop2]>p[loop2+1])
			{
				temparary=p[loop2];
				p[loop2]=p[loop2+1];
				p[loop2+1]=temparary;		//swapping of the variable
			}		//end the if

		}		//end of the inner loop

	}		//end of the outer loop
}
