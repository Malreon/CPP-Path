// This program demonstrates different types of loops as well as showcasing the continue and break statements
#include <iostream>

using namespace std;

// Main function has three loops a "for loop", "while loop", and "do while loop"
int main() {
  
  cout << "Entering for loop" << endl;
  for(int i = 0; i <= 10; i++){ // This is a pretest loop that checks for a condition before entering the loop
    cout << "You are in a for loop, this is loop #" << i << endl;
  }

  cout << "Entering while loop" << endl;
  int i = 0;
  while(i <= 10){ // This is a pretest loop that checks for a condition before entering the loop
    cout << "You are in a while loop, this is loop #" << i << endl;
    
    i++;
    if(i == 5)
        continue; // the continue statement causes it to skip the line that comes after if a condition is met
  }

  cout << "Entering do while loop" << endl;
  i = 0;
  do{ // This is a post test loop that checks for a condition after entering the loop
    cout << "You are in a do while loop, this is loop #" << i << endl;
    if(i == 5)
        break; // the break statement interrupts the loop making it unable to continue if a condition is met
    i++;
  } while (i <= 10);
	return 0;		
}