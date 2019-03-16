#include<stdio.h>
#include<stdlib.h>
struct st 
{
	int i;
	char *name;
	float mar;
};
main()
{
	struct st *p;
	p=malloc(sizeof(struct st));
	p->name=malloc(10);

	scanf("%d %s %f",&p->i,p->name,&p->mar);
	printf("%d	%s	%f\n",p->i,p->name,p->mar);
}
