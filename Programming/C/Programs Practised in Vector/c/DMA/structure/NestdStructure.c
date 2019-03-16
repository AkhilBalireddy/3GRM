#include<stdio.h>
#include<stdlib.h>
	struct date
	{
		int date;
		int month;
		int year;
};
struct st
float marks;
};
main()
{
	struct st s1;
	s1.dob.date=1;
	s1.dob.month=1;
	s1.dob.year=2000;

	s1.doj.date=1;
	s1.doj.month=1;
	s1.doj.year=2019;

	printf("%d:%d:%d\n",s1.dob.date,s1.dob.month,s1.dob.year);

	printf("%d:%d:%d\n",s1.doj.date,s1.doj.month,s1.doj.year);
}

