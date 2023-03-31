#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string name[3];
    int count = 0;
    int rollno[3], percentage[3];
    fstream file;
    file.open("students.txt", ios::in);
    while (!file.eof())
    {
        file >> name[count] >> rollno[count] >> percentage[count];
        count++;
    }
    file.close();
    file.open("topperStudents.txt", ios::out);
    for(int x = 0;x<count ; x++)
    {
        file << "Name: " << name[x] << endl;
        file << "Roll no: " << rollno[x] << endl;
        file << "Percentage: " << percentage[x] << endl;
    }
    file.close();
}