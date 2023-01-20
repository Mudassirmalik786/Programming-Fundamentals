#include<iostream>
#include<windows.h>
using namespace std;
main(){
    float inheritedMoney;
    cout<<"Enter inherited Money : ";
    cin>>inheritedMoney;
    int yearstolive;
    cout<<"Enter years he want to live : ";
    cin>>yearstolive;
    int years = 18;
    for(int currentYear = 1800 ; currentYear<=yearstolive ; currentYear++){
        if(currentYear%2==0){
            inheritedMoney -= 12000;
        }
        else
        {
           inheritedMoney -= (12000 + 50 * years); 
        }
    }
    int remaining = inheritedMoney - 12000;
    if(inheritedMoney>yearstolive)
    {
        cout<<"yes! He will live a carefree life and will have "<<inheritedMoney-yearstolive<<"$ left";
    }
    else
    {
        cout<<"No! He will need "<<yearstolive - inheritedMoney<<"$ to survive ";
    }
}