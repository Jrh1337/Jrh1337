//Activity 08 
//Purpose: This program determines the location of two coordinates on a two dimensional plane.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x, y;

	cout << "Enter an integer coordinate: x, y\n";
	cin >> x >> y;
	
	// Locates each coordinate based on the value of x or y
	if (x == 0 && y != 0)
	{
		cout << "<" << x << "," << y << "> " << "is on the y-axis.";
	}
	else if (x != 0 && y == 0)
	{
		cout << "<" << x << "," << y << "> " << "is on the x-axis.";
	}
	else if (x == 0 && y == 0)
	{
		cout << "<" << x << "," << y << "> " << "is the origin.";
	}
	else if (x > 0 && y > 0)
	{
		cout << "<" << x << "," << y << "> " << "is in the first quadrant.";
	}
	else if (x < 0 && y > 0)
	{
		cout << "<" << x << "," << y << "> " << "is in the second quadrant.";
	}
	else if (x < 0 && y < 0)
	{
		cout << "<" << x << "," << y << "> " << "is in the third quadrant.";
	}
	else if (x > 0 && y < 0)
	{
		cout << "<" << x << "," << y << "> " << "is in the fourth quadrant.";
	}
	else
	{
		cout << "Unexpected error.\n";
	}
	return 0;

	/*
 Enter an integer coordinate: x, y
-3 99
<-3,99> is in the second quadrant.
C:\Users\John\Desktop\Hayes Documentation\Classes\College\CMPSC 121\cmpsc121\homework\Activity 8\Activity08\Debug\Activity08.exe (process 20176) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
	*/
