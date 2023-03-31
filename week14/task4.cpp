#include <iostream>
using namespace std;

void arrayrotation(int array[], int arrSize, int rotation)
{
    int number[rotation];
    for (int i = 0; i < rotation; i++)
    {
        number[i] = array[i];
    }
    for (int i = 3; i < arrSize; i++)
    {
        cout << array[i] << ",";
    }
    for (int i = 0; i < rotation; i++)
    {
        cout << number[i] ",";
    }
}

main()
{
    int arrSize = 9;
    int rotation;
    cout << "Enter numbers you want to rotate: ";
    cin >> rotation;
    int array[arrSize] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    arrayrotation(array, arrSize, rotation);
}