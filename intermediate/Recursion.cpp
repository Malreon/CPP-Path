//demonstration of a recursive function
#include <iostream>

using namespace std;
int factorial(int);
int main(int argc, char **argv){
    int number;
    cout << "Enter a number\n";
    cin >> number;
    cout <<"the factorial of " << number << " is: " << factorial(number) <<endl;  
    return 0;
}
//recursive function finds the factorial of a number
int factorial(int x){
    return x == 0 ? 1 : x * factorial(x-1);
}