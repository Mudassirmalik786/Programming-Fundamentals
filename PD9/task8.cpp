#include <iostream>
#include<string>
using namespace std;
main()
{
    int size;
    cout << "Enter number of colours: ";
    cin >> size;
    int switch1 = 0;
    string cols[size];
    int colors = 2 * size;
    int i , x = 0;
    string save[size];
    for (i = 0; i < size&& x<size; i++ , x++)
    {
        cout << "Enter colours: ";
        cin >> cols[i];
    }
    for (int i = 0; i < size; i++)
    {
            if (cols[i] != cols[i+1])
            {
                switch1++;
                
            }
            else
            {
                switch1 = switch1;
            }
    }
    switch1--;
    cout << switch1 + colors;
}