#include "BaseballStatistic.h"
#include "Date.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

BaseballStatistic::BaseballStatistic()
{
}

BaseballStatistic::BaseballStatistic(string fname, string lname, string tname, int jnum, string pos, char bat, char throw, int atbats, 
	double bAV, int hr, int rbi, int sb, double ops, double era): firstName(fname), lastName(lname), teamName(tname), jerseyNum(jnum),
        position(pos), batting(bat), throwing(throw), atBats(atbats), battingAverage(bAV), HR(hr), RBI(rbi), SB(sb), OPS(ops), ERA(era){
}

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
void BaseballStatistic::setThrowing(char throw)
{
   throwing = throw;
}
void BaseballStatistic::setAtBats(int atbats)
{
   atBats = atbats;
}
void BaseballStatistic::setBattingAverage(double bAV)
{
   battingAverage = bAV;
}
void BaseballStatistic::setHR(int hr)
{
  HR = hr;
}
void BaseballStatistic::setRBI(int rbi)
{
  RBI = rbi;
}
void BaseballStatistic::setSB(int sb)
{
  SB = sb;
}
void BaseballStatistic::setOPS(double ops)
{
  OPS = ops;
}
void BaseballStatistic::setERA(double era)
{
  ERA = era;
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
int BaseballStatistic::getAge()const
{
	return age;
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
	return HR;
}
int BaseballStatistic::getRBI()const
{
	return RBI;
}
int BaseballStatistic::getSB()const
{
	return SB;
}
double BaseballStatistic::getOPS()const
{
	return OPS;
}
double BaseballStatistic::getERA()const
{
	return ERA;
}
