#include <iostream>
#include <string>
#include <cmath>
using namespace std;
main()
{
    string name;
    int i = 0;
        cout << "Enter element : ";
        cin>>name;
    int count = 0;
    while (name[i] != '\0')
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            count++;
        }
        i++;
    }
    cout << "Number of vowels are " << count;
}