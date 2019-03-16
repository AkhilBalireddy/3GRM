#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int ro;
	char s[30];
	float mar;
	struct student *next;
}SL;

SL *hptr;
void add_end(void);
void print(void);
main()
{

	char ch='y';
	while((ch=='y') || (ch=='Y'))
	{
		add_end();
		printf("Yes / No\n");
		scanf(" %c",&ch);
	}
	print();
}
void add_end(void)
{	
	SL *new =malloc(sizeof(SL));
	printf("enter data\n");
	scanf("%d %s %f",&new->ro,new->s,&new->mar);
	if((hptr==0) || (hptr->ro > new->ro))
	{
		new->next=hptr;
		hptr=new;
	}
	else
	{
		SL *last1=hptr,*last2=hptr;
		while((last1->next!=0) && (last1->ro < new->ro))
		{	
			last2=last1;
			last1=last1->next;
		}
		new->next=last1;
		last2->next=new;
	}
}
void print(void)
{
	SL *ptr=hptr;
	while(ptr)
	{
		printf("%d %s %f\n",ptr->ro,ptr->s,ptr->mar);
		ptr=ptr->next;
	}
}			
