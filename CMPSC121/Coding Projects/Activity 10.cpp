#include <iostream>

using namespace std;

int main()
{
	const int SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, THURSDAY = 5, FRIDAY = 6, SATURDAY = 7; //intger values for each day of the week
	int choice;
	char reply;

	do
	{
		cout << "Enter a day of the week value: ";
		cin >> choice;

		while (choice < SUNDAY || choice > SATURDAY) //Validates if user input is in the 1-7 range
		{
			cout << choice << " is invalid\n";
			cout << "Enter a day of the week value: ";
			cin >> choice;
		}
		switch (choice) //Prints day of the week output based on user integer input
		{
		case SUNDAY:
			cout << "Sunday" << endl;
			break;
		case MONDAY:
			cout << "Monday" << endl;
			break;
		case TUESDAY:
			cout << "Tuesday" << endl;
			break;
		case WEDNESDAY:
			cout << "Wednesday" << endl;
			break;
		case THURSDAY:
			cout << "Thursday" << endl;
			break;
		case FRIDAY:
			cout << "Friday" << endl;
			break;
		case SATURDAY:
			cout << "Saturday" << endl;
			break;
		}
		cout << "Do you wish to continue? ";
		cin >> reply;

	} while (toupper(reply) == 'Y'); //exits loop if user types anyhing other than y or Y
	
	cout << "Goodbye! Thank you for using our program!\n";

	return 0;

/*
Enter a day of the week value: 8
8 is invalid
Enter a day of the week value: 6
Friday
Do you wish to continue? y
Enter a day of the week value: 5
Thursday
Do you wish to continue? n
Goodbye! Thank you for using our program!
*/
}
