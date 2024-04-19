//Lab 10
//Purpose: This program converts lumber dimensions into board feet and then calculates total cost to the customer based on woodtype and amount.
//Sources of logic assistance: None
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
const double INCHESINLINEARFOOT = 12.0;
const double INCHESINONESQUAREFOOT = 144.0;
const double PINECOST = 0.89;
const double FIRCOST = 1.09;
const double CEDARCOST = 2.26;
const double MAPLECOST = 4.40;
const double OAKCOST = 3.10;

bool validateType(char t);
double calcBoardFeet(double th, double wid, double len);
double calcCost(char type, int numP, double bf);
string getTypeName(char type);
void getData(char& woodType, int& numPieces, double& thickness, double& width, double& length);

int main()
{
	char woodType, reply;
	int numPieces;
	double thickness, width, length;
	double cost, totalCost, boardFeet;
	string woodTypeName;
	cout << fixed << setprecision(2);
	do
	{
		totalCost = 0;
		do
		{
			getData(woodType, numPieces, thickness, width, length);
			if (woodType != 'T')
			{
				boardFeet = calcBoardFeet(thickness, width, length);
				cost = calcCost(woodType, numPieces, boardFeet);
				woodTypeName = getTypeName(woodType) + ", cost: $";
				cout << setw(3) << numPieces << setw(6) << thickness
					<< " X " << setw(6) << width << " X " << setw(6)
					<< length << " " << setw(14)
					<< woodTypeName << cost << endl;
				totalCost += cost;
			}
		} while (toupper(woodType) != 'T');
		cout << "Total cost: $" << totalCost << endl;
		cout << "More Purchases? (Y/N)" << endl;
		cin >> reply;
	} while (toupper(reply) == 'Y');

	return 0;
}
bool validateType(char t) //returns true if proper responses are input.
{
	if (t == 'P' || t == 'F' || t == 'C' || t == 'M' || t == 'O' || t == 'T')
	{
		return true;
	}
	else
	{
		return false;
	}
}
double calcBoardFeet(double th, double wid, double len) //BF calculation dividing by linear feet, change constant to inches input length in inches for smaller conversions
{
	return (th * wid * len) / INCHESINLINEARFOOT;
}
double calcCost(char type, int numP, double bf) //Calculates cost based on wood type 
{
	if (type == 'P')
	{
		return PINECOST * numP * bf;
	}
	else if (type == 'F')
	{
		return FIRCOST * numP * bf;
	}
	else if (type == 'C')
	{
		return CEDARCOST * numP * bf;
	}
	else if (type == 'M')
	{
		return MAPLECOST * numP * bf;
	}
	else if (type == 'O')
	{
		return OAKCOST * numP * bf;
	}
}
string getTypeName(char type) //returns a string with full wood name based on character entered.
{
	if (type == 'P')
	{
		return "Pine";
	}
	else if (type == 'F')
	{
		return "Fir";
	}
	else if (type == 'C')
	{
		return "Cedar";
	}
	else if (type == 'M')
	{
		return "Maple";
	}
	else if (type == 'O')
	{
		return "Oak";
	}
	else
		cout << " Error\n";
}
void getData(char& woodType, int& numPieces, double& thickness, double& width, double& length)
{
	bool OK;
	char t;
	cout << "Enter lumber type <P, F, C, M or O> (or T if done): ";
	cin >> woodType;
	woodType = toupper(woodType); //This is changing the woodtype to uppercase for entire program, program will have issues if lowercase is used anywhere.
	OK = validateType(woodType); //set Bool to true if valid wood type or T value

	while (OK == false) //executes if invalid woodtype is entered.
	{
	cout << woodType << " is not a valid type! Reenter.\n";
	cin >> woodType;
	}
	if (woodType != 'T')
	{
		cout << "Enter number of pieces and thickness width and length\n";
		cin >> numPieces >> thickness >> width >> length;
	}
}
/*
Enter lumber type <P, F, C, M or O> (or T if done): p
Enter number of pieces and thickness width and length
150 2.5 3 22
150  2.50 X   3.00 X  22.00  Pine, cost: $1835.62
Enter lumber type <P, F, C, M or O> (or T if done): t
Total cost: $1835.62
More Purchases? (Y/N)
y
Enter lumber type <P, F, C, M or O> (or T if done): o
Enter number of pieces and thickness width and length
100 3 2.5 12
100  3.00 X   2.50 X  12.00   Oak, cost: $2325.00
Enter lumber type <P, F, C, M or O> (or T if done): f
Enter number of pieces and thickness width and length
100 2.5 4 8
100  2.50 X   4.00 X   8.00   Fir, cost: $726.67
Enter lumber type <P, F, C, M or O> (or T if done): t
Total cost: $3051.67
More Purchases? (Y/N)
n
*/
