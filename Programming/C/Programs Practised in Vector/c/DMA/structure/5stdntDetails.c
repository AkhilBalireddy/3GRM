#include<stdio.h>
struct st
{
	int rollno;
	char name[10];
	float marks;
};
main()
{
	int i;
	struct st s[5];
	for(i=0;i<5;i++)
	{
		if(i<5)
			printf("\n\nEnter %d Student Details\n",i+1);

		printf("Enter roll number:-\n");
		scanf("%d",&s[i].rollno);

		printf("Enter name:-\n");
		scanf(" %s",s[i].name);

		printf("Enter the marks:-\n");
		scanf(" %f",&s[i].marks);
	}
	printf("------------------------------\n");
	for(i=0;i<5;i++)
		printf("%d %s %f\n",s[i].rollno,s[i].name,s[i].marks);
}

