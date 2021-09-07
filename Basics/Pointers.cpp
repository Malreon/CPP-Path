//demonstration of pointers
#include <iostream>
using namespace std;


int main(){

    int *y; // the asterisk symbol behind the variable name indicates its a pointer
    int* z; // this is an alternate method of creating a pointer variable
    int *ptr = nullptr; //initializes a pointer with nullptr

    int x = 100;
    ptr = &x; //stores address of x into ptr,the address operator "&" returns the memory address of a variable
    cout << "The address of x is " << ptr << endl
         << "The size of x is "    << sizeof(x) << " bytes\n" << endl
         << "The value in x is "   << x << endl;   

    int  numbers[] = {1, 2, 3, 4, 5};
    cout << "The 1st number from the numbers array is:  "
         << *numbers <<endl; //an array name is actually considered a pointer
    cout << "The 2nd number from the numbers array is:  "
         << ++*numbers <<endl; //you can traverse an array using pointer arithmetic
    cout << "The 5th number from the numbers array is:  "
         << *numbers +3;
    return 0;
}
