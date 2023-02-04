#include <iostream>
using namespace std;
main()
{
    string s1;
    string s2;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element for 1st array: ";
        cin >> s1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element for 2nd array:  ";
        cin >> s2[i];
    }
    int save = 0;
    for (int i = 0; i < 5; i++)
    {
        s1[i];
        for (int x = 0; x < 5; x++)
        {
            if (s1[i] == s2[x])
            {
                save = x + 1;
            }
        }
    }
    cout << save;
}