#include<iostream>
using namespace std;
class Vehicle{
    private:
        static int objCount;
    public:
    Vehicle(){ objCount++; }
    int getCount() const { return objCount; }
};
int Vehicle::objCount = 0;
int main(){
    Vehicle sedan, coup, hatchbacks;
    cout << "Number of vehicle objects: " << hatchbacks.getCount() <<endl;
    return 0;
}