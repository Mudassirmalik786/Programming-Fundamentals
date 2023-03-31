#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string line;
    int count = 0;
    fstream file;
    file.open("story.txt", ios::in);
    while (!file.eof())
    {
        getline(file,line);
        if (line[0] != 'T')
        {
            count++;
        }
    }
    file.close();
    cout<<"The total number of lines that don't start with T are: "<<count;
}