#include <iostream>
using namespace std;
int main()

{
	int num1, num2, num3, num4, num5;
	double Average;

	
		cout << "This program will take 5 integers and calculate the average." << endl;
		cout << "Enter the first integer ";
		cin >> num1;
		cout << "Enter the second integer ";
		cin >> num2;
		cout << "Enter the third integer ";
		cin >> num3;
		cout << "Enter the fourth integer ";
		cin >> num4;
		cout << "Enter the fifth interger ";
		cin >> num5;

		Average = (num1 + num2 + num3 + num4 + num5) / 5.0;
		cout << "The average is: " << Average << endl;
		return 0;
}
