/*
Group Members: Samantha Lafrance, Taris Green, Darrell Brown
Date Last Edited: 11/2/19
Purpose: Implementations for Filter
*/

#include "Filter.h"
#include "Date.h"
#include "StringHelper.h"
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

void loadFile(vector<BaseballStatistic>&);

int main(){
    
    vector<BaseballStatistic> playerList;
    
    loadFile(playerList);
    
    

}

void loadFile(vector<BaseballStatistic>& pList){
	ifstream in;
	in.open("BStats.csv");
	
	string firstName, lastName, teamName, position;
    int jerseyNum, atBats, HR, RBI, SB;
    double battingAverage, OPS, ERA;
    char batting, throwing;
	double hours, rate;
	
	while(teamName >> jerseyNum >> firstName >> lastName >> year >> month >> day >> SB >> OPS >> ERA >> position){
		
		BaseballStatistic temp(teamName, jerseyNum, firstName, lastName, year, month, day, SB, OPS, ERA, position);
		pList.push_back(temp);
	}
}
