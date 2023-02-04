#include <iostream>
#include <string>
using namespace std;
main()
{
    string check[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "enter symbols : ";
        cin >> check[i];
    }
    if (check[0] == check[1] && check[0] == check[2] && check[0] == check[3])
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}