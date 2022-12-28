#include<iostream>
using namespace std;
main()
{
int birthmonth , birthyear , currentmonth , currentyear, agem , agey ;
cout << "Enter your birth month ";
cin >> birthmonth;
cout << "Enter your birth year ";
cin >> birthyear;
cout << "Enter current month " ;
cin >> currentmonth;
cout << "Enter current year ";
cin >> currentyear;
agey = currentyear - birthyear ;
agem = agey * 12;
cout << "The age in years is : " << agey << endl;
cout << "The age in months is :  " << agem << endl ;

}