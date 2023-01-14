#include <iostream>
#include <windows.h>
using namespace std;
bool equalNumber(int x , int y , int z);
int main()
{
    int x,y,z;
    cout<<"enter first number : ";
    cin >> x;
    cout<<"Enter second number : ";
    cin>>y;
    cout<<"Enter third number : ";
    cin>>z;
    equalNumber(x,y,z);
}
bool equalNumber(int x , int y , int z){
    if(x==y && x == z ){
        cout <<" numbers are equal ";
    }
    else{
        cout<<"Numbers are not equal";
    }
}