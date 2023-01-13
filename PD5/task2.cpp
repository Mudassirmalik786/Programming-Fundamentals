#include<iostream>
using namespace std;
main(){
float length , width , height;
cout<<"Enter length : ";
cin>>length;
cout<<"Enter wigth : ";
cin>>width;
cout<<"Enter height : ";
cin>>height;
string unit;
cout<<"Enter unit in which you get the answer : ";
cin>>unit;
float result = (length * width * height) / 3;
    if(unit == "millimeters"){
    float millimeter = result * 1000 * 1000 * 1000;
    cout<<"The answer in cubic millimeters is : " <<millimeter;
    }
    if(unit == "centimeters"){
    double centimeter = result * 100 * 100 * 100;
    cout<<"The answer in cubic centimeters is : "<<centimeter;
    }
    if(unit == "meters"){
    float meter = result;
    cout<<"The answer in cubic meters is : "<<meter;
    }
    if(unit == "kilometers")
    {
      float kilometer = result / (1000 * 1000 * 1000);
      cout<<"The answer in cubic kilometers is : " <<kilometer;
    }
}