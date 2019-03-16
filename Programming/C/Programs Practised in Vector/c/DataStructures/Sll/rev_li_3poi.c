#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int no;
	struct student *next;
}S;
S *hptr;
void print(void);
void rev_link(void);
main()
{

	FILE *fp=fopen("data","r");
	S *new=malloc(sizeof(S)),*last;

	while(fscanf(fp,"%d",&new->no)!=-1)
	{
		new->next=0;
		if(hptr==0)  	last=hptr=new;
		else
		{	
		last->next=new;
		last=new;
		}
		new=malloc(sizeof(S));
	}
	print();
}
void rev_link(void)
{
S *pre,*cu=hptr,*ne=0;
while(next!=0)



void print(void)
{
	S *p=hptr;
	while(p)
	{
		printf("%d\n",p->no);
		p=p->next;
	}
}
