//Lab 03-1  
//Purpose: This program takes the radius of the circle formed by a ring and the cross radius of the ring to calculate volume and surface area.
//None
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.14159;

int main()
{
	double crossR, ringR, volume, surfaceArea;

	//Gather inputs set all values to third decimel place
	cout << setprecision(3) << fixed;
	cout << "Enter radius of ring and radius of cross section" << endl;
	cin >> ringR >> crossR;

	//Calculations of inputs
	volume = 2 * pow(PI, 2.0) * ringR * pow(crossR, 2.0);
	surfaceArea = 4 * pow(PI, 2.0) * crossR * ringR;

	//Display information
	cout << "For a ring with a radius of " << ringR << " and a cross section radius of " << endl;
	cout << crossR << endl;

	cout << setw(20) << left << "The volume is:" << setw(15) << right << volume << endl;
	cout << setw(20) << left << "The surface area is:" << setw(15) << right << surfaceArea << endl;

	return 0;

}
	/*Enter radius of ring and radius of cross section
25.75 3
For a ring with a radius of 25.750 and a cross section radius of
3.000
The volume is:             4574.554
The surface area is:       3049.703
*/


