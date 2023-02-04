#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
main()
{
    string movies[5] = {"gladiators", "starwars", "terminator", "takinglives", "tombRider"};
    string found;
    cout << "Enter movie you want to watch : ";
    cin >> found;
    int price = 500;
    bool ifound = false;
    int save = 0;
    for (int i = 0; i < 5; i++)
    {
        if (found == movies[i])
        {
            if (i % 2 != 0)
            {
                ifound = true;
            }
        }
    }
    if (ifound == true)
    {
        cout << price - (price * 0.05)<<endl;
    }
    else
    {
        cout << price - (price * 0.1)<<endl;
    }
}