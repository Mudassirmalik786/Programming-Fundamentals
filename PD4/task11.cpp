#include<iostream>
using namespace std;
void isTicket(string name , float ticketPrice);
int main(){
string name;
cout<<"Enter country's name " ;
cin>>name;
float ticketPrice;
cout<<"Enter Ticket Price  : ";
cin>>ticketPrice;
isTicket(name,ticketPrice);
}
void isTicket(string name , float ticketPrice)
{
    float discount, totalPrice;
    if(name == "pakistan"){
     discount = (ticketPrice * 5) / 100;
     totalPrice = ticketPrice - discount;
     cout<<"The total ticket price : "<< totalPrice << endl;
     }
    if(name=="ireland"){
     discount = (ticketPrice * 10) / 100;
     totalPrice = ticketPrice - discount;
     cout<<"The total ticket price : "<< totalPrice << endl;
     }
    if(name=="india"){
     discount = (ticketPrice * 20) / 100;
     totalPrice = ticketPrice - discount;
     cout<<"The total ticket price : "<< totalPrice << endl;
     } 
    if(name=="england"){
     discount = (ticketPrice * 30) / 100;
     totalPrice = ticketPrice - discount;
     cout<<"The total ticket price : "<< totalPrice << endl;
     }
    if(name=="canada"){
     discount = (ticketPrice * 45) / 100;
     totalPrice = ticketPrice - discount;
     cout<<"The total ticket price : "<< totalPrice << endl;
     }
}