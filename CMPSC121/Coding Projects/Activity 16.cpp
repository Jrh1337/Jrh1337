//Activity 16 
//Purpose: This program asks for user withdrawals and deposits and keeps record of the total balance.  Program doesn't allow user to overdraft there account.
#include <iostream>
#include <iomanip>
using namespace std;

double accountBalance(double); //holds a static value for the total balance from multiple user inputs

int main()
{
	double transaction = 0, balance = 0;
	char reply;

	cout << setprecision(2) << fixed;
	
	do //Loop gathers first transaction and exits if user replies with anything other than y or Y
	{
		cout << "Enter amount of transaction, positive for deposit, negative for withdrawal\n";
		cin >> transaction;

		balance = accountBalance(transaction); //Function passes each transaction as an argument and returns the total balance after each iteration.

		cout << "Current balance = " << balance << endl;
		cout << "Do you have more transactions? Y or N?\n";
		cin >> reply;

	} while (toupper(reply) == 'Y');

	cout << "Final balance = " << balance;

	return 0;
}

double accountBalance(double transaction)
{
	static double balance;

	if (transaction <= 0) //In the case of a withdrawal
	{
		balance += transaction; 
		if (balance < 0) //If user attempts to overdraft from there account this if statement will execute if balance goes below zero.
		{
			balance -= transaction; //This statement returns the balance to the value it was before being overdrafted.
			cout << "Impermissible withdrawal, insufficient funds!\n";
			return balance;
		}
		else //Withdrawal that doesn't result in an overdraft
		{
			return balance;
		}

	}
	else if (transaction > 0) //Executes for a deposit
	{
		balance += transaction;	
		return balance;
	}
}

/*
Enter amount of transaction, positive for deposit, negative for withdrawal
90
Current balance = 90.00
Do you have more transactions? Y or N?
y
Enter amount of transaction, positive for deposit, negative for withdrawal
-90
Current balance = 0.00
Do you have more transactions? Y or N?
y
Enter amount of transaction, positive for deposit, negative for withdrawal
45
Current balance = 45.00
Do you have more transactions? Y or N?
y
Enter amount of transaction, positive for deposit, negative for withdrawal
60
Current balance = 105.00
Do you have more transactions? Y or N?
y
Enter amount of transaction, positive for deposit, negative for withdrawal
-120
Impermissible withdrawal, insufficient funds!
Current balance = 105.00
Do you have more transactions? Y or N?
y
Enter amount of transaction, positive for deposit, negative for withdrawal
300
Current balance = 405.00
Do you have more transactions? Y or N?
y
Enter amount of transaction, positive for deposit, negative for withdrawal
-150
Current balance = 255.00
Do you have more transactions? Y or N?
n
Final balance = 255.00
*/


/* Works if first input is overdraft 
Enter amount of transaction, positive for deposit, negative for withdrawal
-30
Impermissible withdrawal, insufficient funds!
Current balance = 0.00
Do you have more transactions? Y or N?
*/
