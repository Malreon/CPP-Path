//demonstration of macros
#include <iostream>
//macros are a preproccesor directive so they require the "#" keyword
#define PI 3.14 //macros are first defined using the #define statement followed by the name of the macro and a function or data
#define MaintoMacroDefine int //you can make macros with data types so they have be defined later
#define END  cout << "end of program\n"

using namespace std;
//main function calls macros
int main(int argc, char **argv){
     cout << PI << endl;
     MaintoMacroDefine example = 10;
     cout << example << endl;
     END;

    return 0;
}