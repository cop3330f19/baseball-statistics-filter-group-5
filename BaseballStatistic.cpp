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
