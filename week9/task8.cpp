#include<iostream>
using namespace std;
main()
{
    string name;
    getline(cin , name);
    int length = name . length();
    cout<<"Length of name is : "<<length<<endl;
    if(length %2 == 0){
        cout<<"Even"<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }
}