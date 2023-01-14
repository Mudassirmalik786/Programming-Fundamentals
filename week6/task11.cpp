#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    string are;
    cout << "Are the class today : ";
    cin >> are;
    string friends;
    cout << "Are your friends go today : ";
    cin >> friends;
    if (are == "yes")
    {
        if (friends == "yes")
        {
            cout << "You should go to the university ";
        }
        else{
            cout<<"You should not go to the university ";
        }
    }
    else{
        cout<<"You should not go to the university ";
    }
}