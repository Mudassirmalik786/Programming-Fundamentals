#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "day = ";
    cin >> day;
    string month;
    cout << "Month = ";
    cin >> month;
    string zodiac;
    if ((day >= 21 && day <= 31) || (day >= 1 && day <= 19))
    {
        if (month == "march" || month == "april")
        {
            cout << "your zodiac sign is : Aries";
        }
    }
    if ((day >= 20 && day <= 30) || (day >= 1 && day <= 20))
    {
        if (month == "april" || month == "may")
        {
            cout << "your zodiac sign is : Taurus";
        }
    }
    if ((day >= 21 && day <= 30) || (day >= 1 && day <= 20))
    {
        if (month == "may" || month == "june")
        {
            cout << "your zodiac sign is : Gemini";
        }
    }
    if ((day >= 21 && day <= 30 || day >= 1 && day <= 22))
    {
        if (month == "june" || month == "july")
        {
            cout << "your zodiac sign is : Cancer";
        }
    }
    if ((day >= 23 && day <= 30) || (day >= 1 && day <= 22))
    {
        if (month == "july" || month == "august")
        {
            cout << "your zodiac sign is : Leo";
        }
    }
    if (day >= 23 && day <= 30 || day >= 1 && day <= 22)
    {
        if (month == "august" || month == "september")
        {
            cout << "your zodiac sign is : Virgo";
        }
    }
    if ((day >= 23 && day <= 30) || (day >= 1 && day <= 22))
    {
        if (month == "september" || month == "october")
        {
            cout << "your zodiac sign is : Libra";
        }
    }
    if (day >= 23 || day <= 21)
    {
        if (month == "october" || month == "november")
        {
            cout << "your zodiac sign is : Scorpio";
        }
    }
    if (day >= 22 || day <= 21)
    {
        if (month == "november" || month == "december")
        {
            cout << "your zodiac sign is : Saggitarius";
        }
    }
    if (day >= 22 || day <= 19)
    {
        if (month == "december" || month == "january")
        {
            cout << "your zodiac sign is : Capricon";
        }
    }
    if (day >= 20 || day <= 18)
    {
        if (month == "january" || month == "february")
        {
            cout << "your zodiac sign is : Aquarius";
        }
    }
    if (day >= 19 || day <= 20)
    {
        if (month == "february" || month == "march")
        {
            cout << "your zodiac sign is : Pisces";
        }
    }
}
