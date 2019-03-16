#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int ro;
	char s[30];
	float mar;
	struct student *next;
}SL;

void add_end(void);
void print(void);
void add_node(int );

SL *hptr;
SL *last;
int c=0;
main()
{
	char ch='y';
	int n;
	while((ch=='y') || (ch=='Y'))
	{
		add_end();
		printf("Yes / No\n");
		scanf(" %c",&ch);
	}
	print();
	printf("enter node number to add\n");
	scanf(" %d",&n);
	add_node(n);
	print();
}

void add_end(void)
{
	SL *new=malloc(sizeof(SL));
	printf("enter roll.no,name marks\n");
	scanf("%d %s %f",&new->ro,new->s,&new->mar);

	if(hptr==0)
	{
		new->next=hptr;
		last=hptr=new;		
	}
	else
	{
		last->next=new;
		new->next=0;
		last=new;
	}
}
void add_node(int n)
{
	int cou=0;
	SL *ptr=hptr,*new=malloc(sizeof(SL));
	printf("enter rollno,name marks\n");
	scanf("%d %s %f",&new->ro,new->s,&new->mar);
	
	while(ptr)
	{	
		ptr=ptr->next;
		cou++;
	//	printf("%d ",cou);
		if(cou==(n-1)) break;
	}
	
	new->next=ptr->next;
	ptr->next=new;
	
	
}

void print(void)
{
	static i=0;
	SL *ptr=hptr;
	while(ptr)
	{
	printf("%d %s %f\n",ptr->ro,ptr->s,ptr->mar);
		ptr=ptr->next;
	}
}
