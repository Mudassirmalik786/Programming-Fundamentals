#include<iostream>
using namespace std;
#include<cmath>
main(){
float a , b ,c ;
cout<<"Enter number 1 : ";
cin>>a;
cout<<"Enter numebr 2 : ";
cin>>b;
cout<<"Enter number 3 : ";
cin>>c;
float x1 = (-b + sqrt(b*b - 4*a*c)) / (2 * a);
cout<<"result is : "<<x1<<endl;
float x2 = (-b - sqrt(b*b - 4*a*c)) / (2 * a);
cout<<"result is: "<<x2<<endl;
}  
