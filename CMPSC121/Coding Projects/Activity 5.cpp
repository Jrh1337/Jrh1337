#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double purchasePrice, commissionRate, commissionBuy, commissionSale, numberofShares, costperShare, salePrice, costofStock, totalpurchaseCost, totalsaleCost, saleRevenue, totalProfit;

	cout << "Enter number of shares purchased, purchase price of the stock, the" << endl;
	cout << "commission rate and saleprice" << endl;
	cin >> numberofShares >> purchasePrice >> commissionRate >> salePrice;

	//All Calculations
	costofStock = numberofShares * purchasePrice; // Cost of the stock before commission is factored
	commissionBuy = commissionRate * costofStock; // Amount of commission generated from the transaction
	totalpurchaseCost = commissionBuy + costofStock; // Cost including commission

	saleRevenue = numberofShares * salePrice; // Total revenue when stock is sold before commission
	commissionSale = saleRevenue * commissionRate; // Amount of commission generated from transaction
	totalsaleCost = saleRevenue - commissionSale; // Total amount including commission

	totalProfit = totalsaleCost - totalpurchaseCost; // Total gain or loss

	//Display Transaction
	cout << endl;
	cout << setprecision(2) << fixed;
	cout << "       ****** TRANSACTION DETAILS ******" << endl;
	cout << setw(35) << left << "Cost of stock before commission:" << "$" << setw(10) << right << costofStock << endl;
	cout << setw(35) << left << "Commission on purchase:" << "$" << setw(10) << right << commissionBuy << endl;
	cout << setw(35) << left << "Total cost of purchase:" << "$" << setw(10) << right << totalpurchaseCost << endl;
	cout << endl;

	cout << setw(35) << left << "Sale revenue before commission:" << "$" << setw(10) << right << saleRevenue << endl;
	cout << setw(35) << left << "Commission on sale:" << "$" << setw(10) << right << commissionSale << endl;
	cout << setw(35) << left << "Total cost of sale:" << "$" << setw(10) << right << totalsaleCost << endl;
	cout << endl;

	cout << setw(35) << left << "Profit or loss on sale:" << "$" << setw(10) << right << totalProfit << endl;


	return 0;

}
