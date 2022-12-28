#include<iostream>
using namespace std;
main()
{
int num1; 
cout << "Enter 4 digit number " ;
cin >> num1;
int mod1;
mod1 = (num1 % 10);
num1 = num1 / 10;
int mod2;
mod2 = (num1 % 10);
num1 = num1 / 10;
int mod3;
mod3 = (num1 % 10);
num1 = num1 / 10;
int mod4;
mod4 = (num1 % 10);
num1 = num1 / 10;
int result;
result = num1 + mod1 + mod2 + mod3 + mod4; 
cout << "The sum is: " << result;
 
}