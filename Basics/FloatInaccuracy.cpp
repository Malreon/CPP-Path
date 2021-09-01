//The purpose of this program is to demonstrate how floating point variables can be innaccurate 
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float valueOne = 0.37,
		  valueTwo = 0.72,
		  valueThree = valueOne + valueTwo;
	cout <<  valueThree << endl; // on its own it's seems that valueThree's output is accurate 
	cout << setprecision(25) << valueThree << endl; // but if we increase the precision, it tells us a different story.
	return 0;
		
}