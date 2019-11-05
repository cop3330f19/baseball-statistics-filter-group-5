/*
Group Members: Samantha Lafrance, Taris Green, Darrell Brown
Date Last Edited: 11/5/19
Purpose: Implementations for Filter
*/

#include "Filter.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

//Swap function used for Sorting
void swap(vector<BaseballStatistic>& sort, int Idx1, int Idx2){
    //Temporary variable to store old value
    BaseballStatistic temp = sort[Idx1]; 
    //Moves the element to its new position
    sort[Idx1] = sort[Idx2]; 
    //Moves previous element at the new sorted position
    sort[Idx2] = temp;
}

//Sort Function
static void sort(vector<BaseballStatistic>& sort1);
{
   int i, j, min_idx; 
  
    for (i = 0; i < sort1.size()-1; i++) 
    { 
        for (i = 0; i < sort.size()-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
              
        for (j = i+1; j < sort.size(); j++) 
          if (
              //For Sort 1: Last Name at j is < Last Name at min_idx
             //OR For Sort 2: Team Name at j is < Team Name at min_idx
              (sort[j].getlastName().compare(sort[min_idx].getlastName()) < 0
              || sort[j].getteamName().compare(sort[min_idx].getteamName()) < 0) 
              
              //OR For Sort 1: Last Names are equal and First Name at j is < First Name at min_idx
             // OR For Sort 2: Team Names are equal and Jersey Number at j < Jersey Number at min_idx
              || (sort[j].getlastName().compare(sort[min_idx].getlastName()) == 0 && sort[j].getfirstName().compare(sort[min_idx].getfirstName() ) < 0)
              || (sort[j].getteamName().compare(sort[min_idx].getteamName()) == 0 && sort[j].getjerseyNum() < sort[min_idx].getjerseyNum() )
              
              // OR For Sort 1: Last Names and First Names are equal and Position at j < Position at min_idx
              || (sort[j].getlastName().compare(sort[min_idx].getlastName()) == 0 && sort[j].getfirstName().compare(sort[min_idx].getfirstName()) == 0 && sort[j].getposition() < sort[min_idx].getposition() )  
              )
            min_idx = j; 
      
        // Swap the found minimum element with the first element 
        swap(sort, min_idx, i);       
    } 
}

static int search(vector<BaseballStatistic> stats, string teamName,char batting,int sb ,double battingAverage ){
  
  int lo = 0;
  int hi = stats.size();
  
   while (lo <= hi) 
    { 
        int location = lo + (hi-lo)/2; 
  
        // Check if Team Name, Batting, Stolen Bases or Batting Average is at mid 
        if (stats[location].getteamName() == teamName || stats[location].getBatting() == batting 
           || stats[location].getsb() == sb || stats[location].getbattingAverage() == battingAverage) 
            return location; 
  
        // If Team Name, Batting, Stolen Bases or Batting Average is greater, ignore left half 
        if (stats[location].getteamName() < teamName || stats[location].getbatting() < batting 
           || stats[location].getsb() < sb || stats[location].getbattingAverage() < battingAverage) 
            lo = location + 1; 
  
        // If Team Name, Batting, Stolen Bases or Batting Average is smaller, ignore right half 
        else
            hi = location - 1; 
    } 
  
    // If element was not present 
    return -1; 
 
}
