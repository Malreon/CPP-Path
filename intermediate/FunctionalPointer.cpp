#include <iostream>
using namespace std;

int example(){
    return 100;
}
//declares and uses function pointers
int main(int argc, char** argv){
    int (*FunctionPoint)() = nullptr; /* this is a function pointer, it's named FunctionPoint, points to a function- 
                             * that is of type int and has no parameters and reutrns an integer
                            */
    void (*const PointToFunc)() = nullptr; // to make a function pointer const, it must be declared INSIDE the parentheses 

    int (*examplePointer)(){&example}; // initializing a function pointer to a function
    FunctionPoint = &example; //another way to assign a function to a pointer
    cout << (*FunctionPoint)() << endl; // calls the example function through the pointer
    return 0;
}