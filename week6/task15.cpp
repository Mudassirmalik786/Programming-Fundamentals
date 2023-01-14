#include<iostream>
using namespace std;
int main(){
    string year ;
    cout<<"year is leap or normal : ";
    cin>>year;
    int holidays;
    cout<<"Enter no. of holidays which are not sat and sun : ";
    cin>>holidays;
    int weekendsHome;
    cout<<"Enter weekends in which he goes home : ";
    cin>>weekendsHome;
    int sofiaWeekends = 48 - weekendsHome;
    double playSofia = 3.0 * sofiaWeekends / 4 + 3 * holidays / 3;
    double playTotal = playSofia + weekendsHome;
    if(year == "leap"){
        double playTotal1 = playTotal + 0.15;
        cout<<playTotal1; 
    }
    else if(year=="normal"){
        cout<<playTotal;
    }

}