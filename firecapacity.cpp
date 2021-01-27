// firecapacity

#include <iostream>
using namespace std;

int main(){
  // initializes variables
  int maxCapacity;
  int numPeople;
  // prompts user and takes input
  cout << "Enter the maximum room capacity: ";
  cin >> maxCapacity;
  cout << "Enter the number of people to attend the meeting: ";
  cin >> numPeople;

  // checks if the meeting has exceeded capacity and lets the user know
  if (numPeople <= maxCapacity){
    int addPeople = maxCapacity - numPeople;
    cout << "It is legal to hold the meeting. " << addPeople << " more people may legally attend." << endl;
  }
  else {
    int numExcluded = numPeople - maxCapacity;
    cout << "The meeting cannot be held as planned due to fire regulations. " << numExcluded << " people must leave to meet fire regulations." << endl;
  }
  return 0;
}
