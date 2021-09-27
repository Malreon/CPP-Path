//demonstration of Encapsulation using access specifiers
#include<iostream> 
using namespace std; 

class PrivAndPub{ 
    // private specifier means functions and variables are hidden from classes outside of its scope
    private: 
        
        int privateVar; 

    // public specifier means functions and variables are available to classes outside of its scope
    public: 
        int pubdata;
        void set(int data){
            privateVar = data; 
        }
        int get(){
            return privateVar; 
        }
}; 

// main function sets a private variable with some value and then prints out the private variable 
int main(int argc, char** argv){ 
    PrivAndPub obj;
    // obj.privateVar = 120; <-this will not work as it is trying to access a private variable
    obj.pubdata = 50; // this will work

    obj.set(100);
    cout << "private variable:  " << obj.get() << endl; 
    return 0; 
} 