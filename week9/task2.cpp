#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter array size : ";
    cin >> size;
    int array[size];
    int sum = 0;
    float average = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "enter element : ";
        cin >> array[i];
        sum = sum + array[i];
    }
    cout << " sum is : " << sum << endl;
    average = sum / size;
    cout << "average is : " << average;
}