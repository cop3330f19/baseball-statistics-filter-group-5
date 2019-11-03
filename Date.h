/*
Group Members: Samantha Lafrance, Taris Green, Darrell Brown
Date Last Edited: 11/3/19
Purpose: Header file for Date
*/

#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

class Date
{
	
	private:
		const int day, month, year,birthMonth,birthDay,birthYear;
	
	public:
		//Constructor accepts the date in the format YYYY, MM, DD
		//eg Date date(2019, 9, 27);
		explicit Date(int y, int m, int d,int bmonth,int bday,int byear)
        :year(y), month(m), day(d),birthMonth(bmonth),birthDay(bday),birthYear(byear){}
    
		int getDay()const; //Returns the day
            {return day;}
		int getMonth()const; //Returns the month
            {return month;}
		int getYear()const;//Returns the year
            {return year;}
		std::string getDate()const;
            //{return }
    
    //Person's Birth Date
        int getBirthDay()const; //Returns the day
            {return birthDay;}
		int getBirthMonth()const;//Returns the month
            {return birthMonth;}
		int getBirthYear()const; //Returns the year
            {return birthYear;}
		int getAge()const; //Calculates age in years
         { 
             int A=0;

             if(getBirthMonth() > getMonth())
               {
                A = 1;   
               }
             if((getBirthMonth() == getMonth()) && (getBirthDay() > getDay()))
               {
                A = 1;   
               }

              return (getYear()-getYear()) - A;
        }
      
};
#endif