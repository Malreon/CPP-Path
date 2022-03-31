#include<iostream>
using namespace std;

class MyFunctorClass{
    private:
        int _x;
    public:
        MyFunctorClass(int x): _x(x){}
        //Overload Operator
        int operator() (int y) {
            cout << "accessing overload operator" << endl;
            return _x+y;
         }
};
int main(){

    MyFunctorClass addTen(10);
    cout << addTen(20) << endl;
    return 0;
}