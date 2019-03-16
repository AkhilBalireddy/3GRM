#include<stdio.h>
#include<stdlib.h>
struct stu
{
	int ro;
	float mar;
	char *name;
};
struct stu* student(void);
main()
{
	struct stu *p;
	p=student();
	printf("enter roll.no , marks and name");
	scanf("%d %f %[^\n]",&p->ro,&p->mar,p->name);
	printf("%d\t%f\t%s\n",p->ro,p->mar,p->name);
}
struct stu* student(void)
{
	struct stu *p;
	p=malloc(sizeof(struct stu));
	p->name=malloc(15);
	return p;
}
