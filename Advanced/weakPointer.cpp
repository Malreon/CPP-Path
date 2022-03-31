/*
    Holds a non-owning ("weak") reference to an object that is managed by  a shared_ptr
    Weak_ptr is created as a copy of shared_ptr
    It provides access to an object that is owned by one or more shared_ptr instances, but does not-
    - participate in reference counting
    To use a weak pointer you need to check validity of underlying resource using: expired()
        expired() is boolean and checks if the underlying resource is valid by checking reference count
    another way is to convert a weak pointer to a shared one to acces the referenced obj using: lock()
        lock() creates a shared ptr that shares ownership of managed obj
        if theres no managed obj it returns an empty shared ptr
        effectively returns: expired()? shared_ptr<T>() : shared_ptr<T>(*this)
    Weak pointers fix the cyclic reference problem
        when two shared pointers are  shared with each other it is impossible to delete causing memeory leaks
*/
#include <iostream>
#include <memory>
using namespace std;
class weakPTR{
    private:
        shared_ptr<weakPTR> adjacent;
    public:
        
        weakPTR() { cout << "A Constructor" << endl; } 
        ~weakPTR() { cout << "A Destructor" << endl; } 
        void printweakPTR() { cout << "A Class" << endl; }
        void setADJ(shared_ptr<weakPTR> ptr){
            adjacent = ptr;
        }
 
};
int main(){
    shared_ptr<weakPTR> firstSHRD = make_shared<weakPTR>();
    weak_ptr<weakPTR> firstWP = firstSHRD;
    firstWP.lock()->printweakPTR();
    shared_ptr<weakPTR> altMethod = firstWP.lock();
    altMethod->printweakPTR();
    return 0;
}