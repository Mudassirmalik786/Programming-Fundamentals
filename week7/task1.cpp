#include <iostream>
#include<windows.h>
using namespace std;
void printn(int number);
main()
{
    int number;
    cout<<"number";
    cin>>number;
    number = number - 2;
printn(number);
}
void printn(int number){
    int previous = 0;
    int current = 1 ; 
    int next;
    cout<< "Series is "<<previous << " "<<current<<" ";
    for(int n = 0 ; n<=number;n++){
    next = previous + current;
    cout<<next<<" ";
    previous = current;
    current = next;
    }
}