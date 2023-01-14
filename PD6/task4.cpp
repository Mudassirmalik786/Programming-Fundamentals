#include <iostream>
using namespace std;
int main()
{
    char type;
    cout << "Enter which type of cus you are (select(r/p)) : ";
    cin >> type;
    char time;
    cout << "Enter d or n for time : ";
    cin >> time;
    float number, number1;
    cout << "Enter number of mins you use service : ";
    cin >> number;
    if (type == 'r')
    {
        number1 = 10.00;
        if (number > 50)
        {
            number1 = number1 + (number * 0.20);
        }
    }
    if (type == 'p')
    {
        number1 = 25.00;
        if (time == 'd')
        {
            number1 = number1;
            if (number > 75)
            {
                number1 = number1 + (number * 0.10);
            }
        }
        if (time == 'n')
        {
            number1 = number1;
            if (number > 100)
            {
                number1 = number1 + (number * 0.05);
            }
        }
        cout << "The charges are : " << number1 << "$";
    }
}