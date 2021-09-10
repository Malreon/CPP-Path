// This demo demostrates call by value and call by reference
#include<iostream>

using namespace std;

//this function uses call by value, this means it only has a copy of the values it was given it CANT influence the original values
void thisValue(int number){
    ++number;
    cout << "You are in the thisValue function" << endl
         <<number<<endl;
}
//this function uses call by reference, this means it CAN influence the original values as it was given access to those values
void thisReference(int &number){
    ++number;
    cout << "You are in the thisReference function" << endl
         <<  number << endl;

}

int main(){
    int original =3;

    thisValue(original); // goes to the function that uses call by value
    cout << "You are back in the main function" << endl
         << original << endl; // the thisvalue function had no effect on the original datatype

    thisReference(original); // goes to the function that uses call by reference
    cout << "You are back in the main function" << endl
         << original << endl; // the thisreference function had an effect on the original datatype
        return 0;
}