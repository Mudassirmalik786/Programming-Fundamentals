#include<iostream>
using namespace std;
void checkIfEven(int number);
main(){
int number;
cout<< "Enter number : ";
cin>>number;
checkIfEven(number);
}
void checkIfEven(int number){
  if(number%2==0){
  cout<<"Number is Even " << number;
   }
   if(number%2!=0){
  cout<<"Number is odd " << number;
   } 
}