//Lab 04
//Purpose: This program calculates how much a customer will pay to park based on how many hours they are parked and the type of vehicle they have.
//Sources of logic assistance:  None
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int hours;
	char vehicleType;
	string vehicleName;
	double amountDue;
	const int rateChange = 2;			//This sets the hour when the rate changes from the first rate to the second.
	const double CAR_FIRST_RATE = 1.25, //The first rate is the cost of parking per hour for the first 2 hours.  The second rate is the cost of parking per hour after 2 hours.
		CAR_SECOND_RATE = 1.50,
		TRUCK_FIRST_RATE = 2.75,
		TRUCK_SECOND_RATE = 3.75,
		BUS_FIRST_RATE = 9.50,
		BUS_SECOND_RATE = 6.75;

	cout << "Please enter your type of vehicle (Car, Truck or Bus) as <C, T or B>\n";
	cin >> vehicleType;
	cout << "Please enter the number of hours parked.\n";
	cin >> hours;

	if (vehicleType == 'C')
	{
		{
			vehicleName = "Car";
		}
		if (hours <= rateChange)
			{
				amountDue = CAR_FIRST_RATE * hours;
			}
		else
			{
				amountDue = (rateChange * CAR_FIRST_RATE) + (hours - rateChange) * CAR_SECOND_RATE;
			}
	}

	else if (vehicleType == 'T')
	{
		{
			vehicleName = "Truck";
		}
		if (hours <= rateChange)
			{
				amountDue = TRUCK_FIRST_RATE * hours;
			}
		else
			{
				amountDue = (rateChange * TRUCK_FIRST_RATE) + (hours - rateChange) * TRUCK_SECOND_RATE;
			}
	}

	else if (vehicleType == 'B')
	{
		{
			vehicleName = "Bus";
		}
		if (hours <= rateChange)
			{
				amountDue = BUS_FIRST_RATE * hours;
			}
		else
			{
				amountDue = (rateChange * BUS_FIRST_RATE) + (hours - rateChange) * BUS_SECOND_RATE;
			}


		
	}
	else
	{
		amountDue = 0;
		cout << "You have entered something wrong, make sure you entered a single letter and hours as an integer.\n";
	}

	if (amountDue > 0)
	{
		cout << setprecision(2) << fixed;
		cout << "Crunchum Parking Lots, Inc.\n";
		cout << "\"We usually find your vehicle!\"\n";
		cout << "================================\n";
		cout << setw(20) << left << "Vehicle Type:" << vehicleName << endl;
		cout << setw(20) << left << "Time:" << hours << " Hours" << endl;
		cout << setw(20) << left << "Amount Due:  " << "$" << amountDue << endl;
		cout << "================================\n";
	}
	else
	{
		cout << "You have Entered something wrong.\n";
	}

	return(0);

}
	/*Please enter your type of vehicle (Car, Truck or Bus) as <C, T or B>
C
Please enter the number of hours parked.
7
Crunchum Parking Lots, Inc.
"We usually find your vehicle!"
================================
Vehicle Type:       Car
Time:               7 Hours
Amount Due:         $10.00
================================

C:\Users\John\Desktop\Hayes Documentation\Classes\College\CMPSC 121\cmpsc121\Labs\Lab04\Debug\Lab04.exe (process 25952) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .*/

/*Please enter your type of vehicle (Car, Truck or Bus) as <C, T or B>
T
Please enter the number of hours parked.
10
Crunchum Parking Lots, Inc.
"We usually find your vehicle!"
================================
Vehicle Type:       Truck
Time:               10 Hours
Amount Due:         $35.50
================================

C:\Users\John\Desktop\Hayes Documentation\Classes\College\CMPSC 121\cmpsc121\Labs\Lab04\Debug\Lab04.exe (process 23360) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .*/

/*
Please enter your type of vehicle (Car, Truck or Bus) as <C, T or B>
B
Please enter the number of hours parked.
8
Crunchum Parking Lots, Inc.
"We usually find your vehicle!"
================================
Vehicle Type:       Bus
Time:               8 Hours
Amount Due:         $59.50
================================

C:\Users\John\Desktop\Hayes Documentation\Classes\College\CMPSC 121\cmpsc121\Labs\Lab04\Debug\Lab04.exe (process 15956) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .*/

/*
Please enter your type of vehicle (Car, Truck or Bus) as <C, T or B>
T
Please enter the number of hours parked.
45
Crunchum Parking Lots, Inc.
"We usually find your vehicle!"
================================
Vehicle Type:       Truck
Time:               45 Hours
Amount Due:         $166.75
================================

C:\Users\John\Desktop\Hayes Documentation\Classes\College\CMPSC 121\cmpsc121\Labs\Lab04\Debug\Lab04.exe (process 24348) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .*/

/*
Please enter your type of vehicle (Car, Truck or Bus) as <C, T or B>
f
Please enter the number of hours parked.
6
You have entered something wrong, make sure you entered a single letter and hours as an integer.

*/
