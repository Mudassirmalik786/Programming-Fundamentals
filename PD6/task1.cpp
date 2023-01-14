#include <iostream>
using namespace std;
int main()
{
    string temperature, humid;
    cout << "Enter temperature : ";
    cin >> temperature;
    cout << "enter humidity : ";
    cin >> humid;
    if (temperature == "warm")
    {
        if (humid == "dry")
        {
            cout << "Play tennis";
        }
        if (humid == "humid")
        {
            cout << "swim";
        }
    }
    if (temperature == "cold")
    {
        if (humid == "dry")
        {
            cout << "Play basketball";
        }
        if (humid == "humid")
        {
            cout << "Watch TV ";
        }
    }
}