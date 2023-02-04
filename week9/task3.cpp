#include <iostream>
using namespace std;
main(){
    string word;
    char letter;
    bool found = false;
    cout<<"Enter word : ";
    getline(cin , word);
    cout<<"Enter character : ";
    cin>>letter;
    int idx = 0;
    while(word[idx]!='\0')
    {
        if(word[idx] == letter)
        {
            found = true;
            break; 
        }
        idx++;
    }
    if(found == true)
    {
        cout<<letter << " exist in the "<<word;
    }
    if(found == false)
    {
        cout<<letter << " does not exist in the "<<word;
    }
}