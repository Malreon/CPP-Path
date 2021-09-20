//demonstration of templates
#include <iostream>
using namespace std;

template <class T>
T square(T num){
  return num*num;
}

int main(){
  int userInt = 5;
  double userDouble = 12.5;
  double area;
  cout << square(userDouble) << endl
       << square(userInt) << endl;
  return 0;
}

