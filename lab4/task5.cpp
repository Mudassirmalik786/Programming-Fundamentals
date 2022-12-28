#include<iostream>
using namespace std;
void add(float number1, float number2);
void multiply(float number1, float number2);
void divide(float number1, float number2);
void subtract(float number1, float number2);
main(){
while(true){
float number1,number2;
char operation;
  cout<<"enter 1st number : ";
  cin >> number1;
  cout<< "enter 2nd number: ";
  cin >> number2;
  cout<<"Enter operator(+,*,-,/) : ";
  cin>>operation;
if(operation == '+'){
   add( number1, number2);
  }
if(operation == '*'){
    multiply( number1, number2);
  }
if(operation == '/'){
    divide(number1,number2);
   }
if(operation == '-'){
   subtract(number1,number2);
   }
}
}
void add(float number1, float number2){
   float sum;
   sum = number1 + number2 ;
   cout<<"Sum is:"<<sum<<endl; 
   }
void multiply(float number1, float number2){
    float mul;
   mul = number1 * number2;
   cout<< "multiplication is :" << mul <<endl;
  }
void divide(float number1, float number2){
   float div;
   div = number1 / number2;
   cout<< "division is: "<<div<<endl;
   }
void subtract(float number1, float number2){
  float sub;
  sub = number1 - number2;
  cout<< "sub is: " <<sub <<endl;
  }
