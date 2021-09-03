// Demonstration of a range based for loop
#include <iostream>

using namespace std;

// main function compares a for loop with a range based for loop
int main() {
  int A[] = {1, 2, 3};

  for(int i = 0; i < 3; i++){ // regular for loop
    cout << A[i] << endl;
  }
  cout << "entering range based for loop\n";

  for(int i: A){ //range based for loop
    cout << i << endl;
  }
}