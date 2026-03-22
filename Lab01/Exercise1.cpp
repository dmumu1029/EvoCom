#include <iostream>
using namespace std;

const int COLUMN = 4;

void findSumAndAverage(int arr[])
{
    int sum = 0;
    
    //sum
    for(int i = 0; i < COLUMN; i++)
    {
        sum += arr[i];
    }
    
    //average
    double average = (double)sum / COLUMN;
    
    //display
    cout << "Array elements: ";
    for(int i = 0; i < COLUMN; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
}

int main()
{
    //testing
    int testArray[COLUMN] = {5, 10, 15, 22};
    findSumAndAverage(testArray);
    
    return 0;
}
