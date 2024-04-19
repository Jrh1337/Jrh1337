//Project 01 
//Purpose: This program displays a chart of wind chill values in Fahrenheit across a range of different temperature and wind speed values 
//Sources of logic assistance: None
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double MAX_TEMP = 50.0, MAX_WIND = 45.0; //constants for max temp and wind speed used for while loop escapes

int main()
{
	double windChill, windSpeed, actualTemp = -5.0;

	// Top column outputs with windspeed values below
	cout << setprecision(1) << fixed;
	cout << "Temp(F): -------------------------  Wind Speed(MPH) -------------------------\n";
	cout << setw(13) << right << "5"
		<< setw(8) << right << "10"
		<< setw(8) << right << "15"
		<< setw(8) << right << "20"
		<< setw(8) << right << "25"
		<< setw(8) << right << "30"
		<< setw(8) << right << "35"
		<< setw(8) << right << "40"
		<< setw(8) << right << "45" << endl;
	do //This loop is set to display values of entire rows first before moving to the next row.
	{
		windSpeed = 5.0;
		cout << setw(5) << right << actualTemp;

		do
		{
			windChill = 35.74 + (0.6215 * actualTemp) - (35.75 * pow(windSpeed, 0.16)) + 0.4275 * actualTemp * pow(windSpeed, 0.16);
			cout << setw(8) << right << windChill;
			windSpeed += 5;
		} while (windSpeed <= MAX_WIND);

		actualTemp += 5;
		cout << endl;

	} while (actualTemp <= MAX_TEMP);

	return 0;
}

/*
Temp(F): -------------------------  Wind Speed(MPH) -------------------------
			5      10      15      20      25      30      35      40      45
 -5.0   -16.4   -22.1   -25.8   -28.6   -30.8   -32.7   -34.3   -35.7   -37.0
  0.0   -10.5   -15.9   -19.4   -22.0   -24.1   -25.9   -27.4   -28.8   -30.0
  5.0    -4.6    -9.7   -13.0   -15.4   -17.4   -19.1   -20.5   -21.8   -23.0
 10.0     1.2    -3.5    -6.6    -8.9   -10.7   -12.3   -13.6   -14.8   -15.9
 15.0     7.1     2.7    -0.2    -2.3    -4.0    -5.5    -6.8    -7.9    -8.9
 20.0    13.0     8.9     6.2     4.2     2.6     1.3     0.1    -0.9    -1.8
 25.0    18.9    15.1    12.6    10.8     9.3     8.1     7.0     6.1     5.2
 30.0    24.7    21.2    19.0    17.4    16.0    14.9    13.9    13.0    12.2
 35.0    30.6    27.4    25.4    23.9    22.7    21.7    20.8    20.0    19.3
 40.0    36.5    33.6    31.8    30.5    29.4    28.5    27.7    26.9    26.3
 45.0    42.3    39.8    38.2    37.0    36.1    35.3    34.5    33.9    33.3
 50.0    48.2    46.0    44.6    43.6    42.8    42.0    41.4    40.9    40.4
*/

