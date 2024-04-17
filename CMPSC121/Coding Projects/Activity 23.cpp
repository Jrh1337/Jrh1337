//Activity 23
//Purpose: This menu driven program derives information from or manipulates elements within an array based on user response.
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int SIZE = 10;

void square(const int[], int size); //Squares each number in the array bu multiplying it by itself,  This function doesn't change the elements in the array. 
void addRandom(int[], int size); //Adds a random number from 0 to 10 to each element in the array.  This will permenantly change the contents of the array.
void addtoarray(int[], int size); //Adds each number following each element in the array to the previous element.  Peremenatly changes as well.
void calcSum(int[], int size); //Calculates the sum of all elements in the array.  Doesn't change the array.
void largestNum(int[], int size); //Finds largest number in the array.  Doesn't change array.

int main()
{
	int nums[SIZE] = { 5, 4, 2, 7, 6, 8, 5, 2, 8, 14 };
	int reply;
	srand(time(0));


	do
	{
		cout << "Press 1. to square each number in the Array\n";
		cout << "Press 2. to add a random number between zero and 10 to each number in the array\n";
		cout << "Press 3. to add to each number in the array the number that follows after it\n";
		cout << "Press 4. to Calculate the sum of all numbers in the array\n";
		cout << "Press 5. to display the largest number in the array\n";
		cout << "Press 6. to exit\n";

		cin >> reply;
		cout << endl;

		switch (reply) //Switch executes appropriate function based on user reply
		{
		case 1:
			square(nums, SIZE);
			break;
		case 2:
			addRandom(nums, SIZE);
			break;
		case 3:
			addtoarray(nums, SIZE);
			break;

		case 4:
			calcSum(nums, SIZE);
			break;
		case 5:
			largestNum(nums, SIZE);
			break;
		case 6: 
			cout << "Exiting Program.\n";
			break;
		default:
			cout << "Invalid response!\n";
		}
	} while (reply != 6); //Loop ends once user enters 6.
	
	
	return 0;

}

void square(const int nums[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << nums[i] * nums[i] << endl;
	}
}
void addRandom(int nums[], int size)
{
	for (int i = 0; i < size; i++)
	{
		nums[i] += rand() % 11;
		cout << nums[i] << endl;
	}
}
void addtoarray(int nums[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		nums[i] += nums[i + 1];
		cout << nums[i] << endl;
	}
}
void calcSum(int nums[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += nums[i];
	}
	cout << "The sum is: " << sum << endl;
}
void largestNum(int nums[], int size)
{
	int highest;
	highest = nums[0];
	for (int i = 1; i < size; i++)
	{
		if (nums[i] > highest)
			highest = nums[i];
	}
	cout << highest << endl;
}
/* I experimented a bit with changing the array and then finding the highest number in the new array.
Press 1. to square each number in the Array
Press 2. to add a random number between zero and 10 to each number in the array
Press 3. to add to each number in the array the number that follows after it
Press 4. to Calculate the sum of all numbers in the array
Press 5. to display the largest number in the array
Press 6. to exit
1

25
16
4
49
36
64
25
4
64
196
Press 1. to square each number in the Array
Press 2. to add a random number between zero and 10 to each number in the array
Press 3. to add to each number in the array the number that follows after it
Press 4. to Calculate the sum of all numbers in the array
Press 5. to display the largest number in the array
Press 6. to exit
2

14
11
12
15
7
15
11
3
16
17
Press 1. to square each number in the Array
Press 2. to add a random number between zero and 10 to each number in the array
Press 3. to add to each number in the array the number that follows after it
Press 4. to Calculate the sum of all numbers in the array
Press 5. to display the largest number in the array
Press 6. to exit
5

17
*/
