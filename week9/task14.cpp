#include<iostream>
using namespace std;
main(){
    int array1[2] = {1,10};
    int size1;
    cout<<"Enter size of array 1 : ";
    cin>>size1;
    int size2;
    cout<<"Enter size of array 2 : ";
    cin>>size2;
    int array2[size2];
    for(int i=0 ; i<size1 ;i++){
        cout<<"Enter element : ";
        cin>>array2[i];
    }
    for(int i = 0 ; i<size1 ; i++){
        cout<<array2[i]<<" , ";
    }
    cout<<array1[size2]<<",";
}