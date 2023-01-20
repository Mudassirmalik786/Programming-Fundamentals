#include<iostream>
using namespace std;
void printTable(int number);
main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    printTable(number);
}
void printTable(int number){
    for(int count = 1;count<=10;count++){
        int multiply = number * count;
        cout<<number<<" * "<< count << " = "<<multiply<<endl;
    }
}