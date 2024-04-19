//Lab 09 
//Purpose: This program determines based on the date entered what day of the week it was on that date.
//Sources of logic assistance: None
#include <iostream>
#include <iomanip>
using namespace std;

bool isLeapYear(int year);
int getCenturyValue(int year);
int getYearValue(int year);
int getMonthValue(int month, int year);

int main()
{
	int day, month, year, centuryValue, yearValue, monthValue, dayOfWeekValue;

	cout << "Enter a date in the form month day year, eg 4 24 1939\n";
	cin >> month >> day >> year;
	
	centuryValue = getCenturyValue(year);
	yearValue = getYearValue(year);
	monthValue = getMonthValue(month, year);
	

	dayOfWeekValue = (day + monthValue + centuryValue + yearValue) % 7; //Performs calculation to give a value which will represent each day of the week. 0 - Sunday, 1 - Monday etc..

	cout << month << "/" << day << "/" << year << " is a ";

	switch (dayOfWeekValue)
	{
	case 0: cout << "Sunday\n";
		break;
	case 1: cout << "Monday\n";
		break;
	case 2: cout << "Tuesday\n";
		break;
	case 3: cout << "Wednesday\n";
		break;
	case 4: cout << "Thrusday\n";
		break;
	case 5: cout << "Friday\n";
		break;
	case 6: cout << "Saturday\n";
		break;
	}

	return 0;
}

bool isLeapYear(int year) //Function to return whether a year is a leap year or not, false is set by default.
{
	bool OK = false;
	OK = ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
	return OK;
}

int getCenturyValue(int year) //Function takes first two digits of year, divides by 4 and saves the remainder, subtracts 3 from remainder and multiplies by 2.
{
	int value, remainder;
	remainder = (year / 100) % 4;
	value = (3 - remainder) * 2;
	return value;
}

int getYearValue(int year) //This gets the year value based on the years since the beginning of the century
{
	int value;
	value = ((year % 100) / 4) + (year % 100);
	return value;
}

int getMonthValue(int month, int year)
{
	int value = 0;

	switch (month)  //This switch returns a value based on the month, case 1 and 2 (Jan and Feb) are the only cases where a leap year returns a different value.
		{
		case 1: { 
			if (isLeapYear(year))
		{
			value = 6;
		}
			else
			{
				value = 0;
			}
			break;
		}
		case 2: {
			if (isLeapYear(year))
			{
				value = 2;
			}
			else
			{
				value = 3;
			}
			break;
		}
		case 3: value = 3;
			break;
		case 4: value = 6;
			break;
		case 5: value = 1;
			break;
		case 6: value = 4;
			break;
		case 7: value = 6;
			break;
		case 8: value = 2;
			break;
		case 9: value = 5;
			break;
		case 10: value = 0;
			break;
		case 11: value = 3;
			break;
		case 12: value = 5;
			break;
		}
	return value;
}

/*
Enter a date in the form month day year, eg 4 24 1939
4 24 1939
4/24/1939 is a Monday

Enter a date in the form month day year, eg 4 24 1939
2 11 1995
2/11/1995 is a Saturday
*/
