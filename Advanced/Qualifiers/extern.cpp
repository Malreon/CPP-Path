#include "extern.h"//we now have access to globalVariable
// the globalVariable still needs to be "defined" at least once in one of our source files
#include<iostream>
using namespace std;

int main(){
    extern double globalVariable; //extern allows us to use the globalVariable created in extern.h
    cout << "globalVariable: " << globalVariable << endl;
}