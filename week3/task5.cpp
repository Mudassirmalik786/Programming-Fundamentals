#include<iostream>
using namespace std;
main()
{
float charge;
cout << " Enter charge : ";
cin >> charge;
float time;
cout << " Enter time : ";
cin >> time;
float current;
current = charge / time;
cout << "The current is : " << current; 
}