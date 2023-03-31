#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string character;
    int count = 0;
    fstream file;
    file.open("story.txt", ios::in);
    while (!file.eof())
    {
        file >> character[count];
        if (character[count] == ' ')
        {
            if (character[count] < 4)
            {
                cout << character[count];
                count++;
            }
        }
    }
    file.close();
}