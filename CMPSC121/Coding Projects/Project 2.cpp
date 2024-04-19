//Project 2
//Purpose: This program takes an input file of invoices and reorganizes them into a formated output file.
//Sources of logic assistance: None
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

double calcCost(int, double);
double accTotal(double, double);
void printLine(string, string, int, double, double);
void printInvoiceHeader(string);
void printReportHeader();
void printTotal(double);

ofstream fout;

int main()
{
	int items, quantity;
	double totalCost, unitPrice, invoiceCost = 0, unitCost;
	string date, name, item;

	ifstream invoiceReport;
	invoiceReport.open("C:\\Users\\John\\Desktop\\Hayes Documentation\\Classes\\College\\CMPSC 121\\cmpsc121\\Projects\\Project2\\Project2\\input.txt"); //opens file, change path as necessary
	fout.open("C:\\Users\\John\\Desktop\\Hayes Documentation\\Classes\\College\\CMPSC 121\\cmpsc121\\Projects\\Project2\\Project2\\output.txt"); //output file path, open in notepad.
	if (invoiceReport.fail() || fout.fail())
	{
		cout << "Unable to open file!\n";
	}
	else
	{
		printReportHeader();

		while (invoiceReport >> items >> date)
		{
			totalCost = 0;
			printInvoiceHeader(date);

			for (int i = 0; i < items; i++) //iterates once per line of items
			{
				invoiceReport >> item >> name >> quantity >> unitPrice;
				totalCost = calcCost(quantity, unitPrice);
				invoiceCost = accTotal(invoiceCost, totalCost);
				printLine(item, name, quantity, unitPrice, totalCost);
			}
			printTotal(invoiceCost);
			invoiceCost = 0; //Resets invoice cost before reading another line of input.
		}
		invoiceReport.close(); //closes input file
		fout.close(); //closes output file
	}
  return 0;
}
double calcCost(int quantity, double unitcost) //calculates cost of items by line
{
	return quantity * unitcost;
}
double accTotal(double totalCost, double itemCost) //keep running total of the total invoice cost
{
	return totalCost += itemCost;
}
void printLine(string itemno, string name, int quantity, double unitCost, double totalCost) //Prints to output file.
{
	fout << setprecision(2) << fixed;
	fout << setw(10) << right << itemno 
		<< setw(15) << right << name 
		<< setw(10) << right << quantity 
		<< setw(10)<< right << unitCost 
		<< setw(10) << right << totalCost << endl;
}
void printReportHeader() //Prints company name at top of invoice report
{
	fout << "\tErie Industrial Supply Corporation\n";
}
void printInvoiceHeader(string date) //Adds currrent date to each group of transactions
{
	fout << "Invoice Date: " + date << endl << endl;
}
void printTotal(double invoiceTotal) //Prints total of each seperate invoice.
{
	fout << "Total     ................................. " << invoiceTotal << endl << endl << endl;
}
/*
	Erie Industrial Supply Corporation
Invoice Date: 2/12/2017

	134276       Framis-R         8      7.35     58.80
	125790       Framis-L        12     15.76    189.12
	100086          Aglet       395      0.11     43.45
Total     ................................. 291.37


Invoice Date: 1/23/2017

	135876         Wrench        12     22.50    270.00
	543287         Henway         4     19.25     77.00
Total     ................................. 347.00


Invoice Date: 1/15/2017

	161432         Widget         5      6.50     32.50
	543289         Wodget        10      2.25     22.50
	876234         Gadget         2     10.75     21.50
Total     ................................. 76.50


Invoice Date: 2/16/2017

	198765         Corkle         2     12.18     24.36
	107654          Swale         3      8.75     26.25
	987987         Sinter         5      6.43     32.15
	654821         Zangle         6     18.45    110.70
	432165         Lunule         7      9.60     67.20
	333221         Fangle        10     58.49    584.90
	654098      Fwetstock         3     12.65     37.95
	543210         Furnal         3      9.98     29.94
	543287         Bobble        12     19.25    231.00
Total     ................................. 1144.45


Invoice Date: 2/26/2017

	654821         Muntin         2     18.45     36.90
	766443      Finwiddie         9      2.22     19.98
	120980         Ferkle       100      0.12     12.00
	123222     Sneedooper       700      1.19    833.00
	876543        Ferrule         2    345.77    691.54
	877721      Uberfrock        14     88.93   1245.02
Total     ................................. 2838.44
*/
