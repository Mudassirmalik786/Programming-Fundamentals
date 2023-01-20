#include<iostream>
#include<windows.h>
using namespace std;
main(){
int number;
int sum = 0;
for(number = 1;number<=100;number++){
    sum = sum + number;
}
cout<<"Sum is : "<<sum;
}
