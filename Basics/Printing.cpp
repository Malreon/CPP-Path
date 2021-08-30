// The purpose of this program is to demonstrate two different methods
// of printing string information.

//~~~~~~~~~~~~~~~~~~~~~ Method 1 ~~~~~~~~~~~~~~~~~~~~~\\

#include <iostream>  // The iostream library allows the program to display output to the screen and read info from the keyboard
using namespace std; // Gives us access to the std class and all its associated functions

// main function that outputs a string statement to the user 
int main(){
    cout << "Hello world"; // "cout" is an object from the std class that allows us to output a statement to the user.
    return 0;              // informs compiler that the program executed correctly
}

//~~~~~~~~~~~~~~~~~~~~~ Method 2 ~~~~~~~~~~~~~~~~~~~~~\\

#include <iostream>
// The "using namespace std" statement is missing in this approach

// main function that outputs a string statement to the user 
int main(){
    std::cout << "Hello world"; // Since we did not give the program access to the std class we need to specify it directly using "std::" 
                                // whenever we want to access its functions, afterwards it behaves like the cout object normally would.
    return 0;
}