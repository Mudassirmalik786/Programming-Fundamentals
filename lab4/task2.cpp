#include<iostream>
using namespace std;
void displayadd(int num1,int num2);
main(){
int num1,num2;
cout<< "Enter num 1: " ;
cin >>num1; 
cout<< "Enter num2 : ";
cin >>num2;
displayadd(num1,num2);
}
void displayadd(int num1,int num2){
int sum;
sum = num1 + num2;
cout << "sum is : " << sum;
}