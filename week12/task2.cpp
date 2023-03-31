#include <iostream>
#include <fstream>
using namespace std;
main()
{
    char line;
    int count = 0;
    fstream file;
    file.open("TextFile.txt", ios::in);
    while (!file.eof())
    {
        file>>line;
        count++;
    }
    file.close();
    cout << "Total number of characters are: " << count;
}