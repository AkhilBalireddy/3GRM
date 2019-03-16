#include<stdio.h>
#include<stdlib.h>
struct st
{
	int i;
	char c[20];
	float f;
};
main()
{
	struct st *p;
	p=malloc(sizeof(struct st));

	scanf("%d %s %f",&p->i,p->c,&p->f);

	printf("%d %s %f\n",p->i,p->c,p->f);
}
