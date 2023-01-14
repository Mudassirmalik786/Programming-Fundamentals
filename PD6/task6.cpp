#include <iostream>
using namespace std;
int main()
{
    string month;
    float stay;
    cout << "Enter month";
    cin >> month;
    cout << "Enter no. of days stayed ";
    cin >> stay;
    float studio, apartment;
    if (month == "may" || month == "october")
    {
        apartment = stay * 65;
        studio = stay * 50;
        if (stay > 14)
        {
            studio = studio - (studio * 0.3);
            apartment = apartment - (apartment * 0.1);
        }
        else if (stay > 7)
        {
            studio = studio - (studio * 0.05);
        }
    }
    if(month == "june" || month == "september"){
        studio = stay * 75.20 ;
        apartment = stay * 68.70;
        if(stay>14){
            studio = studio - (studio * 0.2);
            apartment = apartment - (apartment * 0.1);
        }
    }
    if(month == "july" || month == "august"){
        studio = stay * 76;
        apartment = stay * 77;
        if(stay > 14){
            apartment = apartment - (apartment * 0.1);
        }
    }
    cout<<"The value of studio is : "<<studio<<"$"<<endl;
    cout<<"The value of aprtment is : "<<apartment<<"$"<<endl;
}