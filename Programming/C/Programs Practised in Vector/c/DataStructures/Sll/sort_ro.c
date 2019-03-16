#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int no;
	char s[30];
	float mar;
	struct student *next;
}SL;

void add_end(void);
void print(void);
void sort(void);
SL *hptr;
SL *last;
main()
{
	char ch;
	do
	{
		add_end();
		printf("do you want to add another Y-yes or N-no\n");
		scanf(" %c",&ch);
	}while((ch=='Y') ||(ch=='y'));
	print();
	printf("----------------After Sorting----------------------\n");
	sort();
	print();
}

void add_end(void)
{
	SL *new=malloc(sizeof(SL));
	printf("enter roll.no, name ,marks\n");
	scanf("%d %s %f",&new->no,new->s,&new->mar);
	if(hptr==0)
	{
		new->next =0;
		hptr=new;
		last=new;
	}
	else 
	{
		last->next=new;
		new->next=0;
		last=new;
	}
}

void print(void)
{
	SL *ptr=hptr;
	while(ptr)
	{
		printf("%d %s %f\n",ptr->no,ptr->s,ptr->mar);
		ptr=ptr->next;
	}
}

void sort(void)
{
	SL *ptr=hptr,*lst=hptr->next,*pre=hptr;
	int c=0,i,j;
	while(ptr!=0)
	{
		ptr=ptr->next;
		c++;
	}
	printf("%d\n",c);
	ptr=hptr;
	for(i=0;i<c-1;i++)
	{
		for(j=0;j<c-i-1;j++)
		{
			if(ptr->no>lst->no)
			{
				if(hptr==ptr)
				{
					hptr=lst;
					pre=hptr;
				}
				else
					pre->next=lst;
				ptr->next=lst->next;
				lst->next=ptr;
				lst=ptr->next;
			}
			else
			{
				ptr=ptr->next;
				pre=pre->next;
				lst=lst->next;
			}

		}
		lst=hptr->next;
		ptr=pre=hptr;
	}	
}
/*void sort(void)
{
	SL *abc=hptr,*te=hptr;
	SL *hp=hptr;
	for(i=0;i<4;i++)
		for(j=0;j<4-i;j++)
		{
			if(abc-no > abc->next->no)
			{
				if(i==0) hptr=abc->next;
				te=abc->next;
				abc->next=abc->next->next;
				abc->next->next=abc;
			}
			abc=te->next;	
		}*/
