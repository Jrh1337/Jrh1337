#include <iostream>
using namespace std;
int main()

{
	int num1, num2, num3, sum, quot;
	cout << "Enter 3 integers" << endl;
	cin >> num1 >> num2 >> num3;
	if (num3 != 0)
	{
		sum = num1 + num2;
		quot = sum / num3;
		cout << num1 << "+" << num2 << "/" << num3 << "==" << quot << endl;

	}
	else
	{

		cout << "Unable to divide by zero" << endl;

	}

	return 0;
}
