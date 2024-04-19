//Lab 08
//Purpose: This program runs a simulation of Casey stepping up to bat 1000 times and calculates the results of each new occurance based on the past performance data.
//Sources of logic assistance: None
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int const TIMES_AT_BAT = 1000;

double randomNumberGenerator();
double convertPercentage(int);
void displayResults(double, double, double, double, double, double, double);

int main()
{
	int i, out, walk, singlerun, doublerun, triplerun, homerun, hits;
	char reply;
	double randomNumber, batavg, outP, walkP, singleP, doubleP, tripleP, homerunP;

	unsigned seed = time(0);
	srand(seed);

	do 
	{
		out = 0; //resets counters at begining and before running another simulation
		walk = 0;
		singlerun = 0;
		doublerun = 0;
		triplerun = 0;
		homerun = 0;
		hits = 0;

		cout << "Simulation of the mighty Casey at-bat 1000 times: \n\n";

		for (i = 0; i < TIMES_AT_BAT; i++) //loop will execute however many times constant is set to.  Currently 1000.
		{
			randomNumber = randomNumberGenerator();
			if (randomNumber >= 0.0 && randomNumber <= 58.0) //Out range 0-58 represents 58%
			{
				out++;
			}
			else if (randomNumber > 58.0 && randomNumber <= 67.7) //Walk range is 58 - 67.7 represents 9.7%
			{
				walk++;
			}
			else if (randomNumber > 67.7 && randomNumber <= 89.7) //Single range is 67.7 - 89.7% represents 22%
			{
				singlerun++;
				hits++;
			}
			else if (randomNumber > 89.7 && randomNumber <= 95.8) // Double range is 89.7 - 95.8 represents 6.1%
			{
				doublerun++;
				hits++;
			}
			else if (randomNumber > 95.8 && randomNumber <= 98.3) //Triple range is 95.8 - 98.3 represents 2.5%
			{
				triplerun++;
				hits++;
			}
			else //Any number generated that is not in the range 0-98.3 out of 100 will be a home run, represents 1.7%.
			{
				homerun++;
				hits++;
			}
		}

		batavg = hits / (TIMES_AT_BAT - static_cast<double> (walk)); //calculates the batting average, hits exclude walks and outs

		outP = convertPercentage(out);	//function converts all counters into a percentage value
		walkP = convertPercentage(walk);
		singleP = convertPercentage(singlerun);
		doubleP = convertPercentage(doublerun);
		tripleP = convertPercentage(triplerun);
		homerunP = convertPercentage(homerun);

		displayResults(outP, walkP, singleP, doubleP, tripleP, homerunP, batavg);

		cout << "Would you like to run another simulation? (Y/N)? ";
		cin >> reply;
		
	} while (toupper(reply) == 'Y'); //This loop exits based on if user replies with anything other than y or Y.

	cout << "\n\nThanks for playing!";

	return 0;
}

double randomNumberGenerator() //Generates a random number from 0.0 to 100.0 to input into the for loop.
{
	double randomNumber = rand() / (float)RAND_MAX * 99.9 + 0.1;
	return randomNumber;
}

double convertPercentage(int input) //coverts each occurance into a percentage before final output report
{
	double result = input / (TIMES_AT_BAT / 100.0);
	return result;
}

void displayResults(double outP, double walkP, double singleP, double doubleP, double tripleP, double homerunP, double batavg)  //Displays final output
{
	cout << setprecision(1) << fixed;
	cout << setw(10) << right << "Out:" << setw(10) << outP << "%" << endl;
	cout << setw(10) << right << "Walk:" << setw(10) << walkP << "%" << endl;
	cout << setw(10) << right << "Single:" << setw(10) << singleP << "%" << endl;
	cout << setw(10) << right << "Double:" << setw(10) << doubleP << "%" << endl;
	cout << setw(10) << right << "Triple:" << setw(10) << tripleP << "%" << endl;
	cout << setw(10) << right << "Home Run:" << setw(10) << homerunP << "%" << endl;
	cout << endl;
	cout << "Casey's batting average was: " << setprecision(3) << fixed << batavg << endl;
	cout << endl;
}

/*
Simulation of the mighty Casey at-bat 1000 times:

	  Out:      58.7%
	 Walk:      10.6%
   Single:      21.2%
   Double:       5.7%
   Triple:       2.0%
 Home Run:       1.8%

Casey's batting average was: 0.343

Would you like to run another simulation? (Y/N)? y
Simulation of the mighty Casey at-bat 1000 times:

	  Out:      57.7%
	 Walk:      10.3%
   Single:      22.3%
   Double:       5.6%
   Triple:       2.6%
 Home Run:       1.5%

Casey's batting average was: 0.357

Would you like to run another simulation? (Y/N)? y
Simulation of the mighty Casey at-bat 1000 times:

	  Out:      60.1%
	 Walk:       9.3%
   Single:      20.5%
   Double:       6.1%
   Triple:       1.9%
 Home Run:       2.1%

Casey's batting average was: 0.337

Would you like to run another simulation? (Y/N)? n


Thanks for playing!
*/
