#include <iostream>
using namespace std;

// 1. Create a global variable 2 dimensional array with ROW=3 and COL=5
const int ROW = 3;
const int COL = 5;
int array2D[ROW][COL];

// 2. Create a function to initialize the array
void initArray2D()
{
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            array2D[i][j] = 1; // Put 1 in all columns
        }
    }
}

// 4. Create a function to print the array in a nice table format
void printArray2D()
{
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            cout << array2D[i][j] << "\t";
        }
        cout << endl; 
    }
}

int main()
{
    // 3. Call this function from main
    initArray2D();
    
    // 5. Call this function from main
    printArray2D();
    
    return 0;
}
