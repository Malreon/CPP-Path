// Demonstration of  overloaded functions
#include <iostream>

using namespace std;

int SUM(int, int); // function prototype
int SUM(int, int, int); //the overloaded function has the same name as the sum function but takes in different values.
//main function finds the sum of values
int main() {
  int amount;
  amount = SUM(1,2);
  cout << amount << endl; //sum from regular function
  amount = SUM(1,2,3); // goes to the overloaded function because its using three values instead of 2
  cout << amount << endl; //sum from overloaded regular function
  return 0;
}

int sum(int one, int two){ //function takes two int variables
  return one + two;
}

int sum(int one, int two, int three){ //overloaded function takes three int variables
  return one + two + three;
}
