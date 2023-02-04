#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter array size : ";
    cin>>size;
    int numbers[size];
    int i;
    for(i=0 ; i<size ; i++){
        cout<<"enter element ";
        cin>>numbers[i];
    }
    for(int idx=i ; idx>0 ; idx--){
        cout<<numbers[idx - 1];
    }
    return 0;
}