//Lab 12
//Purpose: This program passes lines from an input file into a structure then uses a function to accumulate total sales from the structure.
//Sources of logic assistance: None
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct SalesRecord
{
	string invoiceNum;
	char salesType = NULL;
	double salesCost = NULL;
};

void accumulate(const SalesRecord& s, double& capSales, double& eqpSales, double& prtSales);
void writeReport(double capSales, double eqpSales, double prtSales, double salesTotal, double capPercent, double eqpPercent, double prtPercent);

ofstream outputFile;

int main()
{
	SalesRecord s;
	double capSales = 0, capPercent = 0;
	double eqpSales = 0, eqpPercent = 0;
	double prtSales = 0, prtPercent = 0;
	double salesTotal = 0;

	ifstream salesReport;
	salesReport.open("C:\\Users\\John\\Desktop\\Hayes Documentation\\Classes\\College\\CMPSC 121\\cmpsc121\\Labs\\Lab12\\Lab 12\\sales.txt");
	outputFile.open("C:\\Users\\John\\Desktop\\Hayes Documentation\\Classes\\College\\CMPSC 121\\cmpsc121\\Labs\\Lab12\\Lab 12\\inventoryReport.txt");

	if (salesReport.fail() || outputFile.fail())
	{
		cout << "Unable to open file!\n";
	}
	
	while (salesReport >> s.invoiceNum >> s.salesType >> s.salesCost) //pass each element in the line to the structure.  Loop ends after all lines are passed.
	{
		accumulate(s, capSales, eqpSales, prtSales); //Passes structure and 3 doubles to accumulate total sales of each quantity.
		salesTotal += s.salesCost;
	}

	
	capPercent = (capSales / salesTotal) * 100; //Calculates final percentages for each quantity before final report.
	eqpPercent = (eqpSales / salesTotal) * 100;
	prtPercent = (prtSales / salesTotal) * 100;

	writeReport(capSales, eqpSales, prtSales, salesTotal, capPercent, eqpPercent, prtPercent);

	salesReport.close();
	outputFile.close();

	return 0;
}
void accumulate(const SalesRecord& s, double& capSales, double& eqpSales, double& prtSales) //identifies the sales type in the structure and changes the total by type back in main.
{
	
	if (s.salesType == 'A')
	{
		capSales += s.salesCost;
	}
	else if (s.salesType == 'B')
	{
		eqpSales += s.salesCost;
	}
	else if (s.salesType == 'C')
	{
		prtSales += s.salesCost;
	}
}
void writeReport(double capSales, double eqpSales, double prtSales, double salesTotal, double capPercent, double eqpPercent, double prtPercent) 
{
	outputFile << setprecision(2) << fixed;

	outputFile << "\t\t" << " S A L E S  R E P O R T\n"
		<< "Capital Equipment" << setw(24) << right << "$" << capSales << "\t" << capPercent << "%\n"
		<< "Expensed Equipment" << setw(23) << right << "$" << eqpSales << "\t" << eqpPercent << "%\n"
		<< "Small Parts" << setw(30) << right << "$" << prtSales << "\t" << prtPercent << "%\n"
		<< setw(50) << right << "---------\n"
		<< "Total Sales" << setw(30) << right << "$" << salesTotal;

}
/*
		 S A L E S  R E P O R T
Capital Equipment                       $24093.18	26.31%
Expensed Equipment                      $22222.80	24.27%
Small Parts                             $45251.98	49.42%
										---------
Total Sales                             $91567.96
*/
