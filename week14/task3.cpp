#include <iostream>
using namespace std;
void arraymerge(int array1[], int array2[], int arrSize1, int arrSize2, int array3[])
{
    for (int i = 0; i < arrSize1; i++)
    {
        array3[i] = array1[i];
    }
    for (int i = 0; i < arrSize2; i++)
    {
        array3[i+1] = array2[i];
    }
    for (int i = 0; i < arrSize1 + arrSize2; i++)
    {
        cout << array3[i] << ",";
    }
}

main()
{
    int arrSize1 = 3;
    int arrSize2 = 3;
    int array1[3] = {1, 2, 3};
    int array2[3] = {4, 5, 6};
    int totalSize = arrSize1 + arrSize2;
    int array3[totalSize];
    arraymerge(array1, array2, arrSize1, arrSize2, array3);
}