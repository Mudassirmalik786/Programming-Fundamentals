#include <iostream>
using namespace std;
main()
{
    string name;
    getline(cin,name);
    int idx = 0;
    while(name[idx]!='\0')
    {
        idx++;
    }
    for(int i= idx ; i>=0 ; i--)
    {
        cout<<name[i];
    }
}