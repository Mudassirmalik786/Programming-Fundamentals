#include<iostream>
using namespace std;
int array[7] = {1,2,3,1,2,3,1};
bool isRepatingCycle(int number){
    int count;
    for(int i =0 ; i<7 ; i++)
    {
        if(array[i] == number){
            count++;
        }
    }
    if(count>7){
        return true;
    }
}
main()
{
    int number;
    cout<<"Enter number: ";
    cin>>number;
    bool found = isRepatingCycle(number);
    cout<<found;
}