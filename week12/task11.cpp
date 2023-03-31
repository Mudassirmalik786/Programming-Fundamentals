#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string line;
    fstream file1;
    file1.open("names.txt", ios::in);
    while (!file1.eof())
    {
        getline(file1, line);
        cout << line << endl;
    }
    file1.close();
}