//Lab 11
//Purpose: This program reads an input file and then reformats it into a seperate output file in CSV format.
//Sources of logic assistance: None
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string fixName(string n);
string fixSSN(string ss);
string fixPhone(string ph);
string fixAddress(string addr);
string fixCity(string cty);
string fixState(string st);
string extractField(string& s);
void buildLine(string& s, string field);

int main()
{
	string name, s, SSN, phoneNum, address, city, state, zip, csv;
	ifstream nameFile;
	ofstream outputFile;
	nameFile.open("C:\\Users\\John\\Desktop\\Hayes Documentation\\Classes\\College\\CMPSC 121\\cmpsc121\\Labs\\Lab11\\Lab11\\badnames.txt"); //opens file, change path as necessary
	outputFile.open("C:\\Users\\John\\Desktop\\Hayes Documentation\\Classes\\College\\CMPSC 121\\cmpsc121\\Labs\\Lab11\\Lab11\\goodnames.csv"); //Output file is automatically created at path
	if (nameFile.fail())
	{
		cout << "Unable to open the file.";
		return -1;
	}
	else
	{
		while (getline(nameFile, s))
		{

			name = fixName(extractField(s)); //The argument being passed is the extracted string up until # is reached.  extractField will delete argument portion of string before executing next line. 
			SSN = fixSSN(extractField(s));
			phoneNum = fixPhone(extractField(s));
			address = fixAddress(extractField(s));
			city = fixCity(extractField(s));
			state = fixState(extractField(s));
			zip = extractField(s);

			buildLine(csv, name); //Adds comma to end of each field.  Uses csv as reference variable to modify in main.
			buildLine(csv, SSN);
			buildLine(csv, phoneNum);
			buildLine(csv, address);
			buildLine(csv, city);
			buildLine(csv, state);
			buildLine(csv, zip);


			outputFile << csv << endl; 
			csv.clear(); //This resets csv string each iteration to have nothing in it, otherwise string will keep growing.
		}
		nameFile.close();
		outputFile.close();

	}
	return 0;
}
string fixName(string n) //This gets passed the extracted first and last name as a string and uses the space inbetween to break up into seperate strings to capitilze reorder and combine.
{
	int pos = n.find(' ');
	string first = n.substr(0, pos);
	string last = n.substr(pos + 1);
	first[0] = toupper(first[0]);
	last[0] = toupper(last[0]);
	return last + ", " + first;
}
string fixSSN(string ss) //Reformats social as XXX-XX-XXXX
{
	return ss.substr(0, 3) + "-" + ss.substr(3, 2) + "-" + ss.substr(5);
}
string fixPhone(string ph) //Reformats and returns phone # as XXX-XXX-XXXX
{
	return ph.substr(0, 3) + "-" + ph.substr(3, 3) + "-" + ph.substr(6, 4);
}
string fixAddress(string addr) //iterates through each character in the string and capitalizes the letter after each space.  Loop iterates once per character and ends after last character. 
{
	for (int i = 0; i < addr.length(); i++)
	{
		if (i == 0 || addr[i - 1] == ' ')
		{
			addr[i] = toupper(addr[i]);
		}
	}
	return addr;
}
string fixCity(string cty) //Capitalizes first letter of the city then returns.
{
	cty[0] = toupper(cty[0]);
	return cty;
}
string fixState(string st) //Capitalizes state in format XX
{
	st[0] = toupper(st[0]);
	st[1] = toupper(st[1]);
	return st;
}
string extractField(string& s) //extracts string until first # is reached then deletes parsed string from main varaible.
{
	int pos = s.find('#');
	string temp = s.substr(0, pos);
	s.erase(0, pos + 1);
	return temp;
}
void buildLine(string& s, string field) //Adds a comma to the end of every new string.
{
	s += field + ",";
}
