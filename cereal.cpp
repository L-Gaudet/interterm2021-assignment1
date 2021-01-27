// cereal.cpp
#include <iostream>
using namespace std;

int main(){
  // initializes variables
  double cerealWeight;
  double metricTon = 35273.92;
  double weightInTons;
  double numBoxesInTon;
  // prompts user and takes input
  cout << "Enter the weight (in ounces) of a box of breakfast cereal: ";
  cin >> cerealWeight;
  // calculates how many tons a box weighs and how many boxes are needed for a ton
  weightInTons = cerealWeight / metricTon;
  numBoxesInTon = metricTon / cerealWeight;
  // outputs the results to the user
  cout << "A box of this cereal is " << weightInTons << " metric tons." << endl;
  cout << numBoxesInTon << " boxes are needed to yield 1 metric ton." << endl;

return 0;
}
