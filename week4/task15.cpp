#include<iostream>
using namespace std;
main()
{
int num1 , num2;
cout<< "Enter 1st number";
cin>> num1;
cout <<"Enter 2nd number";
cin>> num2;
int sum,sub,div,mul,mod;
sum = num1 + num2;
cout<< "The sum is : " << sum << endl;
sub = num1 - num2;
cout << "The subtraction is : " << sub << endl;
div = num1 / num2;
cout<< " the div is: " <<div<<endl ;
mul = num1 * num2;
cout << "the multipication is : " << mul << endl;
mod = num1 % num2 ; 
cout << "the remainder is: " << mod << endl;
}