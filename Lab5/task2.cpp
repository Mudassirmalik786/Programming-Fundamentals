#include<iostream>
#include<cmath>
using namespace std;
main(){
int number1, number2;
cout<<"Enter number1 : ";
cin>>number1;
cout<<" Enter number 2: ";
cin>>number2;
int result1 = min(number1, number2);
cout<< result1 <<" is minimum"<<endl;
int result2 = pow(number1 , number2);
cout<< result2 << " is power of these two numbers "<<endl;
float result3 = cbrt(number1);
cout<< result3 << " is cube root " <<endl;
}