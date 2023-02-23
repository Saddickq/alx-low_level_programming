#include <stdio.h>

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}
		printf("Days gone in the year %d\n", day);
		printf("Days remaining in the year is %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day -31, year);
		}
		else
		{
			printf("Days gone in the year %d\n", day);
			printf("Days remaining in the year is %d\n", 365 - day);
		}
	}
}

