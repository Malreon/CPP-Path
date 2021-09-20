// Demonstrates  the use of lambda functions
#include <iostream>
using namespace std;


int areafunction(int,int);
//Basic syntax of a lambda function: [capture] (params) -> return_type { function_body }
int main(int argc, char **argv){

    auto AreaLambda = [](auto A, auto B){return A*B;}; // "-> return_type" is not needed most of the time as the compiler can figure out the return type
    int Areafunction = areafunction(5,10); // this function does the same thing AreaLambda does except its more complex
     
    cout << AreaLambda(5,10) /*calls the AreaLambda function with two int parameters */ << "    " << Areafunction; 
    return 0;
}

int areafunction( int x, int y){
    return x * y;
}