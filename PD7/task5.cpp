#include<iostream>
using namespace std;
main(){
    int rows;
    cout<<"Enter a number : ";
    cin>>rows;
    int count = 0;
    for(int i = 1;i<=rows ; i++){
        for(int j = 1;j<=i;j++){
            count = count +1;
        }
    }
    cout<<count;
}