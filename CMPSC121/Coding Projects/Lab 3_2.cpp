//Lab 03-2
//Purpose: This program calculates the torque, shear strength and horsepower of a shaft and determines the minimum diameter of the shaft required to withstand these inputs 
//None
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	double horsePower, rpm, shearStrength, diameter, torque;


	cout << "Enter values for horsepower(P), rpm(N) and shear strength(S)" << endl;
	cin >> horsePower >> rpm >> shearStrength;

	//calculations
	cin >> setprecision(3) >> fixed;
	torque = 63000 * (horsePower / rpm);
	diameter = pow((16 * torque) / shearStrength, 0.333);

	cout << setprecision(3) << fixed;
	cout << setw(15) << right << "P(HP)" << setw(15) << right << "N(rpm)" << setw(15) << right << "S(psi)" << setw(15) << right << "T(torque)" << setw(15) << right << "D(diameter)" << endl;
	cout << setw(15) << right << horsePower << setw(15) << right << rpm << setw(15) << right << shearStrength << setw(15) << right << torque << setw(10) << right << diameter 
	<< setw(3) << left << " inches" << endl;

	return 0;


}
	/*Enter values for horsepower(P), rpm(N) and shear strength(S)
270 40 6500
          P(HP)         N(rpm)         S(psi)      T(torque)    D(diameter)
        270.000         40.000       6500.000     425250.000    10.130 inches
*/
