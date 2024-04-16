//Author:   John Hayes
//Class:    CMPSC 121
//Activity 24
//Purpose: This program fills 2 vectors with 500 random numbers (1-100) then displays how many even pairs of numbers between the sets.
//Sources of logic assistance: None
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

const int SIZE = 500; //size of both vectors

void randNum(vector<int> &, vector<int> &); //Populates each vector in main with 500 random numbers by reference.
int evenNums(vector<int>, vector<int>); //returns number of even pairs.

int main()
{
	unsigned seed = time(0);
	srand(seed);
	vector<int> V1(SIZE);
	vector<int> V2(SIZE);

	randNum(V1, V2);

	cout << "The Vectors contain " << evenNums(V1, V2) << " cells where both values are even.\n";

	return 0;
}
void randNum(vector<int> &V1, vector<int> &V2)
{

	for (int i = 0; i < V1.size(); i++)
	{
		V1[i] = rand() % 100 + 1;
		V2[i] = rand() % 100 + 1;
	}

}
int evenNums(vector<int> V1, vector<int> V2)
{
	int evenTotal = 0;

	for (int i = 0; i < V1.size(); i++)
	{
		if (V1[i] % 2 == 0 && V2[i] % 2 == 0)
			evenTotal++;
	}

	return evenTotal;
}


/*
The Vectors contain 130 cells where both values are even.
	*/
