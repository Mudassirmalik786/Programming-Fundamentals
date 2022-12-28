#include<iostream>
using namespace std;
void checkmarks(float number);
main(){
float number;
cout<<"Enter marks";
cin>>number;
checkmarks(number);
}
void checkmarks(float number){
cout<<"Your marks are: "<<number;
}
