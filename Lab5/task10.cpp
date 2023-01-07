#include<iostream>
#include<windows.h>
using namespace std;
main(){
int hours;
cout<<"Enter hours(0 to 23): ";
cin>>hours;
int minutes;
cout<<"Enter minutes(0 to 59) : ";
cin>>minutes;
int time;
if(hours<=23){
time = minutes + 15;
cout<<hours << " " << ":" << time <<" ";
}

}
