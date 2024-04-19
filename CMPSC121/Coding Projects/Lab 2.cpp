#include <iostream>
using namespace std;
int main()
{
	int num1, sum = 0, firstDigit, secondDigit, thirdDigit, fourthDigit;

	cout << "Please enter a four digit number: ";
	cin >> num1;
	firstDigit = (num1 / 1000);
	secondDigit = (num1 % 1000) / 100;
	thirdDigit = (num1 % 100) / 10;
	fourthDigit = num1 % 10;
	sum = firstDigit + secondDigit + thirdDigit + fourthDigit;
	cout << "Sum of the digits: " << firstDigit << "+" << secondDigit << "+" << thirdDigit << "+" << fourthDigit << "=" << sum << endl;

	firstDigit = (sum / 1000);
	secondDigit = (sum % 1000) / 100;
	thirdDigit = (sum % 100) / 10;
	fourthDigit = sum % 10;
	sum = firstDigit + secondDigit + thirdDigit + fourthDigit;
	cout << "Sum of the digits of the sum: " << firstDigit << "+" << secondDigit << "+" << thirdDigit << "+" << fourthDigit << "=" << sum << endl;

	firstDigit = (sum / 1000);
	secondDigit = (sum % 1000) / 100;
	thirdDigit = (sum % 100) / 10;
	fourthDigit = sum % 10;
	sum = firstDigit + secondDigit + thirdDigit + fourthDigit;
	cout << "Sum of the digits of the sum of the digits: " << firstDigit << "+" << secondDigit << "+" << thirdDigit << "+" << fourthDigit << "=" << sum << endl;

	return 0;

	/*Please enter a four digit number: 5789
Sum of the digits: 5+7+8+9=29
Sum of the digits of the sum: 0+0+2+9=11
Sum of the digits of the sum of the digits: 0+0+1+1=2

C:\Users\John\Desktop\Hayes Documentation\Classes\College\CMPSC 121\cmpsc121\experiments\experiment02-1\experiment02-1\Debug\experiment02-1.exe (process 22160) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .*/

}
