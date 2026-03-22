#include <iostream>
using namespace std;

// not int because we need to return 1 and 0
int searchArray(int arr[], int size, int target)
{
    // just loop check by check
    for(int i = 0; i < size; i++)
    {
        // compare the number in array with with our target number
        if (arr[i] == target)
        {
            return 1; // if yes then return 1
        }
    }
    
    return 0;  //if not return 0
}

int main()
{

    // test data again
    const int SIZE = 7;
    int testArray[SIZE] = {12, 34, 56, 78, 90, 11, 23};
    
    // set a target number (is in the array test)
    int target1 = 78;
    //check and put in result1 (check in testArray, what size and whats our traget)
    int result1 = searchArray(testArray, SIZE, target1);
    
    // same but different target (not in array)
    int target2 = 99;
    int result2 = searchArray(testArray, SIZE, target2);
    
    // show 
    cout << "Searching for " << target1 << "    Result: " << result1 << endl;
    cout << "Searching for " << target2 << "    Result: " << result2 << endl;
    
    return 0;
}
