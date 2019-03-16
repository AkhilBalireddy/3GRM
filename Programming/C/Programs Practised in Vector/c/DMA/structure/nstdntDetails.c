#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	char name[10];
	float marks;
};
main()
{
	int i,n;
	struct st **p;
	printf("enter n value:-\n");

	scanf("%d",&n);
	for(i=0;i<n;i++)
		p=malloc(sizeof(struct st));
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d student details:-\n",i+1);

		printf("enter the roll number:-\n");
		scanf(" %d",&p[i]->rollno);

		printf("enter name:-\n");
		scanf(" %s",p[i]->name);

		printf("enter marks:-\n");
		scanf(" %f",&p[i]->marks);
	}
	printf("-------------------------------\n");

	for(i=0;i<n;i++)
		printf("%d %s %f\n",&p[i]->rollno,p[i]->name,&p[i]->marks);
}
