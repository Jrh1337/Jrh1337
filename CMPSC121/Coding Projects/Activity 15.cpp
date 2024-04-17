//Activity 15 
//Purpose: This program asks a user to input number of items and price sold then calls to a function that calculates the total value for output.
#include <iostream>
#include <iomanip>
using namespace std;

double calculateValue(int, double); //function prototype

int main()
{
	int items;
	double cost, value;
	char reply;

	cout << setprecision(2) << fixed;

	do //Loop breaks once user replies with anything other than y or Y
	{
		cout << "Enter number of items and cost: ";
		cin >> items >> cost;
		value = calculateValue(items, cost); //function multiplies number of items by cost to calculate value
		cout << "The extended amount is: " << "$" << value << endl;
		cout << "Do you have another purchase to enter? Y or N\n";
		cin >> reply;

	} while (toupper(reply) == 'Y'); 

	cout << "Thank you!";

	return 0;
}

double calculateValue(int items, double cost) //function takes in two arguments from user and returns the value as a double
{
	double value;
	value = items * cost;
	return value;
}

/*
Enter number of items and cost: 6 5.99
The extended amount is: $35.94
Do you have another purchase to enter? Y or N
y
Enter number of items and cost: 13 2.35
The extended amount is: $30.55
Do you have another purchase to enter? Y or N
N
Thank you!*/
