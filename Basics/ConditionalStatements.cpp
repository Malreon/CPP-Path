// Demonstration of conditional statements
#include <iostream>

using namespace std;

int main() {
  int num = 10;

  if ( num > 10)
    cout << "greater than condition is true" << endl;
  else
    cout << "greater than condition is false" << endl;

  if ( num >= 10)
    cout << "greater than or equal to condition is true" << endl;
  else
    cout << "greater than or equal to condition is false" << endl;

  if ( num < 10)
    cout << "less than condition is true" << endl;
  else if ( num <= 10)
    cout << "less than or equal to condition is true" << endl;
  else
    cout << "less than or equal to condition is false" << endl;
  return 0;		
}