#include<stdio.h>
struct st
{
int rollno;
char name[10];
float marks;
};
main()
{
struct st *p;
p=malloc(sizeof(struct st));
printf("enter roll number:-\n");
scanf("%d",&p->rollno);
printf("Enter name:-\n");
scanf("%s",p->name);
printf("entr the marks:-\n");
scanf("%f",&p->marks);
printf("%d %s %f\n",p->rollno,p->name,p->marks);
}

