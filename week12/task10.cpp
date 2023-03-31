#include <fstream>
#include <iostream>
using namespace std;
main()
{
    string name[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i + 1 << " name: ";
        cin >> name[i];
    }
    fstream file;
    file.open("names.txt", ios::out);
    for (int i = 0; i < 5; i++)
    {
        file << name[i];
        file << "\n";
    }
    file.close();
}