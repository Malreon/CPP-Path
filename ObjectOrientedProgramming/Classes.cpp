#include <iostream>
using namespace std;

// defines a class
class student{
    //public is an access specifier and student() is constructor
    public :
    string name;
    //empty constructor
    student(){
    }
    //overloaded constructor that accepts parameters
    student(string name){
        this->name = name;// the "this" pointer allows student constructer to retrive the name variable from main and assign it to the local name variable from class student
    }
    void setName(string name){
        this->name = name;
    }

    string getName(){
        return this->name;
    }
};
int main(int argc, char **argv){

    student firstYear; //creates an object that is an instance of a class
    student secondYear("Caitlyn"); //creates an object that is an instance of a class that overloads the constructor
    firstYear.setName("Jenny");

    cout << firstYear.getName() << endl
         << secondYear.getName() << endl;
    return 0;
}