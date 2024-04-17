//Activity 18
//Purpose: This program reorganizes a persons name and capitalizes the appropriate letters.
#include <iostream>
#include <string>
using namespace std;

void nameOrganizer(string, string &, string &, string &);

int main()
{
	string name, firstName, lastName, middleInitial;
	char reply;

	do
	{
		cout << "Please enter a name as <First MI. Last>\n";
		getline(cin, name);
		cout << "You entered: " << name;
		cout << " It was converted to: ";
		nameOrganizer(name, firstName, middleInitial, lastName);
		cout << lastName + ", " + firstName + middleInitial + "." << endl;
		
		cout << "Do you wish to enter another name? \n";
		cin >> reply; 
		cin.ignore();
		

	} while (toupper(reply) == 'Y');

	return 0;
}

void nameOrganizer(string name, string &firstName, string &middleInitial, string &lastName)
{
	int found;
	found = name.find(" "); //identifies the first space in the string before the middle initial
	if (found != -1) 
	{
		found++; //sets found to be at integer location of the middle initial, going forward everything will be based on the location of the MI.
		firstName = name.substr(0, found); 
		firstName[0] = toupper(firstName[0]);
		middleInitial = name.substr(found, 1);
		middleInitial = toupper(middleInitial[0]);
		lastName = name.substr(found+=3, name.length());
		lastName[0] = toupper(lastName[0]);
	}
	else
	{
		cout << "\nError!";
	}
}

/*
Please enter a name as <First MI. Last>
christopher l. smith
You entered: christopher l. smith It was converted to: Smith, Christopher L.
Do you wish to enter another name?
y
Please enter a name as <First MI. Last>
tammy j. pyles
You entered: tammy j. pyles It was converted to: Pyles, Tammy J.
Do you wish to enter another name?
n
*/
