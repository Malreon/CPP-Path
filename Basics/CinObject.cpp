//The purpose of this program is to show how to read input from the user
#include <iostream>

using namespace std;

// Main function demonstrates the cin object and its function.
int main() {

    int userInput;
    cout << "Enter a numerical value: ";
    cin >> userInput; // the cin object allows us to read data from the keyboard, the data can then be stored in a variable
    cout << "The user typed the number: " << userInput << endl; // This statement displays the data from user userInput

    return 0;		
}
