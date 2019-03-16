#include<stdio.h>
#include<malloc.h>
typedef struct student
{
	int roll;
	char s[30];
	float mar;
	struct student *next;
}SL;
void print(void);
void add_end(void);
void AOP(void);
int count(void);
void rev_loops(void);
void recursion(SL *);

SL *hptr;
SL *last;

main()
{
	char ch='y';
	int op;
	SL *p;
	while((ch=='y') || (ch=='Y'))
	{
		add_end();
		printf("Yes   /  No\n");
		scanf(" %c",&ch);
	}
	printf("***************Input*************\n");
	print();
	printf("enter option using\n1,AOP\n2,loops\n3,recursion\n");
	scanf("%d",&op);
p=hptr;
	switch(op)
	{

		case 1:	AOP(); break;
		case 2:	rev_loops(); break;
		case 3: recursion(p); break;
		default : printf("\n\nvollu dhagara petukuni ivvu esari\n\n");
	}	
}

void recursion(SL *a)
{
//SL *a=hptr;
	if(a)
	{
		recursion(a->next);
		printf("%d %s %f\n",a->roll,a->s,a->mar);
	}

}
void add_end(void)
{
	SL *new=malloc(sizeof(SL));
	printf("enter data\n");
	scanf("%d %s %f",&new->roll,new->s,&new->mar);
	new->next=0;
	if(hptr==0)  hptr=last=new;
	else
	{
		last->next=new;
		last=new;
	}
}
void rev_loops(void)
{
	SL *ptr=hptr;
	int i,j,c=count();
	printf("**********Loops**********\n");

	for(i=0;i<c;i++)
	{
		ptr=hptr;
		for(j=0;j<c-1-i;j++) ptr=ptr->next;
		printf("%d %s %f\n",ptr->roll,ptr->s,ptr->mar);
	}		
}
void AOP(void)
{
	int c=count(),i=0;
	SL *a=hptr;
	SL *p[c];
	while(a)
	{
		p[i++]=a;
		a=a->next;
	}
	printf("count=%d\n",c);
	printf("***********using AOP*************\n");
	for(i=c-1;i>=0;i--)
		printf("%d %s %f\n",p[i]->roll,p[i]->s,p[i]->mar);

}
int count(void)
{
	SL *abc=hptr;
	int c=0;
	while(abc)
	{
		c++;
		abc=abc->next;
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
