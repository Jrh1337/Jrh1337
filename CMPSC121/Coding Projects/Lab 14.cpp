#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
using namespace std;

struct Parts
{
	string number;
	char cls;
	int ohb;
	double cost;
};

bool readFile(vector <Parts>& pVector);											//Reads each line of the input file into a vector structure
int displayMenu();																//Displays user selection menu and returns integer response
double totalCost(const vector <Parts>& pVector);								//Calculates total cost of all items in file 
void countByClass(const vector <Parts>& pVector, vector <int>& classCounts);	//Displays number of items of each class type
double costForClass(char classIn, const vector <Parts>& pVector);				//User can input which individual class total cost they'd like to see
string highestCost(const vector <Parts>& pVector);								//Highest costing part number
string lowestCost(const vector <Parts>& pVector);								//Lowest costing part number

int main()
{
	vector<Parts> pVector;
	vector<int> classCounts;
	int menuSelection;
	char classIn;

	if (readFile(pVector) == false)
	{
		cout << "File failed to open!\n";
	}

	do
	{
		menuSelection = displayMenu();

		switch (menuSelection) //Cases correspond to user input,  This is encased in a loop to repeat until user decides to exit.
		{
		case 1:
			system("cls");
			cout << setprecision(2) << fixed;
			cout << "Your choice was 1\n";
			cout << "The total cost is $" << totalCost(pVector) << endl;
			break;
		case 2:
			system("cls");
			cout << "Your choice was 2\n";
			cout << "Count of parts by class\n";
			countByClass(pVector, classCounts);
			break;
		case 3:
			system("cls");
			cout << "Your choice was 3\n";
			cout << "Which class?\n";
			cout << setprecision(2) << fixed;
			cin >> classIn;
			cout << endl;
			cout << "Cost of inventory for class " << classIn << " is $" << costForClass(classIn, pVector) << endl;
			break;
		case 4:
			system("cls");
			cout << "Your choice was 4\n";
			cout << "The part with the highest cost of inventory is " << highestCost(pVector) << endl;
			break;
		case 5:
			system("cls");
			cout << "Your choice was 5\n";
			cout << "The part with the lowest cost of inventory is " << lowestCost(pVector) << endl;
			break;
		case 6:
			system("cls");
			cout << "Exiting..\n";
			break;
		}

	} while (menuSelection != 6);

	return 0;
}
bool readFile(vector <Parts>& pVector) 
{
	Parts parts;
	string number;
	char cls;
	int ohb;
	double cost;

	ifstream inputFile;
	inputFile.open("C:\\Users\\John\\Desktop\\Hayes Documentation\\Classes\\College\\CMPSC 121\\cmpsc121\\Labs\\Lab14\\Lab 14\\parts.txt"); //Input file path
	if (inputFile.fail())
	{
		return false;
	}
	else
	{
		while (inputFile >> parts.number >> parts.cls >> parts.ohb >> parts.cost) //Reads input file into variables line by line.
		{
			pVector.push_back(parts);
		}
		inputFile.close();
		return true;
	}
}
int displayMenu()
{
	int reply;

	cout << "\t" << "R E P O R T S   M E N U\n";
	cout << "1. Total cost of inventory.\n";
	cout << "2. A count of parts of each class.\n";
	cout << "3. Cost of inventory for a class.\n";
	cout << "4. Part with the highest cost of inventory.\n";
	cout << "5. Part with lowest cost of inventory.\n";
	cout << "6. Exit.\n";

	cin >> reply;

	while (reply > 6 || reply < 1) //Exits Loop upon user entering correct number range from menu.
	{
		cout << "You did not enter a valid menu option!\n";
		cin >> reply;
	}
	return reply;
}
double totalCost(const vector <Parts>& pVector) //iterates through each component in the structure line by line and stores it in part.
{
	double total = 0;

	for (const auto& part : pVector) 
	{
		total += (part.cost * part.ohb);
	}
	return total;
}
void countByClass(const vector <Parts>& pVector, vector <int>& classCounts)
{
	classCounts.assign(26, 0); //Need this to reinitialize vector back to 0 for all elements incase function runs again.
	for (const auto& part : pVector) //iterates over each element in the vector structure
	{
		classCounts[part.cls - 65]++; //extracts the class then stores appropriate count in the classCounts vector, A will be index 0, B index 1 etc..
	}
	for (int i = 0; i < 26; i++) //iterates through entire classCount vector
	{
		if (classCounts[i] > 0) //Will only display character counts greater than zero
		{
			cout << char('A' + i) << "\t" << classCounts[i] << endl; //Displays count, index is added to A to display correct character in each index.
		}
	}
}
double costForClass(char classIn, const vector <Parts>& pVector)
{
	double cost = 0;

	for (const auto& part : pVector) 
	{
		if (classIn == part.cls) //Only applies for corresponding character
		{
			cost += (part.cost * part.ohb); 
		}
	}
	return cost;
}
string highestCost(const vector <Parts>& pVector) //Sets default values outside the loop as first element from vector then compares and adjusts inside of the loop.
{
	string highest = pVector[0].number;
	double maxCost = pVector[0].cost * pVector[0].ohb;

	for (int i = 1; i < pVector.size(); i++)
	{
		double C1 = pVector[i].cost * pVector[i].ohb;
		if (C1 > maxCost)
		{
			maxCost = C1;
			highest = pVector[i].number;
		}
	}
	return highest;
}
string lowestCost(const vector <Parts>& pVector)
{
	string lowest = pVector[0].number;
	double minCost = pVector[0].cost * pVector[0].ohb;

	for (int i = 1; i < pVector.size(); i++)
	{
		double C1 = pVector[i].cost * pVector[i].ohb;
		if (C1 < minCost)
		{
			minCost = C1;
			lowest = pVector[i].number;
		}
	}
	return lowest;
}
/*
Your choice was 3
The total cost is $342965.70
		R E P O R T S   M E N U
1. Total cost of inventory.
2. A count of parts of each class.
3. Cost of inventory for a class.
4. Part with the highest cost of inventory.
5. Part with lowest cost of inventory.
6. Exit.

Your choice was 2
Count of parts by class
A       85
B       69
C       77
D       60
E       5
F       8

Your choice was 3
Which class?
C

Cost of inventory for class C is $50322.30

Your choice was 4
The part with the highest cost of inventory is P-27850

Your choice was 5
The part with the lowest cost of inventory is P-30538

*/
