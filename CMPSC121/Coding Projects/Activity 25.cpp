//Activity 25
//Purpose: This program generates a 5000 random numbers in a vector and sorts them then displays information about the elements in the vector.
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 5000; //Can change number of integers you want to generate within the vector to anything

void randGenerator(vector<int>& V);					//Generates random integers and stores in vector in main
void shellSort(vector<int>& V);						//Sorts Vector elements in numerical order
void swapper(int& a, int& b);						//Works with sort function to swap vector elements in order
int displaySmall(const vector<int>& V);				//Displays smallest element in vector
int displayLarge(const vector<int>& V);				//Disdplays largest element in vector
int findOdd(const vector<int>& V);					//Displays number of odd elements
int findEven(const vector<int>& V);					//Displays number of even elements
int total(const vector<int>& V);					//Adds all elements together for total
double avg(const vector<int>& V, int total);		//Divides total of all elements by number of elements in the vector for average
int binary_search(const vector <int>& V, int key);	//User inputs an integer and function displays which cell interger is in if integer exits in the vector

int main()
{
	unsigned seed = time(0);
	srand(seed);

	vector<int> V(SIZE);
	int reply, finder = 0;

	randGenerator(V);
	shellSort(V);

	cout << "The smallest number is " << displaySmall(V) << endl;
	cout << "The largest number is " << displayLarge(V) << endl;
	cout << "The number of Evens is " << findEven(V) << endl;
	cout << "The number of Odds is " << findOdd(V) << endl;
	cout << "The total of the values is " << total(V) << endl;
	cout << "The average of the values is " << avg(V, total(V)) << endl;
	cout << "Enter an integer\n";
	cin >> reply;

	finder = binary_search(V, reply); //Cell number is stored in finder variable if integer exsists in vector
	if (finder == -1)
	{
		cout << "Not found\n";
	}
	else
	{
		cout << reply << " was found at position " << finder << endl;
	}

	return 0;
}
void randGenerator(vector<int>& V) //Function changes vector in main with random numbers as elements
{
	for (int i = 0; i < SIZE; i++)
	{
		V[i] = rand(); 
	}
}
int displaySmall(const vector<int>& V) //Smallest will be first element in vector because of sort function
{
	return V[0]; 
}
int displayLarge(const vector<int>& V) //Largest will be last element because of sort function
{
	return V[V.size() - 1];
}
int findOdd(const vector<int>& V) //Odd found by testing each element % 2 does not equal zero
{
	int odd = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (V[i] % 2 != 0)
		{
			odd++;
		}
	}
	return odd;
}
int findEven(const vector<int>& V) //Even found by testing each element % 2 does equal zero
{
	int even = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (V[i] % 2 == 0)
		{
			even++;
		}
	}
	return even;
}
int total(const vector<int>& V) //iterates through all vector elements to produce a total sum
{
	int total = 0;

	for (int i = 0; i < SIZE; i++)
	{
		total += V[i];
	}
	return total;
}
double avg(const vector<int>& V, int total) //Finds average value of each element of the vector
{
	return static_cast<double>(total) / (V.size() - 1);
}
int binary_search(const vector <int>& V, int key)  //Does a binary search of all vector elements for whatever integer user inputs.  Returns position if integer exists 
{
	bool found = false;
	int first, mid, last, return_val;
	first = 0;
	last = V.size() - 1;
	while ((first <= last) && (!found))
	{
		mid = (first + last) / 2;
		if (key == V[mid])
		{
			found = true;
		}
		else
		{
			if (key < V[mid])
			{
				last = mid - 1;
			}
			else
			{
				first = mid + 1;
			}
		}
	}
	if (found)
	{
		return_val = mid;
	}
	else
	{
		return_val = -1;
	}

	return return_val;
}
void shellSort(vector<int>& V)
{
	bool flag = true;
	int i, numLength = V.size();

	int d = numLength;
	while (flag || (d > 1))    // bool flag 
	{
		flag = false;  //reset flag to 0 to check for
		// future swaps      
		d = (d + 1) / 2;
		for (i = 0; i < (numLength - d); i++)
		{
			if (V[i + d] < V[i])
			{
				swapper(V[i], V[i + d]);

				flag = true;     //tells swap has occurred
			}
		}
	}
}
void swapper(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
/*
The smallest number is 5
The largest number is 32766
The number of Evens is 2478
The number of Odds is 2522
The total of the values is 81911506
The average of the values is 16385.6
Enter an integer
32766
32766 was found at position 4999
*/
