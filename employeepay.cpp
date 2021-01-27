// employeepay

#include <iostream>
using namespace std;

int main(){
  // initializes variables
  int hourWage = 16;
  double otHours;
  double otWage = 1.5 * 16;
  double socialSecurityTax;
  double fedIncomeTax;
  double stateIncomeTax;
  int medInsurance = 10;
  double hoursWorked;
  double grossPay;
  double netTakeHome;

  //prompts user and takes input
  cout << "Enter the number of hours worked for a week: ";
  cin >> hoursWorked;

  // calculates gross pay, accounts for overtime
  if (hoursWorked > 40){
    otHours = hoursWorked - 40;
    grossPay = 40 * hourWage;
    grossPay += otHours * otWage;
  }
  else{
    grossPay = hoursWorked * hourWage;
  }
  // calculates taxes
  socialSecurityTax = grossPay * 0.06;
  fedIncomeTax = grossPay * 0.14;
  stateIncomeTax = grossPay * 0.05;
  // calculates net pay
  netTakeHome = grossPay - socialSecurityTax - fedIncomeTax - stateIncomeTax - medInsurance;

  //outputs the information to the user 
  cout << "gross pay: $" << grossPay << endl;
  cout << "social security tax: $" << socialSecurityTax << endl;
  cout << "federal income tax: $" << fedIncomeTax << endl;
  cout << "state income tax: $" << stateIncomeTax << endl;
  cout << "medical insurace: $" << medInsurance << endl;
  cout << "net take home pay: $" << netTakeHome << endl;

  return 0;
}
