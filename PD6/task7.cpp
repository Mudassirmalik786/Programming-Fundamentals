#include <iostream>
using namespace std;
int main()
{
    int hours, min, hours1, min1, maintotal1, maintotal2, maintotal3, maintotal4, maintotal5;
    cout << "Enter exam starting time(hours) : ";
    cin >> hours;
    cout << "Enter exam starting time(minutes) : ";
    cin >> min;
    cout << "Student hour of arrival : ";
    cin >> hours1;
    cout << "Student minutes of arrival : ";
    cin >> min1;
    int convertmin = hours * 60;
    int total1 = convertmin + min;
    int convertmin1 = hours1 * 60;
    int total2 = convertmin1 + min1;
    if (total1 > total2)
    {
        maintotal1 = total1 - total2;
        cout << "Early" << endl;
        if (maintotal1 >= 60)
        {
            maintotal4 = maintotal1 / 60;
            maintotal3 = maintotal4 * 60;
            maintotal5 = maintotal1 - maintotal3;
            cout << maintotal4 << ":" << maintotal5 << " hours before the start";
            return 0;
        }
        cout << maintotal1 << "  minutes before the start";
    }
    if (total1 < total2)
    {
        maintotal2 = total2 - total1;
        cout << "Late " << endl;
        if (maintotal2 >= 60)
        {
            maintotal4 = maintotal2 / 60;
            maintotal3 = maintotal4 * 60;
            maintotal5 = maintotal2 - maintotal3;
            cout << maintotal4 << ":" << maintotal5 << "hours after the start";
            return 0;
        }
        cout << maintotal2 << " minutes after the start ";
    }
    if (total1 == total2)
    {
        cout << "On time : ";
    }
}