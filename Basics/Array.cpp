// This program demonstrates an array of type int
#include <iostream>

using namespace std;

// Main function holds an array 
int main() {
  
  const int SIZE = 10; // used to determine the size of an array
  int initializedArray[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // An array can be initialized 
  int uninitializedArray[SIZE]; // An empty array with size of 10 int

  cout << "Enter values for 'uninitializedArray'" << endl;
  for(int i = 0; i < 10; i++){ // for loop used to go through the each element of an array
    cin >> uninitializedArray[i]; // user input is saved to an element determined by i
  }
  cout << "displaying values for 'uninitializedArray'" << endl;
  for(int y = 0; y < 10; y++){ 
    cout << uninitializedArray[y] << endl; //used to display the values from the array
  }
	return 0;		
}