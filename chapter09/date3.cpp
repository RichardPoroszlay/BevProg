// I've used class keyword instead of struct.

#include "std_lib_facilities.h"

class Date
{
	int year, month, day;

public:
	Date(int y, int m, int d);
	void add_day(int n);
	
	int get_year()
	{
		return year;
	}
	
	int get_month()
	{
		return month;
	}
	int get_day()
	{
		return day;
	}

};


Date::Date(int y, int m, int d)
{
	if (y > 0)
		year = y;
	else
		error("Invalid year");
	if (m > 0 && m < 13)
		month = m;
	else
		error("Invalid month");
	if (d > 0 && d < 32)
		day = d;
	else
		error("Invalid day");
}


void Date::add_day(int n)
{
	day += n;
	if (day > 31)
	{
		month++;
		day -= 31;
		if(month > 12)
		{
			year++;
			month -= 12;
		}
	}
}


int main()
try 
{
	Date today {1978, 6, 25};
	Date tomorrow {1978, 6, 25};
	
	tomorrow.add_day(1);
	
	cout << "Date today: " << today.get_year() << ". " << today.get_month() << ". " << today.get_day() << ". " << '\n';
	cout << "Date tomorrow: " << tomorrow.get_year() << ". " << tomorrow.get_month() << ". " << tomorrow.get_day() << ". " << '\n';
	
	return 0;
}

catch (exception& e) 
{
	cout << "Error: " << e.what() << endl;
	return 1;
}
