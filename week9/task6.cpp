#include <iostream>
using namespace std;
main()
{
    string name;
    getline(cin,name);
    char ch;
    cout<<"Enter character : ";
    cin>>ch;
    int idx = 0;
    while(name[idx]!='\0')
    {
        idx++;
    }
    if(name[idx - 1]==ch)
        {
            cout<<"True";
        }
        else{
            cout<<"False";
        }
}