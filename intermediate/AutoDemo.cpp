#include <iostream>
#include <string>
#include <typeinfo> // library needed to use typeid 
using namespace std;

string returnStringValue();
int returnIntValue();


int main(int argc, char** argv){

    auto valueOne = returnStringValue(); //the auto data type automatically assigns the appropriate data type according to the assigned value
    auto valueTwo = returnIntValue();
    if (typeid(valueOne) == typeid(string)){ //typeid is used to check what data type a variable is
        puts("Both types are matching");
    }
    if (typeid(valueTwo) == typeid(int)){
        puts("Both types are int values");
    }

    return 0;
}

string returnStringValue(){
    return "This is a string";
}
int returnIntValue(){
    return 100;
}