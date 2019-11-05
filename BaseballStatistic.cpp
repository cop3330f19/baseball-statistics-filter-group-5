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

void BaseballStatistic::setfirstName(string fname)
{
   firstName = fname;
}

void BaseballStatistic::setlastName(string lname)
{
   lastName = lname;
}

void BaseballStatistic::setteamName(string tname)
{
   teamName = tname;
}

void BaseballStatistic::setjerseyNum(int jnum)
{
   jerseyNum = jnum;
}

void BaseballStatistic::setposition(string pos)
{
   position = pos;
}

void BaseballStatistic::setbatting(char bat)
{
   batting = bat;
}

void BaseballStatistic::setthrowing(char thrw)
{
   throwing = thrw;
}

void BaseballStatistic::setatBats(int atbats)
{
   atBats = atbats;
}

void BaseballStatistic::setbattingAverage(double bAV)
{
   battingAverage = bAV;
}

void BaseballStatistic::sethr(int hour)
{
  hr = hour;
}

void BaseballStatistic::setrbi(int rBI)
{
  rbi = rBI;
}

void BaseballStatistic::setsb(int sB)
{
  sb = sB;
}

void BaseballStatistic::setops(double oPS)
{
  ops = oPS;
}

void BaseballStatistic::setera(double eRA)
{
  era = eRA;
}

string BaseballStatistic::getfirstName()const
{ 
	return firstName;
}

string BaseballStatistic::getlastName()const
{
	return lastName;
}

string BaseballStatistic::getteamName()const
{ 
	return teamName;
}

int BaseballStatistic::getjerseyNum()const
{
	return jerseyNum;
}

string BaseballStatistic::getposition()const 
{
	return position;
}

char BaseballStatistic::getbatting()const
{
	return batting;
}

char BaseballStatistic::getthrowing()const
{
	return throwing;
}

int BaseballStatistic::getatBats()const
{
	return atBats;
}

double BaseballStatistic::getbattingAverage()const
{
	return battingAverage;
}

int BaseballStatistic::gethr()const
{
	return hr;
}

int BaseballStatistic::getrbi()const
{
	return rbi;
}

int BaseballStatistic::getsb()const
{
	return sb;
}

double BaseballStatistic::getops()const
{
	return ops;
}
	
double BaseballStatistic::getera()const
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

