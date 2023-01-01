#include<iostream>
using namespace std;
int main(){
float numofRoses,numofWhiteroses,numofTulips;
cout<<"Enter number of roses : ";
cin>>numofRoses;
cout<<"Enter number of white roses: ";
cin>>numofWhiteroses;
cout<<"Enter number of tulip flower : ";
cin>>numofTulips;
float priceofroses  , priceofwhiteroses , priceoftulips;
priceofroses = numofRoses * 2.00;
priceofwhiteroses = numofWhiteroses * 4.10;
priceoftulips = numofTulips * 2.50;
float totalprice = priceofroses + priceofwhiteroses + priceoftulips;
cout<<"The total price of flowers : "<<totalprice<<endl;
if(totalprice >=200){
float discount,price;
discount = (totalprice * 20) / 100;
price = totalprice - discount;
cout<<"The price after discount of the flowers is : "<<price<<endl;
}
}
