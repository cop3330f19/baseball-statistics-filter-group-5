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
        position(pos), batting(bat), throwing(throw), atBats(atbats), battingAverage(bAV), HR(HR), RBI(rbi), SB(sb), OPS(ops), ERA(era){
}

void BaseballStatistic::setFirstName
{

}

void BaseballStatistic::setLastName
{

}
void BaseballStatistic::setTeamName
{

}
void BaseballStatistic::setJerseyNum
{

}
void BaseballStatistic::setPosition
{

}
void BaseballStatistic::setBatting
{

}
void BaseballStatistic::setThrowing
{

}
void BaseballStatistic::setAtBats
{

}
void BaseballStatistic::setBattingAverage
{

}
void BaseballStatistic::setHR
{

}
void BaseballStatistic::setRBI
{

}
void BaseballStatistic::setSB
{

}
void BaseballStatistic::setOPS
{

}
void BaseballStatistic::setERA
{

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
