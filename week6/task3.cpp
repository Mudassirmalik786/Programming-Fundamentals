#include<iostream>
using namespace std;
int isEven(int number);
main(){
    int number;
    cout<<"enter number : ";
    cin>>number;
    int result = isEven(number);
    cout<<"result : "<<result;
}
int isEven(int number){
    int even = number % 2;
    string result;
    if(even == 0){
        result = "even";
    }
    if(even!=0)
    {
        result = "odd";
    }
    return even;
}
