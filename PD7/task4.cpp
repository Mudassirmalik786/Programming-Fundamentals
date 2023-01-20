#include<iostream>
#include<windows.h>
using namespace std;
main(){
    int amplify;
    cout<<"Enter a number : ";
    cin>>amplify;
    for(int i=1;i<=amplify ; i++){
        if(i % 4 == 0){
            cout<<i * 10<<",";
        }
        else
        {
            cout<<i<<",";
        }
    }
}