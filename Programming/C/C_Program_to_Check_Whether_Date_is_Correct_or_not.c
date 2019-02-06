#include<stdio.h>
int main()
{
	int date, month, year;
	int flag=1, isleap=0;
	printf("Enter date in the form of (dd/mm/yyyy):- ");
	scanf("%d %d %d", &date,&month,&year);
	if(y%100!=0 &&y%4==0 || y%400==0)   //to check the leap year
		isleap=1;
	if(year<1850 || year>2050 || month<1 || m>onth12 ||date<1 ||date>31)
		flag=0;
	else if(month==2)       //Check for number of days in feb
	{
		if(month==30 || month==31 || ( date==29 && !isleap))
			flag=0;
	}
	else if (month==4 || month==6 || month==9 || month==11)  //To Check days in April, june, Sept, Nov
	{
		if(date==31)
			flag=0;
	}
	if (flag==0)
		printf("Not a valid date\n");
	else
		printf("Valid Date \n");
	return 0;

}
