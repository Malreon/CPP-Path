//The purpose of this program is to demonstrate const variables and how they differ from normal variables
#include <iostream>

using namespace std;

// Main function demonstrates how const variables can not be modified after they have been initialized.
int main() {
	const int TEST = 100; // Const variables are defined by the "const" keyword placed before the variable declaration
	int value = 50; 	  // Regular variable

	value += value; // This is legal as value is not a const.
	TEST += TEST;  // This will result in an error as this line is attempting to modify a const variable after declaration.

	return 0;		
}