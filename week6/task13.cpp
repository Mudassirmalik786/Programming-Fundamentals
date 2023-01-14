#include <iostream>
using namespace std;
float checkCost(string city, string product, float quantity);
int main()
{
string city , product;
float quantity;
cout<<"Enter city : ";
cin>>city;
cout<<"Enter product name : ";
cin>>product;
cout<<"Enter quantity of item you want to purchase : ";
cin>>quantity;
float result = checkCost(city , product , quantity);
cout<<"result is : " <<result;
}
float checkCost(string city, string product, float quantity)
{
    float result;
    if (city == "varna")
    {
        if (product == "coffee")
        {
            result = quantity * 0.45;
        }
        else if (product == "water")
        {
            result = quantity * 0.79;
        }
        else if (product == "beer")
        {
            result = quantity * 1.10;
        }
        else if (product == "sweets")
        {
            result = quantity * 1.35;
        }
        else if (product == "peanuts")
        {
            result = quantity * 1.55;
        }
    }
    if (city == "sofia")
    {
        if (product == "coffee")
        {
            result = quantity * 0.50;
        }
        else if (product == "water")
        {
            result = quantity * 0.80;
        }
        else if (product == "beer")
        {
            result = quantity * 1.20;
        }
        else if (product == "sweets")
        {
            result = quantity * 1.45;
        }
        else if (product == "peanuts")
        {
            result = quantity * 1.60;
        }
    }
    if (city == "plovdiv")
    {
        if (product == "coffee")
        {
            result = quantity * 0.40;
        }
        else if (product == "water")
        {
            result = quantity * 0.70;
        }
        else if (product == "beer")
        {
            result = quantity * 1.15;
        }
        else if (product == "sweets")
        {
            result = quantity * 1.30;
        }
        else if (product == "peanuts")
        {
            result = quantity * 1.50;
        }
    }
    return result;
}