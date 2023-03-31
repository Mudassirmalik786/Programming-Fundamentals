#include <iostream>
#include <fstream>
using namespace std;
main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    float number1;
    cout << "enter decimal number: ";
    cin >> number1;
    char character;
    cout << "Enter any character: ";
    cin >> character;
    fstream file;
    file.open("File.txt", ios::out);
    file << number << endl;
    file << number1 << endl;
    file << character;
    file.close();
}