/*  This program displayes different data types
 *  and their sizes
 */
#include <iostream>

using namespace std;

// Main function displays the size of different data types in bytes.
int main(){
    cout << "The size of char : "                   << sizeof(char) << "  bytes" << endl
         << "The size of float: "                   << sizeof(float) << "  bytes" << endl
         << "The size of double: "                  << sizeof(double) << "  bytes" << endl
         << "The size of wchar_t: "                  << sizeof(wchar_t) << "  bytes" << endl
         << "The size of int: "                     << sizeof(int) << "  bytes" << endl // has a range from -2,147,483,648 to 
                                                                                        //                  +2,147,483,647
         << "The size of short int: "               << sizeof(short int) << "  bytes" << endl // has a range from -32,768 to 
                                                                                              //                  +32,767
         << "The size of unsigned short int: "      << sizeof(unsigned short int) << "  bytes" << endl // has a range from 0 to +65,535
         << "The size of unsigned int: "            << sizeof(unsigned int) << "  bytes" << endl // has a range from -0 to 4,294,967,295
         << "The size of long int: "                << sizeof(long int) << "  bytes" << endl // has a range from -2,147,483,648 to
                                                                                             //                  +2,147,483,647
         << "The size of unsigned long int: "       << sizeof(unsigned long int) << "  bytes" << endl // has a range from 0 to 4,294,967,295
         << "The size of long long int: "           << sizeof(long long int) << "  bytes" << endl // Has a range from -9,223,372,036,854,775,808 to
                                                                                                  //                  +9,223,372,036,854,775,807
         << "The size of unsigned long long int : " << sizeof(unsigned long long int ) << "  bytes" << endl; // has a range from 0 to 18,446,744,073,709,551,615
    return 0;
}