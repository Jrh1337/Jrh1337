//Lab 07
//Purpose: This program reads file which contains vehicle data and calculates miles per gallon, average MPG, vehicles with best and worst MPG and total miles travelled by all vehicles.
//Sources of logic assistance: None
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void printHeading(); //Function prototypes
void printOutput(int count, double totalMiles, double avgMPG, string bestVehicle, double bestMPG, string worstVehicle, double worstMP);

int main()
{
	string vehicleID, worstVehicle, bestVehicle;
	int count = 0;
	double miles = 0, gallons = 0, MPG = 0, bestMPG = 0, worstMPG = 1000, avgMPG, totalMiles = 0, totalGallons = 0;


	ifstream VehicleReport;
	VehicleReport.open ("C:\\Users\\John\\Desktop\\Hayes Documentation\\Classes\\College\\CMPSC 121\\cmpsc121\\Labs\\Lab07\\Lab07\\FleetInput.txt"); //opens file, change path as necessary

	if (VehicleReport.fail()) //output if file fails to open
	{
		cout << "Unable to Open file!";
	}
	else
	{
		printHeading(); //Calls function to print the heading of the report
		cout << setprecision(1) << fixed; 

		while (VehicleReport >> vehicleID >> miles >> gallons) //Reads file and assignes values to each variable, loop breaks at end of file
		{	
			MPG = miles / gallons; //calculates MPG
			cout << vehicleID << "\t" << miles << "\t" << gallons << "\t" << MPG << endl; //displays the first row of data being read
			totalMiles += miles; //running total of miles
			totalGallons += gallons; //running total of gallons
			count++; //running count

			if (MPG > bestMPG) //compares the current MPG to the values of best and worst,  assigns best and worst MPG to variable and pulls vic ID associated
			{
				bestMPG = MPG;
				bestVehicle = vehicleID;
			}
			else if (MPG < worstMPG)
			{
				worstMPG = MPG;
				worstVehicle = vehicleID;
			}
			
		}
		avgMPG = totalMiles / totalGallons; //last calculation of average MPG after loop finishes

		printOutput(count, totalMiles, avgMPG, bestVehicle, bestMPG,  worstVehicle, worstMPG); //calls to function to print the output, passes respective variables.

	}

	VehicleReport.close(); //Closes file
	return 0;

}

void printHeading() //Header
{
	cout << "AMSCO Fleet Report\n";
	cout << "Vehicle ID" << "\t" << "Miles" << "\t" << "Gallons" << "\t" << " MPG\n";
	cout << "-------------------------------------------------------------\n";
}

void printOutput(int count, double totalMiles, double avgMPG, string bestVehicle, double bestMPG, string worstVehicle, double worstMPG) //Output
{
	cout << "-------------------------------------------------------------\n";
	cout << "Count: " << count << endl;
	cout << "Total miles: " << totalMiles << endl;
	cout << "Average MPG: " << avgMPG << endl;
	cout << "Vehicle ID with Best MPG:" << setw(12) << right << bestVehicle << "\t" << bestMPG << endl;
	cout << "Vehicle ID with Worst MPG:" << setw(11) << right << worstVehicle << "\t" << worstMPG << endl;
}


/*
AMSCO Fleet Report
Vehicle ID      Miles   Gallons  MPG
-------------------------------------------------------------
279BX6KY2Z      582.2   20.5    28.4
802MX8BZ4Q      723.6   25.1    28.8
671AY6DZ3N      756.9   27.5    27.5
845DH6AJ3B      660.2   25.4    26.0
566GJ6KV2U      510.2   30.8    16.6
109QW2RP2Y      301.2   8.3     36.3
135TR4YC6H      387.6   12.2    31.8
122AC6UG7P      228.9   14.7    15.6
136VW8TD2Z      331.2   19.1    17.3
448WQ2DX1M      543.9   33.6    16.2
721GZ1LJ5N      629.8   27.9    22.6
779FS3MB4Y      651.2   28.4    22.9
553SB5LK8O      444.4   26.8    16.6
-------------------------------------------------------------
Count: 13
Total miles: 6751.3
Average MPG: 22.5
Vehicle ID with Best MPG:  109QW2RP2Y   36.3
Vehicle ID with Worst MPG: 122AC6UG7P   15.6
*/
