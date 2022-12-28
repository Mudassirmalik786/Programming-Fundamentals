#include<iostream>
using namespace std;
main()
{
string name;
cout << "Enter movie name : ";
cin >> name;
int adultticketPrice;
cout << "Enter Adult Ticket Price : " ;
cin >> adultticketPrice;
int childticketPrice;
cout<< "Enter Child Ticket Price : ";
cin >> childticketPrice;
int ats;
cout<< "Enter Number of adult tickets sold : ";
cin >> ats;
int cts;
cout<< "Enter Number of Child tickets sold : ";
cin >> cts;
int percentage;
cout << "Enter percentage to donate : ";
cin >> percentage;
int totaltickets = (adultticketPrice * ats) + (childticketPrice * cts);
cout << "Total amount generated " << totaltickets << endl;
float afd;
afd = (totaltickets * percentage) / 100;
float aad;
aad = totaltickets - afd;
cout << "Amount After Donation : " << aad;

}