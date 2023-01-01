#include<iostream>
using namespace std;
int main(){
int holidays;
while(true){
cout<<"Enter holidays : ";
cin>>holidays;
int workingdays = 365 - holidays;
int gamestime = workingdays * 63 + holidays * 127;
int difference = 30000 - gamestime;
float time = difference / 60;
float minutes = difference / 225;
cout<< "Hours : " <<time<<endl;
cout<< "Minutes : " <<minutes<<endl;
    if(time>0)
  {
   cout<<"Tom sleeps well"<<endl;
  }
    if(time<0)
  {
   cout<<"Tom will run away "<<endl;
  }
 }

}