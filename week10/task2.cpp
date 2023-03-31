#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "How many words do you want to enter: ";
    cin >> size;
    string qoute[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter word " << i << ": ";
        cin >> qoute[i];
    }
    char found;
    cout << "Enter character You want to count: ";
    cin >> found;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        string data = qoute[i];
        for (int x = 0; data[x] != '\0'; x++)
        {
            if (found == data[x])
            {
                count++;
            }
        }
    }
    cout << found << " shows up " << count << " times in data!";
}