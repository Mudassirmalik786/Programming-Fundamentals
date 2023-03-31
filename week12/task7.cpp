#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string line;
    fstream file;
    file.open("story.txt", ios::in);
    while (!file.eof())
    {
        getline(file, line);
        cout << "Lines written in files are: " << line;
    }
    file.close();
}