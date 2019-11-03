/*
Group Members: Samantha Lafrance, Taris Green, Darrell Brown
Date Last Edited: 11/3/19
Purpose: Driver file for program
*/

#include "BaseballStatistic.h"
#include "Filter.h"
#include "Filter.cpp"
#include "Date.h"
#include "StringHelper.h"
#include <fstream>
#include <vector>
#include <iomanip>
#include <iostream>
#include <string>


void readFile(vector<BaseballStatistic>&);
void printDisplay();

int main(){
	
	vector<BaseballStatistic> stats;
	
	readFile(stats);
	
	
    printDisplay();

		std::string teamName,cont="";
    char batting;
    int sb;
    double battingAverage;

    do{
		cout << "Enter all filter key pairs you would like to use (enter F when finished):";
		cin >> teamName >>batting>>sb>>battingAverage>>cont;
		cout << endl;
		int x = search(stats, teamName, batting, sb , battingAverage);

		if(x != -1){
			stats[x].print();
			stats[x].toString();
		}
		else
			cout << "PLEASE DOUBLE CHECK FILTER KEY PAIRS" << endl;

		do{
			cout << "Would you like to do a new filter? (Y/N)";
			cin >> cont;
			cout << endl;
		}while(StringHelper::toUpper(cont) != "N" && StringHelper::toUpper(cont) != "Y");
		
	}while(StringHelper::toUpper(cont) != "F");
		
	return 0;
}

void printDisplay()
{
	//FILTER OPTIONS Display
    cout<<"******FILTER OPTIONS******\n";
    cout<<"* T   - Team             *\n";
    cout<<"* P   - Position         *\n";
    cout<<"* B   - Batting          *\n";
    cout<<"* BA  - Batting Average  *\n";
    cout<<"* H   - Home Runs        *\n";
    cout<<"* R   - Runs Batted In   *\n";
    cout<<"* S   - Stolen Bases     *\n";
    cout<<"* O   - OPS              *\n";
    cout<<"* E   - ERA              *\n";
    cout<<"**************************\n";

    cout<<"Example input:\n";
    cout<<"Enter all filter key pairs you would like to use (enter F when finished):\n";
    cout<<"T Cubs\n";
    cout<<"B L\n";
    cout<<"S 2\n";
    cout<<"BA 0.23\n";
    cout<<"F\n";
}

//Function to read in file
void readFile(vector<BaseballStatistic>& stats)
{
	ifstream in;
	in.open("BStats.csv");
	
	std::string fname, lname, tname, pos;
  int jnum,atbats,hour,rBI,sB;
  char bat, thrw;
	double bAV, oPS,eRA;
	
	while(in >> fname>> lname >> tname >> pos >> jnum >> atbats >> hour >> rBI >> sB >> bat >> thrw >> bAV >> oPS >> eRA)
  {
		BaseballStatistic temp(fname,lname,tname,pos,jnum,atbats,hour,rBI,sB,bat,thrw,bAV,oPS,eRA);
		stats.push_back(temp);
	}
}