#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int roll;
	char s[20];
	float mar;
	struct student *next;
}SL;
SL *hptr;
SL *last;
void print(void);
void add_end(void);
int  count(void);
void rev_data(void);
void print(void);
main()
{
	char ch='y';
	while(ch=='y')
	{
		add_end();
		printf("Yes  /   No\n");
		scanf(" %c",&ch);
	}
printf("before ...........................\n");
print();
	rev_data();
}
void add_end(void)
{
        SL *new=malloc(sizeof(SL));
        printf("enter data\n");
        scanf("%d %s %f",&new->roll,new->s,&new->mar);
        new->next=0;
        if(hptr==0) 
		 hptr=last=new;
        else
        {
                last->next=new;
                last=new;
        }
}

void rev_data(void)
{
	SL *new=malloc(sizeof(SL)),a,b,*temp;
	SL *p1=hptr,*p2;
	int i,c=count(),j;
	a=b=hptr;
	for(i=0;i<c/2;i++)
	{
		p2=hptr;
		for(j=0;j<c-1-i;j++) 
			p2=p2->next;
		a.roll=p1->roll; a.s=p1->s; a.mar=p1->mar; a.next=p1->next;
		
		b.roll=p2->roll; b.s=p2->s; b.mar=p2->mar; b.next=p2->next;

		temp=p1;
		p1=p2;
		p2=temp;

		p1->next=a->next;
		p2->next=b->next;

		p1=p1->next;
	}
	printf("**********after data***********\n");
	print();
}
int  count(void)
{
	SL *p=hptr;
	int c=0;
	while(p)
	{
		c++;
		p=p->next;
	}
	return c;
}
void print(void)
{

	SL *ptr=hptr;
	while(ptr)
	{
		printf("%d %s %f\n",ptr->roll,ptr->s,ptr->mar);
		ptr=ptr->next;
	}
}
