#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int no;
	char name[20];
	float marks;
	struct st *next;
}st;
void add_begin(void);
void print_nodes(void);
st *hptr;

main()
{
	char ch;
	do
	{
		add_begin();
		printf("Do you need to add node again\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print_nodes();
}
void print_nodes(void)
{
	st *ptr=hptr;
	while(ptr)
	{
		printf("%d %s %f\n",ptr->no,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}
void add_begin(void)
{
	st *new=((st*)malloc(sizeof*st));
	printf("Enter no name marks\n");
	scanf("%d %d %f \n" &new->no, &new->name,&new->marks);
	next->next=hptr;
	hptr=new;
}




