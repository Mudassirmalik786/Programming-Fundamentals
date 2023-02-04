#include <iostream>
#include<string>
#include <conio.h>
using namespace std;
main()
{
    string fruit[5] = {"peach", "apple", "guava", "watermelon"};
    int price[5] = {60, 70, 40, 30};
    string foundName;
    cout << "Enter fruit name you want to find : ";
    cin >> foundName;
    int quantity;
    cout << "Enter kg you want to buy : ";
    cin >> quantity;
    bool found = false;
    int i;
    for ( i = 0; i < 4; i++)
    {
        if (foundName == fruit[i])
        {
            found = true;
            break;
        }
    }
    if(found == true){
        cout << fruit[i] << "\t" << price[i] * quantity;
    }
    else
    {
        cout<<"Not Found !!";
    }
}