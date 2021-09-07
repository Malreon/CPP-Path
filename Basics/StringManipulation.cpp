// demonstrates string manipulations.
#include <iostream>
#include <string>
using namespace std;

int main(){
  string person1("John Appleseed"); //Defines a string object named name , initialized with "John Appleseed"
  string person2(person1); //Defines a string object named person1, which is a copy of person2
  string set1(person2, 5); //Defines a string object named set1 , which is initialized to the first five characters in the character array person2 
  string lineFull('z', 10); //Defines a string object named lineFull initialized with 10 'z' characters
  string firstName(person1, 0, 7); //Defines a string object named firstName, initialize with a substring of the string fullName

  // String concatination 
  string a,b,c;
  a = "This is the first half, ";
  b= "this is the second half";
  c = a+b; // this statement merges two strings together 
  cout<<c<<endl;
  // Prints the length of a string
  cout << c.length() << endl;

  // this statment prints out a specific range of chracters from a string
  cout << c.substr(0,4) << endl;

  //Find and print the first position of element
  cout << c.find ('e') << endl;
  return 0;
}