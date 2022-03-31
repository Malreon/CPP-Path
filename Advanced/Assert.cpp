// assertions are used for testing assumptions from developer
// assert checks for errors at run time
//static_assert checks for erros at compile time
#include <assert.h>
#include <iostream>
using namespace std;

int main(){
    int x = 7;
    x = 10;
    assert(x==7); // this assertion check if x equals 7, if it does not then the abort() function is called
    static_assert(sizeof(int) == 4,"int should be 4 bytes"); //checks if int is 4 bytes, if not displays the error message "int should be 4 bytes"

    return 0;
}