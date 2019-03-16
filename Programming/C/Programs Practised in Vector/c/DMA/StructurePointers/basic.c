#include<stdio.h>
struct st
{
int rollno;
char name[10];
float marks;
};
main()
{
struct st s1={10,'a',95.5},*p;
p=&s1;
printf("%d %s %f\n",s1.rollno,s1.name,s1.marks);
printf("%d %s %f\n",p->rollno,p->name,p->marks);
}

