//demonstrates how to open, read, and write to a file.
#include <iostream>
#include <fstream> // Library needed to manage and edit files.
#include <string>

using namespace std;
void writeToFile(fstream &, string); // prototype function to write data to a file  
string readFromFile(fstream &, string);// prototype functionto read data from a file  

//main function  writes data to a a file then reads data from a file
int main(){
  fstream datafile; // creates a fstream variable needed to open a file
  string data;
  writeToFile(datafile, "DemoFile");  // DemoFile is the name of the file we want to use.
  data = readFromFile(datafile, "DemoFile");
  cout << data;
  datafile.close();
  return 0;
}

void writeToFile(fstream &doc, string title){
  doc.open(title, ios::out); // opens a file to write data to
  doc << "you_are_reading_this_from_a_file\n"; // writes data to file
  doc.close(); // closes file
}
string readFromFile(fstream &readFile,  string name){
  readFile.open(name, ios::in);// opens a file to read data from
  string content;
  readFile >> content; // stores data from file to variable
  return content;
}