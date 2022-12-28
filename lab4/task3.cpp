#include<iostream>
using namespace std;
void checkmarks(int number);
main(){
int number;
cout<< "Enter number : ";
cin >> number;
checkmarks(number);
}
void checkmarks(int number){
 if(number>=50){
  cout<< "Pass";
    }
  if(number<50){
  cout<<"Fail";
    } 
}
