#include <iostream>
using namespace std;
int main()
{
    double budget, budget1, budget2, budget3;
    string category;
    int people;
    cout << "what is the budget of people : ";
    cin >> budget;
    cout << "what is the category they buy ticket : ";
    cin >> category;
    cout << "Enter number of people in the group : ";
    cin >> people;
    if (people>=4)
    {
        budget1 = (budget * 75) / 100;
        budget2 = budget - budget1;
    }
    if (people > 4 && people <= 9)
    {
        budget1 = (budget * 60) / 100;
        budget2 = budget - budget1;
    }
    if (people > 9 && people <= 24)
    {
        budget1 = (budget * 50) / 100;
        budget2 = budget - budget1;
    }
    if (people > 24 && people <= 49)
    {
        budget1 = (budget * 40) / 100;
        budget2 = budget - budget1;
    }
    if (people >= 50)
    {
        budget1 = (budget * 25) / 100;
        budget2 = budget - budget1;
    }
    if (category == "normal")
    {
        budget3 = budget2 - (people * 249.99);
        if (budget3 > 0)
        {
            cout << "Yes! you have " << budget3 << " QR left";
        }
        if(budget3 < 0)
        {
            budget3 = people * 249.99 - budget2;
            cout << "Not enough money! you need " << budget3 << " QR";
        }
    }
    if (category == "vip")
    {
        budget3 = budget2 - (people * 499.99);
        if (budget3 > 0)
        {
            cout << "Yes! you have " << budget3 << " QR left";
        }
        if(budget3 < 0)
        {
            budget3 = people * 499.99 - budget2;
            cout << "Not enough money! you need " << budget3 << " QR";
        }
    }
}