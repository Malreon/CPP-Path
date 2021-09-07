// demonstrates struct objects
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
  //declaration of a struct tagged EmployeePay
  struct EmployeePay{  
    string name;
    int employeeNum;
    double payRate,
           hours,
           grossPay;
  };
  EmployeePay EmployeeNum1 = { "John Appleseed", 001, 25.00}; // initializes an EmployeePay object titled "EmployeeNum1"

  
  EmployeeNum1.hours  = 40; // to access members of a struct the "." operator must be used
  EmployeeNum1.grossPay = EmployeeNum1.hours * EmployeeNum1.payRate;

  cout << EmployeeNum1.name << endl
       << EmployeeNum1.employeeNum << endl
       << EmployeeNum1.payRate << endl
       << EmployeeNum1.hours << endl
       << EmployeeNum1.grossPay << endl;

  return 0;
}