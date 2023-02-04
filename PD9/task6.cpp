#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int transformation;
    cout << "Enter transformation you need : ";
    cin >> transformation;
    int array[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter array : ";
        cin >> array[i];
        for (int x = 0; x < transformation; x++)
        {
            if (array[i] % 2 == 0)
            {
                array[i] = array[i] - 2;
            }
            else
            {
                array[i] = array[i] + 2;
            }
        }
    }
    for (int i = 0; i < 3; i++)
        cout << array[i]<<",";
}