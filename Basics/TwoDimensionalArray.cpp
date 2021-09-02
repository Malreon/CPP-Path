// This program demonstrates a two dimensional array
#include <iostream>

using namespace std;

// Main function holds a two dimensional array and display's its content 
int main() {
  const int ROW = 3;
  const int COLUMN = 3;
  int Array2D[ROW][COLUMN] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; //2D array
  for (int x = 0; x < ROW; x++){
    for (int y = 0; y < COLUMN; y++){
      cout << Array2D[x][y] << endl;
    }
  }    
	return 0;		
}