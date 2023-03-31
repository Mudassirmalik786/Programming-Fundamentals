#include <iostream>
using namespace std;
void arrayaverage(int array[], int arrSize)
{
    int sum = 0;
    for (int i = 0; i < arrSize; i++)
    {
        sum = sum + array[i];
    }
    int average = sum / arrSize;
    cout << "Average is: " << average;
}
main()
{
    int arrSize;
    cout << "Enter size of array: ";
    cin >> arrSize;
    int array[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cin >> array[i];
    }
    arrayaverage(array, arrSize);
}