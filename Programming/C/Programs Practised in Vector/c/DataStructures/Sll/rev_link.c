#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int no;
	char name[20];
	float marks;
	struct student *next; 
}SL;

void rev_link(void);
void print_nodes(void);
SL *hptr;
main()
{
	char ch;
	do
	{
		rev_link();
		printf("Do you need to add node again:Y/N\n");
		scanf("%c",&ch);
	}while((ch=='y')||(ch=='Y'));
print_nodes();
}

void print_nodes(void)
{
	SL *ptr=hptr;
	while(ptr)
	{
		printf("%d %s %f\n",ptr->no, ptr->name, ptr->marks);
		ptr=ptr->next;
	}
}

	 void rev_link(void)
  {
          SL *cur,*link,*temp=0;
          cur=hptr;
         while(cur!=0)
          {
                  link=cur->next;
                  cur->next=temp;
                  temp=cur;
                  cur=link;
          }
          hptr=temp;
  }




