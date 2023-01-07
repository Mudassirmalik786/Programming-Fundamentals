#include<iostream>
using namespace std;
float division(float number1 , float number2);
int add(float number1,float number2);
main(){
float number1,number2,result1;
float result2;
cout<<"Enetr number 1 : ";
cin>>number1;
cout<<"enter number 2 : ";
cin>>number2;
result1 = add(number1 , number2);
cout<<"sum is: "<<result1<<endl;
result2 = division( number1 , number2);
cout<<"division is: "<<result2<<endl;
}
int add(float number1,float number2){
int sum = number1 + number2;
return sum;
}
float division(float number1 , float number2){
float div = number1 / number2;
return div;
}