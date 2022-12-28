#include<iostream>
using namespace std;
main()
{
int digit1,digit2,digit3,digit4,result;
cout<< "Enter 1st digit " ;
cin >> digit1;
cout << "enter 2nd digit ";
cin >> digit2;  
cout << "enter 3rd digit ";
cin >> digit3;
cout << "enter 4rth digit " ;
cin >> digit4;
result = (digit1 + digit3 ) + (digit2 * digit4);
cout << " the sum is: " << result;
}