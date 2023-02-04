#include<iostream>
using namespace std;
main(){
    int size;
    cout<<"enter size of array : ";
    cin>>size ;
    float resistors[size];
    float sum;
    for(int i =0 ; i<size ; i++){
        cout<<"Enter resistor "<< i + 1 << " value : ";
        cin>>resistors[i];
        sum = sum + resistors[i];
    }
    cout<<sum<<" Ohms";
}