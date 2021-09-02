// Demonstration of operators c++ offers
#include <iostream>

using namespace std;

int main() {
  //Assignment operators
  double a,
         b,
         c = 0,
         d = 0,
         e = 0,
         f = 10;
  a = 10;
  b = 5;
  c += a;
  d -= b;
  e *= c;
  f /= d;
  cout << a << "  " << b << endl;
  cout << c << "  " << d << endl;
  cout << e << "  " << f << endl;

  //Unary operators
  a = 1,
  b = 1;
  a++;
  b--;
  cout << a << "  " << b << endl;

  //Arithmetic operators
  a = 4 + 10;
  b = 10 - 5;
  c = 5 * 5;
  d = 10 / 2; 
  e = 10 % 2;
  cout << a << "  " << b << endl;
  cout << c << "  " << d << "  " << e << endl;

  //Relational operators
  cout << (a < b) << endl
        << (a > b) << endl
        << (a == b) << endl
        << (a <= b) << endl
        << (a >= b) << endl;

  //Logical operators
  a = 1;
  b = 10;
  c = -5;
  
  cout << (a > c && b > c) << endl
       << (a < c || b > a) << endl
       << !(a < c || b < a) << endl;

  //Ternary operator
    a = 1;
    a == 100 ? cout << "true" << endl : cout << "false" << endl;
    a < 100 ? cout << "true" << endl : cout << "false" << endl;

  //Bitwise Operator
  unsigned int A = 5;
  unsigned int B = 9;

  cout << "A & B = " << (A & B) << endl; // bitwise AND operator
  cout << "A | B = " << (A | B) << endl; // bitwise OR operator
  cout << "A ^ B = " << (A ^ B) << endl; // bitwise XOR operator
  cout << "A >> B = " << (A >> B) << endl; // bitwise Right Shift operator
  cout << "A << B = " << (A << B) << endl; // bitwise Left Shift  operator
  return 0;		
}