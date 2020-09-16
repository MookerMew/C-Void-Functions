//**Second attempt to solve project 4!**

//program takes data from TheSales.txt and manipulates the data for different presentation written to an output file.
//ask what the output file should be named
//design of output file is as follows:
	//1) x sales people were processed
	//2) y weeks of sales data were processed
	//3) salesperson A had a sales total of $ for week 1, averaging $ per day. They had a sales total of $ for week 2, averaging $ per day.
	//4) salesperson A had a sales total of $ for ALL WEEKS, averaging $ sales per week.
	//5) the total sales for all salespersons for all weeks was $, with an average of $ per week.
	// repeat 3 - 5 for each salesperson.
//error correct if the wrong file is opened.

#include <iostream>	
#include <fstream>	
#include <cstdlib>	
#include <iomanip>
#include <string>	
using namespace std;

//function declarations
//all functions use fstream!
void weekSalesFunction(ifstream& in, ofstream& out, int weeks, double& weekTotal, string& lastName);
void oneSalesPersonData(ifstream& in, ofstream& out, double& onePersonTotal, int weeks, string& lastName);
void allSalesTotal(ifstream& in, ofstream& out, double& allSales, int weeks);

int main()
{
	//request output file name
	//output stream
	string outFile; 
	cout << "What will you name the output file?\n";
	cin >> outFile;
	ofstream output;
	output.open("outFile");
		if(output.fail())
		{
			cout << "Output file did not open.\n";
			exit(1);
		}
		cout << "Ok, data is being written to " << outFile << endl;
	//input stream
	ifstream input;
	input.open("TheSales.txt");
		if(input.fail())
		{
			cout << "Input file did not open.\n";
			exit(1);
		}
		
	int numPeople, numWeeks;
	string first, middle, last;
	
	//input from TheSales.txt begins
	input >> numPeople >> numWeeks;
	//output these numbers to output file
	output << numPeople << " salespeople were processed.\n";
	output << numWeeks << " weeks of data were collected.\n";
	
	void weekSalesFunction(ifstream& in, ofstream& out, int numWeeks, double& oneWeekTotal, string& last);
	//The following gets the total across all weeks for one salesperson
	do{
		//get name after all weeks data for one person are stored.
		string first, middle, last;
		input >> first >> middle >> last;
		int i;
		if(i = 0, numWeeks <= 10, i++)
		{
		double allWeeksOnePerson;
		allWeeksOnePerson = 0;
		double oneWeekTotal;
		allWeeksOnePerson = oneWeekTotal + allWeeksOnePerson;
		}
	}while(numWeeks <= 10);
	void oneSalesPersonData(ifstream& input, ofstream& output, double& allWeeksOnePerson, int numWeeks, string& last);
	do{
		int i;
		if(i = 0, numPeople <= 10, i++)
		double allWeeksAllPeople = 0;
		double allWeeksOnePerson;
		double allWeeksAllPeople = allWeeksOnePerson + allWeeksAllPeople;
	}while(numWeeks > 1);
	void allSalesTotal(ifstream& input, ofstream& output, double& allWeeksAllPeople, int numWeeks);

		//input >> first >> middle >> last;
	
	
	input.close();
	output.close();
	return 0;	
}//end main


//function definitions
//precondition:weeks, names extracted from input file. in and out streams connected.
//postcondition:takes in sales data for week, name, adds total, calculates average, outputs data per week to file for all weeks of one salesperson.
//places each week total in the variable weekTotal
void weekSalesFunction(ifstream& in, ofstream& out, int weeks, double& weekTotal, string& lastName)
{
	//magic formula
	out.setf(ios::fixed);
	out.setf(ios::showpoint);
	out.precision(2);
	
	double day1, day2, day3, day4, day5;
	double ave;
	for(int j = 0; j < weeks; j++) //runs through weeks per person
		{
			in >> day1 >> day2 >> day3 >> day4 >> day5;
			weekTotal = (day1 + day2 + day3 + day4 + day5);
		}//sales totals by week
		ave = weekTotal/5;
		out << "Salesperson " << lastName << " had a sales total of " << weekTotal << " for week, averaging " << ave << " per day.\n";
}
	//precondition:takes total sales for one salesperson and amount of weeks from main and creates average per week for one salesperson
	//postcondition:outputs average per person per week
	void oneSalesPersonData(ifstream& in, ofstream& out, double& onePersonTotal, int weeks, string& lastName)
	{
		//magic formula
		out.setf(ios::fixed);
		out.setf(ios::showpoint);
		out.precision(2);
	
		double ave;
		ave = onePersonTotal/weeks;
		out << "Salesperson " << lastName << " had a sales total of " << onePersonTotal << " for all weeks counted, averaging " << ave << " per week.";
	}
			//precondition:takes allWeeksAllPeople from Main 
			//postcondition:gets average per week across all sales people
			void allSalesTotal(ifstream& in, ofstream& out, double& allSales, int weeks)
			{
				//magic formula
				out.setf(ios::fixed);
				out.setf(ios::showpoint);
				out.precision(2);
				
				double ave;
				ave = allSales/weeks;
				out << "The total for all sales people over all weeks is " << allSales << " averaging " << ave << " per week across all sales people.";
			}


