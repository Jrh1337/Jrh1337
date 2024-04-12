#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double C1, C2, C3, C4, C5, F1, F2, F3, F4, F5;	//C - output Celsius values F- Five different input Fahrenheit values
	string FstringValue = "Fahrenheit", CstringValue = "Celsius"; //Used strings for setw spacing to work in columns

		cout << "Enter five temperature values in Fahrenheit:" << endl; //Accepts inputs of each Fahrenheit value and stores it in 5 individual Celsius variables
		cin >> F1 >> F2 >> F3 >> F4 >> F5;
		C1 = (5.0 / 9) * (F1 - 32.0);
		C2 = (5.0 / 9) * (F2 - 32.0);
		C3 = (5.0 / 9) * (F3 - 32.0);
		C4 = (5.0 / 9) * (F4 - 32.0);
		C5 = (5.0 / 9) * (F5 - 32.0);

		//Displays conversion results in organized columns

		cout << endl;
		cout << setprecision(2) << fixed;
		cout << setw(20) << FstringValue << setw(20) << CstringValue << endl;
		cout << setw(20) << F1 << setw(20) << C1 << endl;
		cout << setw(20) << F2 << setw(20) << C2 << endl;
		cout << setw(20) << F3 << setw(20) << C3 << endl;
		cout << setw(20) << F4 << setw(20) << C4 << endl;
		cout << setw(20) << F5 << setw(20) << C5 << endl;

		return 0;
