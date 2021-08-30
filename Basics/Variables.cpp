/* This program initializes and displays a variety of variables with 
 * different data types
 */
#include <iostream>
#include <string> // needed to use the String datatype

using namespace std;

int main(){
    int a = 12; //initializes an int variable with a value
    float b = 0.01226; //initializes an float variable with a value
    double c = 698.1254864; //initializes an double variable with a value
    char d = 'd'; //initializes an char variable with a value
    String e = "Hello world"; //initializes an string variable with a value
    bool f = 1; //initializes an bool variable with a value
    auto g = "an auto variable automatically determines what data type to assign itself" //initializes an auto variable with a value
    auto h = 15; //initializes an auto variable with a value
    auto i = 15.012345 //initializes an auto variable with a value

    cout << a << endl
         << b << endl
         << c << endl
         << d << endl
         << e << endl
         << f << endl
         << g << endl
         << h << endl
         << i << endl;

    return 0;
}