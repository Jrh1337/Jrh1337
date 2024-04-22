//Project 3
//Purpose: This programs asks user to input a part number then displays information.  If parts doesn't exist user can add that part which will update the parts file
//Sources of logic assistance: None
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
using namespace std;

template <class CType>
void swapper(CType& a, CType& b)
{
	CType temp;
	temp = a;
	a = b;
	b = temp;
}

struct Parts	//Stores part information into a vector structure
{
	string number;
	char cls;
	int ohb;
	double cost;
};

bool get_data(vector <Parts>& pVector);		//Loads data file into vector structure 
void shellSort(vector <Parts>& pVector);	//Sorts part list in numerical order works with swapper function to organize
int bin_search(string key, const vector<Parts>& pVector);	//binary search for part number input by user
string get_target();										//User input of part number to search for
void get_more_data(char& class_in, int& part_ohb_in, double& part_cost_in); //Prompts for more information of part user wishes to add to the database
void insert_data(vector <Parts>& pVector, string part_in, char class_in, int part_ohb_in, double part_cost_in); //Inserts added part information into the data structure
void display(const vector <Parts>& pVector, int finder); //Displays information on any parts searched by the user already in the database
void print_stats(int searches, int good, int bad, int added); //Prints number of searches and parts added upon user exitting the program
void put_data(const vector <Parts>& pVector);  //Inserts new parts being added into data file.

int main()
{
	vector<Parts> pVector;
	string target;
	char reply, classIn;
	int part_ohb_in, searches = 0, good = 0, bad = 0, partsAdd = 0;
	double part_cost_in;

	


	if (get_data(pVector) == false)
	{
		cout << "File failed to open!\n";
	}

	shellSort(pVector);						//Sorts vector structure in numerical order by part number
											

	do
	{
		target = get_target();				//Asks user for part number to search for in vector structure and stores in a string
		int finder = bin_search(target, pVector);	//passes user inputted part number and searches 

		if (finder != -1) //bin search returns -1 if part number was found
		{
			display(pVector, finder); //passes structure and search function again to reproduce result and display specific info.
			good++;
			searches++;
		}
		else
		{
			bad++;
			searches++;
			cout << "Part not Found!\n";
			cout << "Would you like to add this part?\n";
			cin >> reply;
			if (toupper(reply) == 'Y')
			{
				get_more_data(classIn, part_ohb_in, part_cost_in);
				insert_data(pVector, target, classIn, part_ohb_in, part_cost_in);
				shellSort(pVector);
				partsAdd++;
				cout << target << " Sucessfully added!\n";	
			}
				
		}
		cout << "Would you like to search for a different part number?\n";
		cin >> reply;

	} while (toupper(reply) == 'Y');


	print_stats(searches, good, bad, partsAdd);
	
	put_data(pVector);

	return 0;
}
bool get_data(vector <Parts>& pVector)
{
	fstream partsFile;
	partsFile.open("parts.txt"); //Change path as needed

	Parts part;

	if (partsFile.fail())
	{
		return false;
	}
	else
	{
		while (partsFile >> part.number >> part.cls >> part.ohb >> part.cost) //Loads all part information into structure
		{
			pVector.push_back(part);
		}
	}

	return true;
}
void shellSort(vector <Parts>& pVector)
{
	bool flag = true;
	int i, numLength = pVector.size();

	int d = numLength;
	while (flag || (d > 1))    // bool flag 
	{
		flag = false;  //reset flag to 0 to check for
		// future swaps      
		d = (d + 1) / 2;
		for (i = 0; i < (numLength - d); i++)
		{
			if (pVector[i + d].number < pVector[i].number)
			{
				swapper(pVector[i], pVector[i + d]);

				flag = true;     //tells swap has occurred
			}
		}
	}
}
string get_target()
{
	string input;
	cout << "Please enter a part number <P-XXXXX>\n";
	cin >> input;
	return input;
}
int bin_search(string key, const vector<Parts>& pVector)
{
	bool found = false;
	int first, mid, last, return_val;
	first = 0;
	last = pVector.size() - 1;
	while ((first <= last) && (!found))
	{
		mid = (first + last) / 2;
		if (key == pVector[mid].number)
		{
			found = true;
		}
		else
		{
			if (key < pVector[mid].number)
			{
				last = mid - 1;
			}
			else
			{
				first = mid + 1;
			}
		}
	}
	if (found)
	{
		return_val = mid;
	}
	else
	{
		return_val = -1;
	}

	return return_val;
}
void display(const vector <Parts>& pVector, int finder)
{
	cout << "There are " << pVector[finder].ohb << " of Part Number " << pVector[finder].number
		<< " in inventory.\n" << "It is a class " << pVector[finder].cls << " part.\n"
		<< "The cost is $" << pVector[finder].cost << endl;
	cout << "The value of that inventory is $" << pVector[finder].cost * pVector[finder].ohb << endl;
}
void get_more_data(char& class_in, int& part_ohb_in, double& part_cost_in)
{
	cout << "Please enter part class, quantity and cost per part: \n";
	cin >> class_in >> part_ohb_in >> part_cost_in;
}
void insert_data(vector <Parts>& pVector, string part_in, char class_in, int part_ohb_in, double part_cost_in) //inserts new parts into end of structure before
{
	Parts part;
	part.number = part_in;
	part.cls = class_in;
	part.ohb = part_ohb_in;
	part.cost = part_cost_in;
	pVector.push_back(part);
}
void print_stats(int searches, int good, int bad, int added)
{
	cout << "----------------------------------------------\n";
	cout << "---------------Inventory Report---------------\n";
	cout << "----------------------------------------------\n";
	cout << setw(30) << right << "Number of Searches: " << setw(15) << right << searches << endl;
	cout << setw(30) << right << "Successful Searches: " << setw(15) << right << good << endl;
	cout << setw(30) << right << "Unsuccessful Searches: " << setw(15) << right << bad << endl;
	cout << "----------------------------------------------\n";
	cout << setw(30) << right << "Total Number of Parts Added: " << setw(15) << right << added << endl;
}
void put_data(const vector <Parts>& pVector) //Overwrites existing file with new parts added
{
	fstream partsFile;
	partsFile.open("parts.txt");

	if (partsFile.fail())
	{
		cout << "Failed to write to file!\n";
	}
	for (const auto& parts : pVector)
	{
		partsFile << parts.number << " " << parts.cls << " " << parts.ohb << " " << parts.cost << endl;
	}

	partsFile.close();
}

/*
Please enter a part number <P-XXXXX>
P-10022
Part not Found!
Would you like to add this part?
y
Please enter part class, quantity and cost per part:
C 123 45.00
P-10022 Sucessfully added!
Would you like to search for a different part number?
y
Please enter a part number <P-XXXXX>
P-31977
Part not Found!
Would you like to add this part?
y
Please enter part class, quantity and cost per part:
A 12 156.00
P-31977 Sucessfully added!
Would you like to search for a different part number?
y
Please enter a part number <P-XXXXX>
P-32344
Part not Found!
Would you like to add this part?
y
Please enter part class, quantity and cost per part:
D 88 12.00
P-32344 Sucessfully added!
Would you like to search for a different part number?
y
Please enter a part number <P-XXXXX>
P-33195
There are 11 of Part Number P-33195 in inventory.
It is a class C part.
The cost is $24.63
The value of that inventory is $270.93
Would you like to search for a different part number?
n
----------------------------------------------
---------------Inventory Report---------------
----------------------------------------------
		  Number of Searches:               4
		 Successful Searches:               1
	   Unsuccessful Searches:               3
----------------------------------------------
 Total Number of Parts Added:               3
 */
