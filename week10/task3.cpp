#include<iostream>
using namespace std;
main(){
    int size;
    cout<<"How many Elements you want to enter: ";
    cin>>size;
    int numbers[size];
    for(int i = 0;i<size;i++)
    {
        cout<<"Enter number "<<i+1<<" : ";
        cin>>numbers[i];
    }
    int count = 0;
    bool found = false;
    int i ;
    for(i =1;i<=size;i++)
    {
        if(numbers[i]>numbers[i+1] && numbers[i]>numbers[i-1])
        {
            count++;
        }
    }
    cout<<count;
}