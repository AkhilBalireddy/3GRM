#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int ro;
	char s[30];
	float mar;
	struct student *next;
}SL;

SL *last;
SL*  add_end(SL *);
void print(SL *);
main()
{
	SL *hptr=0;
	char ch='y';
	while((ch=='y') || (ch=='Y'))
	{
		hptr=add_end(hptr);
		printf("Yes / No\n");
		scanf(" %c",&ch);
	}
	print(hptr);
}
SL* add_end(SL *hp)
{
	SL *new=malloc(sizeof(SL));

	printf("enter roll.no name marks\n");
	scanf("%d %s %f",&new->ro,new->s,&new->mar);

	if(hp==0)
	{
		hp=new;
		new->next=0;
		last=new;
	}
	else 
	{
		last->next=new;
		new->next=0;
		last=new;
	}
	return hp;
}
void print(SL *hp)
{
	while(hp)
	{
		printf("%d %s %f\n",hp->ro,hp->s,hp->mar);
		hp=hp->next;
	}
}
