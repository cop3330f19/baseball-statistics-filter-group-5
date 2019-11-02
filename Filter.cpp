#include "Filter.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

//Sort 1: Player Name and Position
static void sort(vector<BaseballStatistic>& sort1);
{
   int i, j, min_idx; 
  
    for (i = 0; i < sort1.size()-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
              
        for (j = i+1; j < sort1.size(); j++) 
          if (
              //Last Name at j is < Last Name at min_idx
              (sort1[j].getLastName().compare(sort1[min_idx].getLastName()) < 0) 
              
              //Or Last Names are equal and First Name at j is < First Name at min_idx
              || (sort1[j].getLastName().compare(sort1[min_idx].getLastName()) == 0 && sort1[j].getFirstName().compare(sort1[min_idx].getFirstName() ) < 0) 
              
              // Or Last Names and First Names are equal and Postion at j < Postion at min_idx
              || (sort1[j].getLastName().compare(sort1[min_idx].getLastName()) == 0 && sort1[j].getFirstName().compare(sort1[min_idx].getFirstName()) == 0 && sort1[j].getPosition() < sort1[min_idx].getPosition() ) 
              )
            min_idx = j; 
      
        // Swap the found minimum element with the first element 
        swap(sort1, min_idx, i);       
    } 
}

//Sort 2: Team and Jersey Number
static void sort(vector<BaseballStatistic>& sort2);
{
   int i, j, min_idx; 
  
    for (i = 0; i < sort2.size()-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
              
        for (j = i+1; j < sort2.size(); j++) 
          if (
              //Team Name at j is < Team Name at min_idx
              (sort2[j].getteamName().compare(sort2[min_idx].getteamName()) < 0) 
              
              // Or Team Names are equal and Postion at j < Postion at min_idx
              || (sort2[j].getteamName().compare(sort2[min_idx].getteamName()) == 0 && sort2[j].getposition() < sort2[min_idx].getposition() ) 
              )
            min_idx = j; 
      
        // Swap the found minimum element with the first element 
        swap(sort2, min_idx, i);       
    } 
}

static int search(vector<BaseballStatistic>, string, string);  

