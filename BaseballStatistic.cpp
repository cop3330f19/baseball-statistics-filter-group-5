#include "BaseballStatistic.h"
#include "Date.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

BaseballStatistic::BaseballStatistic(string fname, string lname, string tname, int jnum, string pos, char bat, char throw, int atbats, double bAV, int HR, int rbi, int sb, double ops, double era)
{
    setFirstName(fname);
    setLastName(lname);
    setTeamName(tname);
    setJerseyNum(jnum);
    setPosition(pos);
    setBatting(bat);
    setThrowing(throw);
    setAtBats(atbats);
    setBattingAverage(bAV);
    setHR(HR);
    setRBI(rbi);
    setSB(sb);
    setOPS(ops);
    setERA(era); 
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

string::getFirstName()const
{ 
	return firstName;
}
string::getLastName()const
{
	return lastName;
}
string::getTeamName()const
{ 
	return teamName;
}
int::getJerseyNum()const
{
	return jerseyNum;
}
string::getPosition()const 
{
	return position;
}
int::getAge()const
{
	return age;
}
char::getBatting()const
{
	return batting;
}
char::getThrowing()const
{
	return throwing;
}
int::getAtBats()const
{
	return atBats;
}
double::getBattingAverage()const
{
	return battingAverage;
}
int::getHR()const
{
	return HR;
}
int::getRBI()const
{
	return RBI;
}
int::getSB()const
{
	return SB;
}
double::getOPS()const
{
	return OPS;
}
double::getERA()const
{
	return ERA;
}
