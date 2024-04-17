//Activity 09 
//Purpose: This program has a user enter a number > 10000 and determines the sum of all even digits.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int originalNumber, workingNumber, digit, sum = 0;

	cout << "Enter an integer greater than 10000: ";
	cin >> workingNumber;
	originalNumber = workingNumber;

	

	while (workingNumber <= 10000)
	{
		cout << workingNumber << " is not greater than 10000\n";
		cout << "Enter an integer greater than 10000: ";
		cin >> workingNumber;
	}
	
	do
	{
		digit = workingNumber % 10;

		if (digit % 2 == 0)
		{
			sum += digit;
		}

		workingNumber /= 10;

	}while (workingNumber != 0);

		cout << "The sum of the even digits of " << originalNumber << " is: " << sum << endl;
	
	return 0;


/*
Enter an integer greater than 10000: 12345678
The sum of the even digits of 12345678 is: 20

C:\Users\John\Desktop\Hayes Documentation\Classes\College\CMPSC 121\cmpsc121\homework\Activity 9\Activity09\Debug\Activity09.exe (process 10224) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .*/


}
