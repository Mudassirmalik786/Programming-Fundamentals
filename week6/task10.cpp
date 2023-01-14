#include <iostream>
#include<windows.h>
using namespace std;
int main()
{
    int number;
    cout<< "Enter cost of the dress : ";
    cin>> number;
    string brand;
    cout<< "Enter brand : ";
    cin>> brand;
    if (number < 1500)
    {
        if (brand == "mtjbrand")
        {
            cout<<"You should buy this dress";
        }
    }
}