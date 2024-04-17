//Activity 17 
//Purpose: This program calculates the largest length a pole will fit in a room and displays what the length is.
//Sources of logic assistance: None
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


void getDimensions(double &, double &, double &);
void poleCalc(double, double, double);

int main()
{
	double length, width, height;

	cout << setprecision(2) << fixed;

	getDimensions(length, width, height);
	poleCalc(length, width, height);

	return 0;
}

void getDimensions(double &length, double &width, double &height) //user input will change the value of the dimesnions in main because of the refrence variables.
{
	cout << "Enter the Length, Width and Height of a room in meters: \n";
	cin >> length >> width >> height;
}

void poleCalc(double length, double width, double height)
{
	double maxLength;
	maxLength = sqrt((pow(length, 2.0) + pow(width, 2.0) + pow(height, 2.0))); //This calculates the length of the bottom corner of a room to the opposite top corner.
	cout << "The longest pole that can fit in this room is: " << maxLength << " meters\n";
}
/*
Enter the Length, Width and Height of a room in meters:
8 15 10
The longest pole that can fit in this room is: 19.72 meters
*/
