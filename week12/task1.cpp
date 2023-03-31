#include <fstream>
#include <iostream>
using namespace std;
main()
{
    string line;
    int count = 0;
    fstream file;
    file.open("TextFile.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
        count++;
    }
    file.close();
    cout << "Total number of line in file is: " << count;
}