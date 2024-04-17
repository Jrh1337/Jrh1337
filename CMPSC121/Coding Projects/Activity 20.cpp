//Activity 20
//Purpose: This takes any string a prints displays it backwards using a recursive function.
#include <iostream>
#include <string>
using namespace std;

void reverse(string, int);

int main()
{
	string strln;

	cout << "Please enter a string: \n";
	getline(cin, strln);

	reverse(strln, strln.length());

	return 0;
}
void reverse(string s, int i)
{
	
	if (i == 0)
	{
		cout << s[i];
	}
	else
	{
		cout << s[i];
		reverse(s, i - 1);
	}
}
/*
Please enter a string:
Hello my name is John Hayes
seyaH
