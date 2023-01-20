#include<iostream>
using namespace std;
int frequencyChecker(int number , int digit);
main(){
    int number;
    cout<<"Enter number : ";
    cin>>number;
    int digit;
    cout<<"Enter digit you want to check frequency : ";
    cin>>digit;
    int result = frequencyChecker(number , digit);
    cout<<"Result is : "<<result;
}
int frequencyChecker(int number , int digit){
    int count=0;
    while(number != 0){
        int n1 = number % 10;
        number=number / 10;
        if(n1 == digit){
        count++;
        }
    }
    return count;
}