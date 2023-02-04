#include <iostream>
#include <string>
using namespace std;
main()
{
    // program to remove vowels
    char name[50];
    cout << "Enter string to remove vowels : ";
    cin >> name;
    int i = 0, j;
    int count;
    while (name[i] != '\0')
    {
        count = 0;
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            j = i;
            while (name[j - 1] != '\0')
            {
                name[j] = name[j + 1];
                j++;
            }
            count = 1;
        }
        if (count == 0)
            i++;
    }
    cout << name;
    cout << endl;
}