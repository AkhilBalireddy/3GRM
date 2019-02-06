int main()
{
	int day1, day2, day, month1, month2, month, year1, year2, year;

	printf("enter two dates to check the differance betwen them\n");
	printf("Enter first date in the form of (dd/mm/yyyy):- ");
	scanf("%d %d %d", &day1, &month1, &year1);      //To scan day1,month1 and year1

	printf("Enter Second Date in the form of (dd/mm/yyyy):- ");
	scanf("%d %d %d", &day2, &month2, &year2);      //To scan dy2, month2 and year2

	if(day2<day1)
	{
		if(month2==month3)
		{
			if(year2%100!==0 && year2%4==0 || year2%4==0) /*Check for Leap year*/
				day2=day2+29;
			else
				day2=day2+28;
		}
	
	else if(month2==5 || month2==7 || month2==10 || month2==12)
			day2=day2+30;
		month2=month2-1;
	}

	if(month2<month1)
	{
		year2=year2-1;
		month2=month2+12;
	}

	year=year2-year1;
	month=month2-month1;
	day=day2-day1;

	printf("Differance of the two Dates are: ");
	printf("%d years %d months %d days\n", year, month, day);   //To print Differance
	return 0;
}


