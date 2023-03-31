#include <iostream>
using namespace std;

void passingtoFunction(int arr[][3], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        arr[i][i];
    }
}

main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    passingtoFunction(arr, 3);
    cout<<arr[0][0];
}