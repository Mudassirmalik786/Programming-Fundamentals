#include<iostream>
using namespace std;
float isGreater(int num1 , int num2 , int num3);
main(){
float greatest = isGreater(1 , 2 , 3);
cout<<greatest;
}
float isGreater(int num1 , int num2 , int num3){
    float greatest;
    if(num1 > num2 && num1 > num3){
        greatest = num1;
    }
    if(num2 > num1 && num2 > num3){
        greatest = num3;
    }
    if(num3>num1 && num3>num2){
        greatest = num3;
    }
    return greatest;
} 
