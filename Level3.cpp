#include <iostream>
using namespace std;

// 1. Create a global variable 1 dimensional array with COL=5
const int COL = 5; 
int array1D[COL];  

// 2. Create a function to initialize the array
void initArray1D() 
{
    for(int i = 0; i < COL; i++) 
    {
        array1D[i] = 1; // Put 1 in all columns
    }
}

// 4. Create a function to print the array in one line
void printArray1D() 
{
    for(int i = 0; i < COL; i++) 
    {
        cout << array1D[i] << " ";
    }
    cout << endl; 
}

int main() 
{ 
    // 3. Call this function from main
    initArray1D();
    
    // 5. Call this function from main
    printArray1D();
    
    return 0;
}
