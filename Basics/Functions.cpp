// Demonstration of functions
#include <iostream>

using namespace std;

int AreaOfRectangle(int, int); // function protype

//main function asks user for length and width then finds area.
int main() {
  int length,
      width,
      area;
  cout << "Enter length:\n";
  cin >> length;
  cout << "Enter width: \n";
  cin >> width;
  area = AreaOfRectangle(length, width); // goes to function AreaOfRenctangle and assigns return value to area variable
  cout << "area is: " << area;
  return 0;
}

int AreaOfRectangle(int l, int w){ //function takes two int variables
  return l * w;
}