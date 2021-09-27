//demonstration of variadic functions.
// Variadic functions allow a function to accept multiple arguments vs just being able to accept one.
#include <iostream>
using namespace std;

//Recursion base case for variadic functions
void print(){    }

/*variadic template function requires at least one argument
  variadic template function syntax: template <class arg, class... args)
                                     return_type function_name(arg var1, args... var2)
*/
template <class T, class... Args>  
void print(T n, Args... args){
    cout << n << endl;
    print(args...); //recursion statement, the argument parameter "args..." means the remaining arguments sent by main go back to the print function
}

/*main function calls a recursive variadic function
  demonstration of how function call works:
    *print("Example", 1, 'a', 2.5, "base case");
        this statment goes to the print function
        first argument("example") gets read and printed by the cout statement
        the first arguement is gone and the remaining arguments go to the recursive funtion call print(args...)
    *print(1, 'a', 2.5, "base case");
        repeat instructions from previous call to print until you reach the base case
    *print()
        when the recursion statement has finished all the arguments it has reached the base case print()
        the recursive variadic function requires a base case to finish the recursion.
        when the recursion statement is called with no arguments(print()) then the "void print()" statement is called instead.
        when "void print()" is called, the recursion statement is finished and the void print(T n, Args... args) statement is finished   
*/
int main(int argc, char **){
    print("Example", 1, 'a', 2.5, "base case");
    return 0;
}

