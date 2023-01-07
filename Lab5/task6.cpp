#include<iostream>
#include<cmath>
using namespace std;
main(){
int number;
cout<<"Enter number : ";
cin>>number;
int a = number % 10;
int b = number / 100;
   if(a ==  b){
   cout<<"number is symmetric";
    }
   if(a!=b){
   cout<<"number is not symmetric " ;
   }
}
