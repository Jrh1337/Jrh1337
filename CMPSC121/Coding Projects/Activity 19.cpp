//Activity 19 
//Purpose: This program uses two overloaded functions to calculate area of a triangle using two different methods.
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

double triangleArea(double, double); //Function to calculate area using Base and Height of a triangle.
double triangleArea(double, double, double); //Function to calculate area using 3 sides of a triangle.
bool randNum(); //Function to return a true or false based on if random number generated is even or odd.

int main()
{
	unsigned seed = time(0); //seeds the random function to time for true randomness.
	srand(seed);

	bool OK;
	char reply;
	double base, height, S1, S2, S3, area;

	cout << setprecision(3) << fixed;

	do
	{
		OK = randNum(); //generates random number and returns true if even 
		if (OK) //Calculates using base height formula if bool returns true, else calculates using 3 sides formula.
		{
			cout << "Enter base and height of a triangle.\n";
			cin >> base >> height;
			area = triangleArea(base, height); 
			cout << "The area is " << area << endl;
		}
		else
		{
			cout << "Enter the lengths of the sides of a triangle\n";
			cin >> S1 >> S2 >> S3;
			area = triangleArea(S1, S2, S3);
			cout << "The area is " << area << endl;
		}
		cout << "Run again? Y or N?\n";
		cin >> reply;

	} while (toupper(reply) == 'Y'); //Loop exits if user replies with anything other than y or Y.

	return 0;

}
bool randNum()
{
	
	int num = (rand() % 2);
	if (num)
	{
		return true;
	}
	else
	{
		return false;
	}
}
double triangleArea(double base, double height)
{
	return ((base * height) / 2.0);
}
double triangleArea(double A, double B, double C)
{
	double S = (A + B + C) / 2.0;
	double area = sqrt(S * (S-A) * (S-B) * (S-C));
	return area;
}
/*
Enter base and height of a triangle.
24 18
The area is 216.000
Run again? Y or N?
y
Enter base and height of a triangle.
32 12
The area is 192.000
Run again? Y or N?
y
Enter base and height of a triangle.
12 12
The area is 72.000
Run again? Y or N?
y
Enter base and height of a triangle.
13 20
The area is 130.000
Run again? Y or N?
y
Enter the lengths of the sides of a triangle
20 28 34
The area is 279.912
Run again? Y or N?
n
*/
