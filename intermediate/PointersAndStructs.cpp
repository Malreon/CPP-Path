#include <iostream>
using namespace std;

struct Student{
  string name;         // Student's name.
  int idNum;          // Student ID number. 
  int creditHours;    // Credit hours enrolled. 
  double gpa;                // Current GPA.
 };
int main(){
    Student *John = nullptr; //define a Student pointer
    John = new Student; // Dynamically allocate a Student structure
    John->name = "John"; //  stores a string value in name using "->" instead of the "." operator because this is a pointer
    John->idNum = 123122;
    John->creditHours = 15;
    John->gpa = 3.6;
    cout << John->name <<" " << John->idNum << " " << John->creditHours << " " << John->gpa << endl; //pointer struct data is accessed using "->"
    return 0;
}   