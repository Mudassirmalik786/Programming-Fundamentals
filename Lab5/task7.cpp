#include<iostream>
#include<cmath>
using namespace std;
main(){
int number;
cout<<"Enter number : ";
cin>>number;
int mod1= number % 10;
number = number / 10;
int mod2 = number % 10;
number = number / 10;
int mod3 = number % 10;
number = number / 10;
int mod4 = number % 10;
number = number / 10;
int mod5 = number % 10;
number = number / 10;
int result = mod1 + mod2 + mod3 + mod4 + mod5;
cout<<" Sum is : "<<result<<endl;
  if(result%2==0){
  cout<<"Evenish"<<endl;
  }
  if(result%2!=0){
  cout<<"Oddish"<<endl;
  }
}
