#include <iostream>
#include <string>
using namespace std;
main()
{
    string name;
    cout << "enter string : ";
    getline(cin, name);
    int ilength = name.length();
    if (ilength % 2 == 0)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}