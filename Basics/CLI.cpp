//program allows you to pass values to the main function using the command line interface.
//open command line prompt > copy and paste the programs .exe file path > enter other values and press enter
#include <iostream>
using namespace std;

//argc (ARGument Count) is an int variable and stores the number of command line arguments passed by the user(including the name of the program) 
//argv(ARGument Vector) is an array of character pointers listing arguments
int main(int argc, char** argv)
{
	cout << "You have entered " << argc
		 << " arguments:" << "\n";

	for (int i = 0; i < argc; ++i) {
		cout << argv[i] << "\n";
	}
	return 0;
}