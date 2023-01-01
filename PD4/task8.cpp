#include<iostream>
using namespace std;
void isEqual(float num1, float num2);
main(){
float num1,num2;
cout<<"Enter 1st number : ";
cin>> num1;
cout<<"Enter 2nd number : ";
cin>>num2;
isEqual(num1,num2);
}
void isEqual(float num1 , float num2)
{
   if(num1==num2)
    {
    cout<<"True";
    }
   if(num1!=num2)
    {
    cout<<"False";
    }
}