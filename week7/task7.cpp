#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    int age;
    cout << "Enter age : ";
    cin >> age;
    float priceofwashingmachine;
    cout << "Enter price of wasing machine : ";
    cin >> priceofwashingmachine;
    int priceoftoy;
    cout << "Enter unit price of toy : ";
    cin >> priceoftoy;
    int moneyforBirthday = 10;
    int savedMoney = 0;
    int numberOfToys = 0;
    for (int currentYear = 1; currentYear <= age; currentYear++)
    {
        if (currentYear % 2 == 0)
        {
            savedMoney = savedMoney + (moneyforBirthday - 1);
            moneyforBirthday = moneyforBirthday + 10;
        }
        else
        {
            numberOfToys++;
        }
    }
    savedMoney += numberOfToys * priceoftoy;
    if (savedMoney >= priceofwashingmachine)
    {
        cout << "Yes! " << endl<< savedMoney - priceofwashingmachine;
    }
    else
    {
        cout << "no!" << endl<< priceofwashingmachine - savedMoney;
    }
}