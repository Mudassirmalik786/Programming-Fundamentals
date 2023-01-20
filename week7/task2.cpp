#include <iostream>
using namespace std;
int totalDigits(int number);
main()
{
    int number;
    cout << "Enter a number ";
    cin >> number;
    int result = totalDigits(number);
    cout << "Result is : " << result;
}
int totalDigits(int number)
{
    int count = 0;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}