#include<iostream>
using namespace std;
main()
{
    int arrSize ;
    cout<<"Enter array size : ";
    cin>>arrSize;
    int number[arrSize];
    for(int i = 0 ; i<arrSize ; i++)
    {
        cin>> number[i];
    }
    for(int i = 0 ; i<arrSize ; i++)
    {
        cout<<"The number on "<<i + 1<< " position is : "<<number[i] << endl;
    }
}