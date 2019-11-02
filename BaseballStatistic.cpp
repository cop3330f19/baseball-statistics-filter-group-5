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

        string getFirstName()const;
		string getLastName()const;
		string getTeamName()const;
		int getJerseyNum()const;
		string getPosition()const;
		int getAge()const;
		char getBatting()const;
		char getThrowing()const;
		int getAtBats()const;
		double getBattingAverage()const;
		int getHR()const;
		int getRBI()const;
		int getSB()const;
		double getOPS()const;
		double getERA()const;
