#include<iostream>
using namespace std;
int digitSum(int number);
main(){
int number ;
cout<<"Enter a number : ";
cin >> number;
int result = digitSum(number);
cout<<"Result is : "<<result;
}
int digitSum(int number){
int sum = 0;
while(number!=0){
    int mod1 = number % 10;
    number = number / 10;
    sum = sum + mod1;	
}
return sum;
}