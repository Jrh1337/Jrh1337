//Activity 13 
//Purpose: This program tosses a coin until heads 10 times.  The number of total coin flips conducted is what power 2 is raised to determine payout.
#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

double payOutCalc(int); //function prototype for payout calculator

int main()
{
	unsigned seed = time(0); 
	int coinToss, count;
	double payOut, totalpayOut = 0, avgpayOut;

	srand(seed);
	cout << setprecision(2) << fixed;

	for (count = 1; count <= 10; count++) //Cycles through ten iterations of coin tosses until Heads is tossed, first cycle completes everytime their is heads.
	{
		coinToss = (rand() % 2); //First coin toss, 1 is heads and 0 is tails
		payOut = payOutCalc(coinToss); //first result of the cointoss is sent into payout function to continue
		cout << "You win " << "$" << payOut << endl;
		totalpayOut += payOut; //Adds each payout iteration into a total for calculating the average later
	}
	avgpayOut = totalpayOut / count;
	cout << endl;
	cout << "The average payout was " << "$" << avgpayOut;

	return 0;
}

double payOutCalc(int coinToss) //This function takes in the result of the first cointoss, repeats coin toss if not heads and determines payout based on total number of coin tosses. 
{
	double payOut, n = 1;
	string result;

	do 
	{
		if (coinToss) //if coinToss = 1 this executes for Heads  
		{
			result = "H";
			cout << result << "\t\t";
		}
		else //if Tails, increases value of n by 1 and conducts a new coin toss 
		{
			result = 'T';
			cout << result;
			n++;
			coinToss = (rand() % 2);
		} 

	}while (result != "H"); //Loop terminates once Heads is tossed, moves on to calculate pay out
	
	payOut = pow(2.0, n); //n is total number of times coin was tossed
	return payOut;
}


/*
TH              You win $4.00
H               You win $2.00
TTTH            You win $16.00
H               You win $2.00
TTH             You win $8.00
TTH             You win $8.00
H               You win $2.00
TTH             You win $8.00
TH              You win $4.00
H               You win $2.00

The average payout was $5.09
*/
