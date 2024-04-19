//Lab 06
//Purpose: This program accepts multiple user inputs of sales transactions and calculates the number of total transactions, number of units sold, average units per order,
// largest transaction, smallest transaction, total revenue and average revenue.
//Sources of logic assistance: None
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int END_TRANS = -99, 
			  END_PRICE = 0;
	int numTransactions = 1, 
		sumTransactions = 0, 
		unitsSold = 0, 
		count = 1;
	double price = 0.0, 
		   largestTrans = 0.0, 
		   smallestTrans = 0.0, 
		   totalRevenue = 0.0, 
		   avgRevenue = 0.0, 
		   avgUnits = 0.0, 
		   totalTrans = 0.0;
	

	cout << "Enter transactions -99 0 to stop\n"; //This sets up the first transaction and count that will follow in the loop.  
	cout << setprecision(2) << fixed;
	cout << "Transaction # " << count << ": ";
	cin >> numTransactions >> price;
	totalTrans = numTransactions * price;
	largestTrans = smallestTrans = totalTrans; //Sets largest and smallest transactions to value of total before starting loop.

	while (numTransactions != END_TRANS || price != END_PRICE) //Loop will exit once user inputs -99 0
	{
		totalRevenue += totalTrans;
		
		if (totalTrans > largestTrans) //Determines if the current total transaction cost is the largest or smallest so far and stores in appropriate variable.
		{
			largestTrans = totalTrans;
		}
		if (totalTrans < smallestTrans)
		{
			smallestTrans = totalTrans;
		}
		
		sumTransactions = count; //Tracks number of transactions processed
		unitsSold += numTransactions;
		avgUnits = static_cast<double> (unitsSold) / sumTransactions; //Calculates average units per order, units sold cast as a double for accuracy.
		avgRevenue = totalRevenue / sumTransactions;
		count++; //increases transaction count by 1 before next user input.

		cout << "Transaction # " << count << ": ";
		cin >> numTransactions >> price;
		totalTrans = numTransactions * price;
	}

	cout << "TRANSACTION PROCESSING REPORT\n";
	cout << "\t" << setw(30) << left << "Transactions processed:" << setw(5) << right << sumTransactions << endl;
	cout << "\t" << setw(30) << left << "Units Sold:" << setw(5) << right << unitsSold << endl;
	cout << "\t" << setw(30) << left << "Average Units per order:" << setw(5) << right << avgUnits << endl;
	cout << "\t" << setw(25) << left << "Largest Transaction:" << "$" << setw(9) << right << largestTrans << endl;
	cout << "\t" << setw(25) << left << "Smallest Transaction:" << "$" << setw(9) << right << smallestTrans << endl;
	cout << "\t" << setw(25) << left << "Total Revenue" << "$" << setw(9) << right << totalRevenue << endl;
	cout << "\t" << setw(25) << left << "Average Revenue:" << "$" << setw(9) << right << avgRevenue << endl;

	return 0;

}
/*
Enter transactions -99 0 to stop
Transaction # 1: 30 9.75
Transaction # 2: 22 8.50
Transaction # 3: 15 7.95
Transaction # 4: 12 9.00
Transaction # 5: 16 8.55
Transaction # 6: 36 7.99
Transaction # 7: 100 10.75
Transaction # 8: 43 9.99
Transaction # 9: 14 6.95
Transaction # 10: 13 8.98
Transaction # 11: -99 0
TRANSACTION PROCESSING REPORT
		Transactions processed:          10
		Units Sold:                     301
		Average Units per order:      30.10
		Largest Transaction:     $  1075.00
		Smallest Transaction:    $    97.30
		Total Revenue            $  2849.80
		Average Revenue:         $   284.98
		*/

