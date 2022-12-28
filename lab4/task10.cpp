#include<iostream>
using namespace std;
void calculateBill(string day , int amount);
main(){
while(true){
string day;
cout<<"Enter the current day: ";
cin>>day;
int amount;
cout<<"Enter amount: ";
cin>>amount;
calculateBill(day , amount);
   }
}
void calculateBill(string day , int amount)
  {
    int total,discount;
   if(day == "sunday")
    {
      cout<<"the day is: "<<day<<endl;
      total = (amount * 10) / 100;
      discount = amount - total;
      cout<<"The payable amount is: "<<discount<< endl;
    }
   if(day!="sunday")
    { 
      total = (amount * 5) / 100;
      discount = amount - total; 
      cout<<"Your payable amount is: "<< discount<<endl;
    }
  } 