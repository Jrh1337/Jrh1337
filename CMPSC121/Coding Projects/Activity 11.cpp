//Activity 11 
//Purpose: This opens a text file and calculates number of parts by type and value of each inventory
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	ifstream inputFile; //reads the input of a file 
	string partno;
	double Avalue = 0, Bvalue = 0, Cvalue = 0, Dvalue = 0, unknownValue = 0, cost; 
	int quantity, Aparts = 0, Bparts = 0, Cparts = 0, Dparts = 0, unknownParts = 0;
	char ch;

	inputFile.open("C:\\Users\\John\\Desktop\\Hayes Documentation\\Classes\\College\\CMPSC 121\\cmpsc121\\homework\\Activity 11\\Activity11\\parts.txt"); //opens file path, change file path destination as necessary
	if (inputFile.fail()) //output if file fails to open
	{
		cout << "Unable to Open File!";
	}
	else 
	{
		cout << setprecision(2) << fixed; 
		while (inputFile >> partno >> ch >> quantity >> cost) //reads each file line and assignes values to variables seperated by spaces until no lines remain  
		{
			if (ch == 'A') //adds quantity of parts and total inventory values by parts based on what the character variable is assigned
			{
				Aparts++;
				Avalue += quantity * cost;
			}
			else if (ch == 'B')
			{
				Bparts++;
				Bvalue += quantity * cost;
			}
			else if (ch == 'C')
			{
				Cparts++;
				Cvalue += quantity * cost;
			}
			else if (ch == 'D')
			{
				Dparts++;
				Dvalue += quantity * cost;
			}
			else //For any parts besides A, B, C or D
			{
				unknownParts++;
				unknownValue += quantity * cost;
			}

		}
	}
	cout << ".................INVENTORY REPORT..................\n"; //Final output for inventory report
	cout << "A parts " << "Count: " << Aparts << " Value of inventory: " << Avalue << endl;
	cout << "B parts " << "Count: " << Bparts << " Value of inventory: " << Bvalue << endl;
	cout << "C parts " << "Count: " << Cparts << " Value of inventory: " << Cvalue << endl;
	cout << "D parts " << "Count: " << Dparts << " Value of inventory: " << Dvalue << endl;
	cout << "Unknown " << "Count: " << unknownParts << " Value of inventory: " << unknownValue << endl;

	inputFile.close(); //closes the file

	return 0;

	/*
	.................INVENTORY REPORT..................
A parts Count: 85 Value of inventory: 191180.07
B parts Count: 69 Value of inventory: 74764.16
C parts Count: 77 Value of inventory: 50322.30
D parts Count: 60 Value of inventory: 22416.49
Unknown Count: 13 Value of inventory: 4282.68
*/
}
