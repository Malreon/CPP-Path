#include <iostream>
#include <memory>
using namespace std;

template <class T>
    void badSwap(T& a, T& b) {
        T tmp(a);   // we now have two copies of a
        a = b;      // we now have two copies of b (+ discarded a copy of a)
        b = tmp;    // we now have two copies of tmp (+ discarded a copy of b)
        cout << "you are in the badswap template class" << endl;
    }
template <class G>
    void goodSwap(G& a, G& b) {
        G tmp(move(a));
        a = move(b);   
        b = move(tmp);
        cout << "you are in the goodSwap template class" << endl;
    }




int main(){
    int a=3,
        b=4;
    badSwap<int>(a,b);
    goodSwap<int>(a,b);
    cout << "A : " << a << endl;
    return 0;
}