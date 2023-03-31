#include<iostream>
using namespace std;
main(){
    int size;
    cout<<"How much numbers do you want to enter: ";
    cin>>size;
    int miles[size];
    for(int i =0;i<size ; i++){
        cout<<"Enter no. of miles: ";
        cin>>miles[i];
    }
    int count = -1;
    
    for(int i =0;i<size;i++)
    {
        if(miles[i+1]>miles[i]){
            count++;
        }
    }
    cout<<count;
}