#include <iostream>
using namespace std;
float ispayable(string day, string month, float amount);
main()
{
    string day, month;
    cout << "enter day : ";
    cin >> day;
    cout << "enter month : ";
    cin >> month;
    int amount;
    cout << "enter amount : ";
    cin >> amount;
    float payable = ispayable(day, month, amount);
    cout << "Result is : " << payable;
}
float ispayable(string day, string month, float amount)
{
    float payable = amount;
    if (day == "sunday")
    {
        if (month == "october" || month == "march" || month == "august")
        {
            payable = amount - (amount * 10) / 100;
        }
    }
    if (day == "monday")
    {
        if (month == "november" || month == "december")
        {
            payable = amount - (amount * 5) / 100;
        }
    }
    return payable;
}