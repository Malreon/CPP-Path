#include<iostream>
using namespace std;
class mutable_{
    public:
    int a;
    mutable int b;

    mutable_(int x, int y){
        a = x;
        b = y;
    }
    void setA(int x) {a = x;}
    void setB(int y) {b = y;}
    void show(){ cout <<"a: " << a << endl << "b: " << b << endl;}
};
int main(){
    const mutable_ example(10, 20);
    cout << example.a << "  " << example.b << endl;
    //example.a = 100;
    example.b = 200;
    cout << example.a << "  " << example.b << endl;
    return 0;
}