#include "std_lib_facilities.h"

// simple date
struct Date 
{
	int year;
	int month;
	int day;	
};

void init_date(Date& date, int year, int month, int day)
{
	if (year > 0)
		date.year = year;
	else
		error("Invalid year");
	if (month < 13 && month > 0)
		date.month = month;
	else
		error("Invalid month");
	if (day < 32 && day > 0)
		date.day = day;
	else
		error("Invalid day");
}


void add_day(Date& date, int n)
{
	date.day += 1;
	if (date.day > 31)
	{
		date.month++;
		date.day -= 31;
		if (date.month > 12) {
			date.year++;
			date.month -=12;
		}
	}
}

int main() {

	Date today;
	init_date(today, 1978, 06, 25);
	
	cout << "The current date is: " << today.year << ' ' << today.month << ' ' << today.day << ' ' << '\n';

	
	Date tomorrow;
	init_date(tomorrow, 1978, 06, 25);
	add_day(tomorrow, 1);
	
	cout << "Date tomorrow: " << tomorrow.year << ". " << tomorrow.month << ". " << tomorrow.day << ".\n";

	return 0;
}

