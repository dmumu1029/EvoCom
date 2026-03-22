#include <iostream>
using namespace std;

void swapFirstAndLast(int arr[], int size)
{
    if (size >= 2)
    {
        //copy first number into "temp"
        int temp = arr[0]; 
        
        //get the last number at put at first number pos (overwrite)
        arr[0] = arr[size - 1]; 
        
        //get the numbe in "temp" put at last number pos (overwrite)
        arr[size - 1] = temp; 
    }
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    //test data
    const int SIZE = 5;
    int testArray[SIZE] = {10, 20, 30, 40, 99}; 
    
    //before
    cout << "Original Array: ";
    printArray(testArray, SIZE);
    
    //swapper
    swapFirstAndLast(testArray, SIZE);
    
    //after
    cout << "Swapped Array:  ";
    printArray(testArray, SIZE);
    
    return 0;
}
