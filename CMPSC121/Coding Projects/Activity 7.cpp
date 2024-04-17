//Author:   John Hayes
//Class:    CMPSC 121
//Activity 07 
//Purpose: This program calculate what a users phone bill will cost each month based on which subscription plan they have and the number of minutes they have used each month.
//Sources of logic assistance: None
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	const double PACKAGE_A = 39.99, PACKAGE_B = 59.99, PACKAGE_C = 69.99, PACKAGE_A_MIN_RATE = 0.45, PACKAGE_B_MIN_RATE = 0.40, PACKAGE_C_MIN_RATE = 0;
	const int PACKAGE_A_MIN = 450, PACKAGE_B_MIN = 900, PACKAGE_C_MIN = 0;
	double amountTotal, minutesUsed;
	char packageType;

	
	cout << "Enter Plan <A, B or C> and number of minutes used this month. \n";
	cin >> setprecision(2) >> fixed >> packageType >> minutesUsed;
	cout << setprecision(2) << fixed;

	if (packageType == 'A' && minutesUsed > PACKAGE_A_MIN)
		{
		amountTotal = PACKAGE_A + ((minutesUsed - PACKAGE_A_MIN) * PACKAGE_A_MIN_RATE);
		cout << "For package " << packageType << " with " << minutesUsed << " minutes of usage, your bill is:\n";
		cout << "$" << amountTotal;
		}
	else if (packageType == 'A' && minutesUsed <= PACKAGE_A_MIN)
		{
		amountTotal = PACKAGE_A;
		cout << "For package " << packageType << " with " << minutesUsed << " minutes of usage, your bill is:\n";
		cout << "$" << amountTotal;
		}
	else if (packageType == 'B' && minutesUsed > PACKAGE_B_MIN)
		{
		amountTotal = PACKAGE_B + ((minutesUsed - PACKAGE_B_MIN) * PACKAGE_B_MIN_RATE);
		cout << "For package " << packageType << " with " << minutesUsed << " minutes of usage, your bill is:\n";
		cout << "$" << amountTotal;
		}
	else if (packageType == 'B' && minutesUsed <= PACKAGE_B_MIN)
		{
		amountTotal = PACKAGE_B;
		cout << "For package " << packageType << " with " << minutesUsed << " minutes of usage, your bill is:\n";
		cout << "$" << amountTotal;
		}
	else if (packageType == 'C')
		{
		amountTotal = PACKAGE_C + ((minutesUsed - PACKAGE_C_MIN) * PACKAGE_C_MIN_RATE);
		cout << "For package " << packageType << " with " << minutesUsed << " minutes of usage, your bill is:\n";
		cout << "$" << amountTotal;
		}
	else
		cout << "Please enter a valid package plan <A, B or C> \n";
		
	

	return(0);

	/*Enter Plan <A, B or C> and number of minutes used this month.
B 902
For package B with 902.00 minutes of usage, your bill is:
$60.79
C:\Users\John\Desktop\Hayes Documentation\Classes\College\CMPSC 121\cmpsc121\homework\Activity 7\Activity07\Debug\Activity07.exe (process 11648) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .*/
}
