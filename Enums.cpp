//demonstrates enums
#include<iostream>

using namespace std;

//auto increments and first variable starts at 0 or you can set the first value
enum DayoftheWeek{
    MONDAY = 10,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main(){
    int myAttributes = SATURDAY;

    cout<< myAttributes <<endl;
    return 0;
}