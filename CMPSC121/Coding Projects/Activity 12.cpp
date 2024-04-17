//Activity 12 
//Purpose: This program passes user input to a function which calculates the ulam sequence of an integer >= 2.
#include <iostream>
#include <iomanip>
using namespace std;

void ulam(int); //Declared function prototype

const int MIN_VALUE = 2; //Global constant for user minimum value of acceptable input 

int main()
{
	int num;

	cout << "Enter a number >=2: \n"; //Prompts user input
	cin >> num;

	while (num < MIN_VALUE) //Loop prompts user to input integer again if >= 2
	{
		cout << "Invalid input! Please try again ... \n";
		cout << "Enter a number >=2: \n";
		cin >> num;
	}

	ulam(num); //Passes number to ulam function
	
	return 0;
}

void ulam(int num)
{
	cout << "The Ulam Sequence starting from " << num << " is: ";
	cout << num << " ";
	while (num != 1) //Loop exits once integer value is 1
	{
		if (num % 2) //if number is even number this statement is false by giving a 0 value and executes the else statement
		{
			num = (num * 3) + 1;
		}
		else
		{
			num = num / 2;
		}
		cout << num << " ";
	}
}

/*
Enter a number >=2:
23
The Ulam Sequence starting from 23 is: 23 70 35 106 53 160 80 40 20 10 5 16 8 4 2 1
*/
