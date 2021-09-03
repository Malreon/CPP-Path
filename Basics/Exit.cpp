//demonstrates the exit function
#include<iostream>

using namespace std;
//main function  exits the program afte two statements are displayed
int main(){
  cout << "After this statement, the program will exit\n";
  exit(0); // this line tells the program to exit.
  cout << "This statement will not display because of the exit function\n";
    return 0;
}