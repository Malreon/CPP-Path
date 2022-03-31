/* 
    1.Shared pointers are smart pointers that can share ownship of objects (managed object)
    2.Several shared pointers can point to the same obj
    3.It keeps a reference count to maintain how many shared pointers point to the same obj
    4.Once the last shared pointer goes out of scope the managed obj gets deleted
    5.Three ways a shared pointer destroys a managed obj
        *if last shared pointer goes out of scope
        *if shared pointer is initialized with another shared pointer
        *if shared pointer is reset
    6.Reference count doesn't work when we use the reference or pointer of shared pointer
*/
#include <iostream>
#include <memory>
using namespace std;

class shrdPTR{
    private:
    int x;
    public:
        shrdPTR(int x): x{x}{} //shrdPTR constructor with an initialization list
        int getX(){ return x;}
        ~shrdPTR() { cout << "shrdPTR Destroyed\n"; }
};

int main(){
    shared_ptr<shrdPTR> example = make_shared<shrdPTR>(100);
    cout << example->getX() << endl
         << example.use_count() << endl;
    shared_ptr<shrdPTR> exampleShared = example;
    cout << example.use_count() << endl
         << exampleShared.use_count() << endl;
    return 0;
}   