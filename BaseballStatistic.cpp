/*
Group Members: Samantha Lafrance, Taris Green, Darrell Brown
Date Last Edited: 11/5/19
Purpose: Implementations for BaseballStatistic
*/

#include "BaseballStatistic.h"
#include "Date.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

//BaseballStatistic::BaseballStatistic()
//{
//}

BaseballStatistic::BaseballStatistic(std::string fname, std::string lname, std::string tname, int jnum, std::string pos, char bat, char thrw,int aGE, int atbats, double bAV, int hour, int rBI, int sB, double oPS, double eRA)
                                    : firstName(fname), lastName(lname),teamName(tname), jerseyNum(jnum),position(pos), batting(bat), throwing(thrw), atBats(atbats), battingAverage(bAV), hr(hour), rbi(rBI), sb(sB), ops(oPS), era(eRA) {}

void BaseballStatistic::setFirstName(string fname)
{
   firstName = fname;
}

void BaseballStatistic::setLastName(string lname)
{
   lastName = lname;
}

void BaseballStatistic::setTeamName(string tname)
{
   teamName = tname;
}

void BaseballStatistic::setJerseyNum(int jnum)
{
   jerseyNum = jnum;
}

void BaseballStatistic::setPosition(string pos)
{
   position = pos;
}

void BaseballStatistic::setBatting(char bat)
{
   batting = bat;
}

void BaseballStatistic::setThrowing(char thrw)
{
   throwing = thrw;
}

void BaseballStatistic::setAtBats(int atbats)
{
   atBats = atbats;
}

void BaseballStatistic::setBattingAverage(double bAV)
{
   battingAverage = bAV;
}

void BaseballStatistic::setHR(int hour)
{
  hr = hour;
}

void BaseballStatistic::setRBI(int rBI)
{
  rbi = rBI;
}

void BaseballStatistic::setSB(int sB)
{
  sb = sB;
}

void BaseballStatistic::setOPS(double oPS)
{
  ops = oPS;
}

void BaseballStatistic::setERA(double eRA)
{
  era = eRA;
}

string BaseballStatistic::getFirstName()const
{ 
	return firstName;
}

string BaseballStatistic::getLastName()const
{
	return lastName;
}

string BaseballStatistic::getTeamName()const
{ 
	return teamName;
}

int BaseballStatistic::getJerseyNum()const
{
	return jerseyNum;
}

string BaseballStatistic::getPosition()const 
{
	return position;
}

char BaseballStatistic::getBatting()const
{
	return batting;
}

char BaseballStatistic::getThrowing()const
{
	return throwing;
}

int BaseballStatistic::getAtBats()const
{
	return atBats;
}

double BaseballStatistic::getBattingAverage()const
{
	return battingAverage;
}

int BaseballStatistic::getHR()const
{
	return hr;
}

int BaseballStatistic::getRBI()const
{
	return rbi;
}

int BaseballStatistic::getSB()const
{
	return sb;
}

double BaseballStatistic::getOPS()const
{
	return ops;
}
	
double BaseballStatistic::getERA()const
{
	return era;
}
	
void BaseballStatistic::print()const
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
