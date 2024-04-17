//Activity 06 
//Purpose: This program determines whether the product of the day and month matches the last 2 digits of the year inputted and outputs if it is a magic date or not.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int month, day, year, product;

	cout << "Please enter a numeric month, day and two digit year, seperated by spaces. \n";
	cin >> month >> day >> year;
	product = month * day;

	if (product == year)
	{
		cout << "It's a MAGIC date! \n";
	}
	else
	{ 
		cout << "No magic date. \n";
	}

	return(0);

/*Please enter a numeric month, day and two digit year, seperated by spaces.
1 12 12
It's a MAGIC date!

C:\Users\John\Desktop\Hayes Documentation\Classes\College\CMPSC 121\cmpsc121\homework\Activity 6\Activity06\Debug\Activity06.exe (process 6152) exited with code 0.
Press any key to close this window . . .*/
}
