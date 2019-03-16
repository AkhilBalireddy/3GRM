#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct st
{
	char rollno[10];
	char name[10];
	int id;
	float marks;
	struct date
	{
		int day;
		int month;
		int year;
	}dob,doj;
};

void my_sort(struct st*, struct st*, struct st*);
main()
{
	int i,j,n,opt,s=0;
	struct st **p,temp;

	printf("Enter number of students:-\n");
	scanf("%d",&n);
	p=malloc(sizeof(temp)*n);

	for(i=0;i<n;i++)
	{	
		p[i]=malloc(sizeof(struct st));


		printf("\nEnter %d student details\n",i+1);
		printf("Enter the Roll Number of the Student:-\n");
		scanf(" %s",p[i]->rollno);

		printf("Enter the Name of the Student:-\n");
		scanf(" %s",p[i]->name);
L1:
		printf("Enter Aadhar Number of the student:-\n");
		scanf(" %d",&p[i]->id);

		if(p[i]->id<1000000000 || p[i]->id>9999999999)
		{
			printf("wrong...Aadhar number should be 10 letters\n");
			goto L1;
		}

L2:
		printf("Enter DOB:-\n");
		scanf(" %d %d %d",&p[i]->dob.day,&p[i]->dob.month,&p[i]->dob.year);

		if((p[i]->dob.day < 1 || p[i]->dob.day > 31) && (p[i]->dob.month >1 || p[i]->dob.month <12) && (p[i]->dob.year <1990 || p[i]->dob.year>2000))
		{
			printf("Give correct Date of Birth\n");
			goto L2;
		}
		printf("Enter DOJ:-\n");
		scanf(" %d %d %d",&p[i]->doj.day,&p[i]->doj.month,&p[i]->doj.year);

		printf("Enter marks:-\n");
		scanf(" %f",&p[i]->marks);

	}
	printf("\nInformation entered by you is\n");


	for(i=0;i<n;i++)
	{
		printf("%d) %s\t %s\t %d\t %d/%d/%d\t  %d/%d/%d\t\n",i+1, p[i]->rollno, p[i]->name, p[i]->id, p[i]->dob.day, p[i]->dob.month, p[i]->dob.year, p[i]->doj.day, p[i]->doj.month, p[i]->doj.year);

	}

	printf("\nSelect one Option to sort your information\n");
	printf("\n1)Roll Number \n2)Name \n3)Aadhar Number \n4)Date of Birth \n5)Date of Join \n6)Marks \n");
	scanf(" %d", &opt);

	for(i=0; i<n; i++)
	{
		for(j=0; j<n-1-i; j++,s=0)
		{
			switch(opt)
			{
				case 1:
					{
						if (s= (strcmp (p[j]->rollno, p[j+1]->rollno)==1) );

					}
					break;

				case 2:
					{
						if (s= (strcmp (p[j]->name, p[j+1]->name)==1) );
					}
					break;
				case 3:
					{
						if (s= (p[j]->id > p[j+1]->id)==1);
					}
					break;
				case 4:
					{
						if (s=(p[j]->dob.year > p[j+1]->dob.year)==1);
						else if (s=(p[j]->dob.month > p[j+1]->dob.month)==1);
						else if (s=(p[j]->dob.day > p[j+1]->dob.day)==1);

					}
				case 5:
					{
						if (s= (p[j]->doj.year > p[j+1]->doj.year)==1);
						else if (s= (p[j]->doj.month > p[j+1]->doj.month)==1);
						else if (s= (p[j]->doj.day > p[j+1]->doj.day)==1);
					}
					break;
				case 6:
					{
						if (s= (p[j]->rollno > p[j+1]->rollno)==1);
					}
					break;
				default:
					printf("Unknown Option\n");
			}

			if(s==1)
				my_sort(p[j],p[j+1],&temp);
		}
	}

	for(i=0;i<n;i++)
	{


		printf("%d) %s\t %s\t %d\t %d/%d/%d\t  %d/%d/%d\t\n",i+1, p[i]->rollno, p[i]->name, p[i]->id, p[i]->dob.day, p[i]->dob.month, p[i]->dob.year, p[i]->doj.day, p[i]->doj.month, p[i]->doj.year);

	}


}
void my_sort(struct st *r, struct st *q, struct st *temp)

{
	*temp=*r;
	*r=*q;
	*q=*temp;
}




