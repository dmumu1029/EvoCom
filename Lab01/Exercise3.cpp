#include <iostream>
using namespace std;

void findLargestAndSmallest(int arr[], int size)
{
    // safety check pray not empty
    if (size > 0)
    {
        // just put first number as largest and smallest (to compare)
        int largest = arr[0];
        int smallest = arr[0];
        
        // checker loop (checks each number)
        for(int i = 1; i < size; i++)
        {
            // if new number bigger than old number, new number is largest
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
            
            // same as largest but for smallest
            if (arr[i] < smallest)
            {
                smallest = arr[i];
            }
        }
        
        // show large and small
        cout << "The largest element is: " << largest << endl;
        cout << "The smallest element is: " << smallest << endl;
    }
}

int main()
{
    // test numbers
    const int SIZE = 6;
    int testArray[SIZE] = {42, 15, 88, 3, 71, 29};
    
    // show array values (all the number in it)
    cout << "Array: ";
    for(int i = 0; i < SIZE; i++)
    {
        cout << testArray[i] << " ";
    }
    cout << endl;
    
    // the finder
    findLargestAndSmallest(testArray, SIZE);
    
    return 0;
}
