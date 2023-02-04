#include <iostream>
using namespace std;
main()
{
    string name;
    getline(cin , name);
    int idx = 0;
    while(name[idx]!='\0'){
        cout<<name[idx] <<" is present in " << idx << " index "<<endl;
        idx++;
    }    
}

