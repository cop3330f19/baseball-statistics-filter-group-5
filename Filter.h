/*
Group Members: Samantha Lafrance, Taris Green, Darrell Brown
Date Last Edited: 11/3/19
Purpose: Header file for Filter
*/

#ifndef FILTER_H
#define FILTER_H

#include "BaseballStatistic.h"
#include <iostream>
#include <vector>

using namespace std;

class Filter{
  public:

  static void sort(vector<BaseballStatistic>&);
  static int search(vector<BaseballStatistic>, string, char, int, double);  	
};
#endif