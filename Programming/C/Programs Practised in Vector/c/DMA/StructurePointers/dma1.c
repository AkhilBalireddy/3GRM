#include<stdio.h>
#include<stdlib.h>
struct A
{
int ro;
float mar;
char name[20];
};
void dma_loc(struct A**);
main()
{
struct A *p;
dma_loc(&p);
printf("enter roll.no , marks and name\n");
scanf("%d %f %[^\n]",&p->ro,&p->mar,p->name);

printf("%d %f %s\n",p->ro,p->mar,p->name);

}
void dma_loc(struct A **p)
{
*p=malloc(sizeof(struct A));
}
