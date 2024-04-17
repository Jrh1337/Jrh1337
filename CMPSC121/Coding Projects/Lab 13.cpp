//Lab 13
//Purpose: This program generates a random number of votes for each candidate and then outputs the percent of vote each candidate recieved and declares a winner.
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int CAPACITY = 25;

bool readFile(string c[], int &size); //returns false if file fails to open.  Reads each candidate from a text file into an array.
void getVotes(int v[], int size); //generates a random number of votes between 1500 and 25000 and stores it into an array
void calcPercents(int v[], double p[], int size); //calculates total number of votes then finds percentage of votes of each candidate.
void displayResults(string c[], int v[], double p[], int size); //Displays the results by iterating through each array.  Finds highest # of votes out of the individual candidates to identify the winner.

int main()
{
	unsigned seed = time(0);
	srand(seed);
	int size;
	
	string candidates[CAPACITY];
	int votes[CAPACITY];
	double percents[CAPACITY];

	

	if (readFile(candidates, size) == false) //Error message if file fails to open.
	{
		cout << "Error!" << endl;
	}
	
	getVotes(votes, size);
	calcPercents(votes, percents, size);
	displayResults(candidates, votes, percents, size);

	return 0;
}
bool readFile(string c[], int& size)
{
	ifstream inputFile;
	inputFile.open("C:\\Users\\John\\Desktop\\Hayes Documentation\\Classes\\College\\CMPSC 121\\cmpsc121\\Labs\\Lab13\\Lab 13\\candidates.txt"); //Change file input path as needed
	if (inputFile.fail())
	{
		return false;
	}

	int i = 0;
	string candidate;

	while (inputFile >> c[i]) //reads each line and stores it into candidate array.  Loop ends at end of file.
	{
		i++;
	}

	inputFile.close();
	size = i;
	return true;
}
void getVotes(int v[], int size)
{
	for (int i = 0; i < size; i++) //iterates through vote array and stores a random number in each element
	{
		v[i] = rand() % 23501 + 1500;
	}
}
void calcPercents(int v[], double p[], int size)
{
	int totalVotes = 0;

	for (int i = 0; i < size; i++) //iterates through votes array to sum up total number of votes
	{
		totalVotes += v[i]; 
	}
	for (int i = 0; i < size; i++) //iterates through votes array to store percentage of votes for each candidate in percent array.
	{
		p[i] = (v[i] / static_cast<double>(totalVotes)) * 100;
	}
}
void displayResults(string c[], int v[], double p[], int size)
{
	int highest;
	highest = v[0];
	int h = 0;

	cout << setprecision(1) << fixed;
	cout << "Candidate" << "\t" << "Votes" << "\t" << "Percent\n";

	for (int i = 0; i < size; i++) //iterates through all array to output results
	{
		cout << setw(15) << left << c[i] << setw(6) << right << v[i] << setw(9) << right << p[i] << "%\n";
	}

	cout << endl;

	for (int i = 1; i < size; i++) //calculates highest votes in array.  stores element index of highest in new variable for output of string.
	{
		if (v[i] > highest)
		{
			highest = v[i];
			h = i;
		}
	}
	cout << "The winner is " << c[h] << " with " << highest << " total votes!\n";
}

/*
Candidate       Votes   Percent
Rubio           10031      4.0%
Bush             9486      3.7%
Christie         7248      2.9%
Paul             9554      3.8%
O'Malley         3224      1.3%
Cruz            17812      7.0%
Clinton         14531      5.7%
Trump           10598      4.2%
Kasich           7004      2.8%
Sanders         24099      9.5%
Carson          24315      9.6%
Gilmore         13855      5.5%
Fiorina         17435      6.9%
Santorum        16031      6.3%
Huckabee        10700      4.2%
Graham          24902      9.8%
Jindal           9236      3.6%
Walker          10509      4.1%
Perry           12927      5.1%

The winner is Graham with 24902 total votes!
*/
