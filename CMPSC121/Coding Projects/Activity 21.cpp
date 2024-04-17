//Activity 21
//Purpose: This program accepts user input of an item and then updates the structure containing the items elements.  elements are outputted to a text document through a function.
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

struct items //structure with elements pertaining to each inventoried item.
{
	string partNumber;
	string partName;
	char partClass = NULL;
	int qtyOH = NULL;
	double unitPrice = NULL;
};

void getItems(items&);
void printItems(ostream&, items);

int main()
{
	items p;
	char reply;
	ofstream outputFile;
	outputFile.open("C:\\Users\\John\\Desktop\\Hayes Documentation\\Classes\\College\\CMPSC 121\\cmpsc121\\homework\\Activity 21\\Activity 21\\inventoryOutput.txt");

	do
	{
		cout << "Enter part information (Part #, name, class, on hand balance and price)\n";

		getItems(p);
		printItems(outputFile, p);

		cout << "More parts? Y or N\n";
		cin >> reply;
		cin.ignore();

	} while (toupper(reply) == 'Y'); //loop exits when user indicates no more inputs.

	outputFile.close();

	return 0;
}
void getItems(items &p) //Changes members of the structure based on user input.
{
	getline(cin, p.partNumber, ' ');
	getline(cin, p.partName, ' ');
	cin >> p.partClass >> p.qtyOH >> p.unitPrice;
}
void printItems(ostream &outputFile, items p) //Prints each member from structure to a file, output file is appended rather than overwritten.
{
	outputFile << p.partNumber << " " << p.partName << " " << p.partClass << " " << p.qtyOH << " " << p.unitPrice << endl;
}

/*
P-14376 Widget B 120 34.95
P-16543 Wodget C 80 15.75

in output file
*/
