#ifndef FILTER_H
#define FILTER_H

#include "BaseballStatistic.h"
#include <BaseballStatistic.cpp>
#include <iostream>
#include <vector>
using namespace std;

class Filter{
  public:

  static void sort(vector<BaseballStatistic>&);
  static int search(vector<BaseballStatistic>, string, string);  	
};
#endif