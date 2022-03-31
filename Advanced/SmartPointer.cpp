//introduction to smart pointers
/*
A smart pointer is a class which wraps a raw pointer to manage the life time of the pointer.
The most fundamental job of a smart pointer is to remove the chances of a memory leak.
It makes sure that the object is deleted if it's not referenced anymore

TYPES:
1.unique_ptr : 
    Allows only one owner of the underlying pointer, it can't be copied only moved
2.shared_ptr :
    Allows multiple owners of the same pointer (Reference count is maintained)
3.weak_ptr :
    It is a special type of shared_ptr which doesn't count the reference
*/
#include <iostream>
#include <memory>
using namespace std;

// generid smart pointer class
template <class T>
class SmartPTR{
    private:
        T* data; //actual generic pointer
    public:
    //constructer
    explicit SmartPTR( T* p = NULL) { data = p; } 
    //destructor
    ~SmartPTR() { delete (data); }
    //overloading dereferncing operator
    T& operator*() { return *data; }
    // Overloading arrow operator so that
    // members of T can be accessed
    // like a pointer (useful if T represents
    // a class or struct or union type)
    T* operator->() { return data; }
};

int main(){
    SmartPTR<int> dataPtr(new int());
    *dataPtr = 100;
    cout << *dataPtr;
    return 0;
}
