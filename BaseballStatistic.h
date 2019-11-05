#ifndef BASEBALL_STATISTIC_H
#define BASEBALL_STATISTIC_H

#include "Date.h"
#include <string>

class BaseballStatistic
{
	
	private:
		std::string firstName,
			lastName,
			teamName,
			position;
		
		int jerseyNum,
			atBats,
			hr,
			rbi,
			sb;
		
		char batting,
			throwing;
		
		double battingAverage,
			ops,
			era;
			
		Date * dob;
		
	public:
		BaseballStatistic(std::string, std::string, std::string, int,
			std::string, int, int, int, char, char, int, double, int,
			int, int, double, double);
			

		
		//mutator
		void setfirstName(std::string);
		void setlastName(std::string);
		void setteamName(std::string);
		void setjerseyNum(int);
		void setposition(std::string);
		void setbatting(char);
		void setthrowing(char);
		void setatBats(int);
		void setbattingAverage(double);
		void sethr(int);
		void setrbi(int);
		void setsb(int);
		void setops(double);
		void setera(double);
		
		
		//accessor
		std::string getfirstName()const;
		std::string getlastName()const;
		std::string getteamName()const;
		int getjerseyNum()const;
		std::string getposition()const;
		int getAge()const;
		char getbatting()const;
		char getthrowing()const;
		int getatBats()const;
		double getbattingAverage()const;
		int gethr()const;
		int getrbi()const;
		int getsb()const;
		double getops()const;
		double getera()const;
		
		//prints a single statistic row to the terminal
		void print()const;
		
		
};

#endif
