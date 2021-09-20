#include <iostream>
using namespace std;

int main(){
    // These variables are examples of STACK memory
    // safer and faster then HEAP memory
    int A[100];
    int B = 100;
    int C[B];
    // This vairable is an example of heap memory
    // Heap memory is slower then stack memory, and can also leak memory if not properly maintained
    int *heapDemo = new int; 
    *heapDemo = 50; //Heap memory can be predefined but it can also be expanded
    delete heapDemo; // used to clear memory
    return 0;
}