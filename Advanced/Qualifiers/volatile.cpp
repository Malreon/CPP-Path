/*volatile is a hint to the implementation to avoid aggressive optimization involving the object because the value of 
 *the object might be changed by means undetectable by an implementation
 */
#include<iostream>
using namespace std;

int main(){
    // Without Volatile
    const int local1 = 10; 
    int *ptr1 = (int*) &local1; 

    cout << "Initial value of local : " << local1 <<endl;
    *ptr1= 100; 
    cout << "Modified value of local: " << local1 <<endl;

    // With Volatile
    const volatile int local2 = 10; 
    int *ptr2 = (int*) &local2; 

    cout << "Initial value of local : " << local2 <<endl; 

    *ptr2 = 100; 

    cout << "Modified value of local: " << local2 <<endl;  

    return 0;
}