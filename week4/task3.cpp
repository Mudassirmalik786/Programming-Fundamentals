#include<iostream>
using namespace std;
main()
{
float initialVelocity;
cout << "Enter Initial Velocity : ";
cin >> initialVelocity;
float acceleration;
cout << "Enter Acceleration : ";
cin >> acceleration;
float time;
cout<< "Enter Time: ";
cin >> time;
float finalVelocity;
finalVelocity = (acceleration * time) + initialVelocity ;
cout << "The Final Velocity : " << finalVelocity;
}