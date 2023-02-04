#include<iostream>
#include<string>
using namespace std;
main()
{
    string name = {"something"};
    string argument;
    cout<<"Enter : ";
    getline(cin , argument);
    cout<<name << " " << argument ;
    return 0;
}