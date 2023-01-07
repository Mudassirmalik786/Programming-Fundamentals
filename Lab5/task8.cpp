#include<iostream>
using namespace std;
float isTotal(float number);
main(){
float number;
cout<<"Enter number : ";
cin >>number;
float result = isTotal(number);
cout<<"The result is : "<<result;
}
float isTotal(float number){
float total = number  * 5;
return total;
}