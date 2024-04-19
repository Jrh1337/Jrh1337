//LAB 05 
//Purpose: This program calculates a customers monthly bill to a cellular service provider based on service package and talk time
//Sources of logic assistance: None
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

//Constants setting a flat monthly rate based on service type and overage rate charges
const double STANDARD_RATE = 12.00;
const int MIN60 = 60, MIN75 = 75, MIN100 = 100;
const double PREMIER_RATE = 25.00;
const double STANDARD_CHARGE = 0.20, DAY_CHARGE = 0.10, NIGHT_CHARGE = 0.05;

int main()
{
	string accountNumber, serviceType;
	char serviceCode;
	double standardMinutes, dayMinutes, nightMinutes;
	double amountOwed;

	cout << "Enter an account number and service code <s or p>\n";
	cout << setprecision(2) << fixed;
	cin >> accountNumber >> serviceCode;

	if (serviceCode == 's' || serviceCode == 'S')
	{
		amountOwed = 0;
		serviceType = "STANDARD";
		cout << "Enter number of minutes:\n";
		cin >> standardMinutes;
		if (standardMinutes < MIN60) //amount owed if standard user is under talk time limit
		{
			amountOwed = STANDARD_RATE;
		}
		else
		{
			amountOwed = STANDARD_RATE + ((standardMinutes - MIN60) * STANDARD_CHARGE); //amount owed if standard user is over talk time limit
		}
		cout << "----------Zippy Cell Phone Company----------\n";
		cout << setw(20) << left << "Account Number" << accountNumber << endl;
		cout << setw(20) << left << "Service Type:" << serviceType << endl;
		cout << setw(20) << left << "Total Minutes:" << standardMinutes << endl;
		cout << setw(20) << left << "Amount Due:" << "$" << amountOwed << endl;
	}
	else if (serviceCode == 'p' || serviceCode == 'P')
	{
		amountOwed = 0;
		serviceType = "PREMIER";
		cout << "Enter daytime minutes and nighttime minutes\n";
		cin >> dayMinutes >> nightMinutes;
		if (dayMinutes < MIN75 && nightMinutes < MIN100) //amount owed if premier user is under day and night talk time limits
		{
			amountOwed = PREMIER_RATE;
		}
		else if (dayMinutes > MIN75 && nightMinutes < MIN100) //amount owed if premier user is above day talk time limit but below night limit
		{
			amountOwed = PREMIER_RATE + ((dayMinutes - MIN75) * DAY_CHARGE);
		}
		else if (dayMinutes < MIN75 && nightMinutes > MIN100) // amount owed if premier user is below day talk time limit but above night limit
		{
			amountOwed = PREMIER_RATE + ((nightMinutes - MIN100) * NIGHT_CHARGE);
		}
		else if (dayMinutes > MIN75 && nightMinutes > MIN100) //amount owed if premier user went above both day and night limits
		{
			amountOwed = PREMIER_RATE + ((dayMinutes - MIN75) * DAY_CHARGE) + ((nightMinutes - MIN100) * NIGHT_CHARGE);
		}
		else
		{
			cout << "You did not input values correctly, restart this program and select an appropriate service package <s or p>\n";
		}
		cout << "----------Zippy Cell Phone Company----------\n";
		cout << setw(20) << left << "Account Number" << accountNumber << endl;
		cout << setw(20) << left << "Service Type:" << serviceType << endl;
		cout << setw(20) << left << "Daytime Minutes:" << dayMinutes << endl;
		cout << setw(20) << left << "Nighttime minutes:" << nightMinutes << endl;
		cout << setw(20) << left << "Amount Due:" << "$" << amountOwed << endl;
	}
	else
	{
		cout << "You did not input values correctly, restart this program and select an appropriate service package <s or p>\n";
	}


	return 0;
}

/*
Enter an account number and service code <s or p>
DG-12345 P
Enter daytime minutes and nighttime minutes
115 120
----------Zippy Cell Phone Company----------
Account Number      DG-12345
Service Type:       PREMIER
Daytime Minutes:    115.00
Nighttime minutes:  120.00
Amount Due:         $30.00
*/
