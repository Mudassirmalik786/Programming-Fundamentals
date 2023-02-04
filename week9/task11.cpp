#include<iostream>
using namespace std;
main(){
    int size , number;
    cout<<"Enter size of array : ";
    cin>>size;
    int numbers[size];
    for(int i =0 ; i<size ; i++){
        cout<<"Enter element : ";
        cin>>numbers[i];
    }
    cout<<"enter number : ";
    cin>>number;
    for(int i = 0;i<size ; i++){
        cout<<numbers[i] * number <<endl;
    }
}