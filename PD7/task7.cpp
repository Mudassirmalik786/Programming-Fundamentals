#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    float number;
    cout << "Enter number : ";
    cin >> number;
    int  number1;
    float count1 = 0 , count2 = 0, count3 = 0;
    for (int i = 1; i <= number; i++)
    {
        cout << "Enter number for " << i << "time ";
        cin >> number1;
        if (number1 % 2 == 0)
        {
            count1 = count1 + 1;
        }
        if (number1 % 3 == 0)
        {
            count2 = count2 + 1;
        }
        if (number1 % 4 == 0)
        {
            count3 = count3 + 1;
        }
    }
    cout << (count1 / number) * 100 << "%" << endl;
    cout << (count2 / number) * 100 << "%" << endl;
    cout << (count3 / number) * 100 << "%" << endl;
}