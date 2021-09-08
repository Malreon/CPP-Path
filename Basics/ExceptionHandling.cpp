//demonstration of exception handling
#include <iostream>
#include <string>
using namespace std;

bool validInput(double);

int main(){
  double input;
  bool tryAgain = true; //flag to reread input
  cout << "Enter a positive value:  ";
  cin >> input;
  //while loop that loops until user inputs valid data
  while(tryAgain){
    try{// start of try catch structure
      tryAgain = validInput(input); // if this throws an exception it loops again
      //if no exception throw then next line will execute
      tryAgain = false;
    }
    catch(string exceptionString){ //returns error message and allows user to try again
      cout << exceptionString << endl
           << "Enter a positive value:  ";
      cin >> input;
    }
  }
  cout << "Yay, you entered a positive number!" << endl;

  return 0;
}

bool validInput(double value){
  if(value < 0){
    string errorCode = "ERROR: entered a negative value!"; 
    throw errorCode;// throws string 
  }
  else
    return true;
}