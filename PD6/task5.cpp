#include<iostream>
using namespace std;
main(){
    string fruit, day;
    cout<<"Enter fruit : ";
    cin>>fruit;
    cout<<"Enter day : ";
    cin>>day;
    float price;
    float quantity;
    cout<<"Enter quantity";
    cin>>quantity;
    if(day != "sunday" && day != "saturday"){
        if(fruit == "banana"){
            price = 2.50 * quantity;
        }
        if(fruit == "apple"){
            price = 1.20 * quantity;
        }
        if(fruit == "orange")
            price = 0.85 * quantity;
        if(fruit == "grapefruit"){
            price = 1.25 * quantity;
        }
        if(fruit == "kiwi")
            price = 2.70 * quantity;
        if(fruit == "pineapple")
            price = 5.50 * quantity;
        if(fruit == "grapes")
            price = 3.85 * quantity;
    }
if(day=="sunday" || day=="saturday"){
        if(fruit == "banana"){
            price = 2.70 * quantity;
        }
        if(fruit == "apple"){
            price = 1.25 * quantity;
        }
        if(fruit == "orange")
            price = 0.90 * quantity;
        if(fruit == "grapefruit"){
            price = 1.60 * quantity;
        }
        if(fruit == "kiwi")
            price = 3.00 * quantity;
        if(fruit == "pineapple")
            price = 5.60 * quantity;
        if(fruit == "grapes")
            price = 4.20 * quantity ;
}
cout<<"the price is : "<<price;
}
