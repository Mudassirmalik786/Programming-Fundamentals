#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;
main()
{
    int hours, days, numofWorkers;
    cout << "Enter needed hours(0 to 200000) : ";
    cin >> hours;
    cout << "Enter required days(0 to 20000) : ";
    cin >> days;
    cout << "Enter number of workers that are working(0 to 200) : ";
    cin >> numofWorkers;
    int days1 = days - (days * 10) / 100;
    int hours1 = days1 * 9 * numofWorkers;
    int hoursLeft = hours1 - hours;
    int hoursNeeded = hours - hours1;
    if (hours1 >= hours)
    {
        cout << "Yes! " << hoursLeft << " Hours left ";
    }
    if (hours1 < hours)
    {
        cout << "No! " << hoursNeeded << " Hours needed ";
    }
}