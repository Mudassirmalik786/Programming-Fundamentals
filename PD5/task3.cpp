#include<iostream>
using namespace std;
float taxCalculator(char vehicletypeCode , float priceofVehicle);
main(){
int priceofVehicle;
char vehicletypeCode;
cout<<"Enter price of vehicle";
cin>>priceofVehicle;
cout<<"Enter vehicle type code";
cin>>vehicletypeCode;
float taxAmount = taxCalculator(vehicletypeCode,priceofVehicle);
float finalPrice = priceofVehicle + taxAmount;
cout<<"The final price on a vehicle of type"<<vehicletypeCode<<"after adding the tax is $"<<finalPrice<<" with "<<vehicletypeCode<<"replaced by the vehicle type and $ "<<priceofVehicle<<" with the final price";
}
float taxCalculator(char vehicletypeCode , float priceofVehicle){
 float taxAmount;   
     if(vehicletypeCode=='M'){
         taxAmount = (priceofVehicle * 6)/ 100;
     }
     if(vehicletypeCode=='E'){
         taxAmount = (priceofVehicle * 8) / 100;
     }
         if(vehicletypeCode=='S'){
        taxAmount = (priceofVehicle * 10) / 100;
     }
              if(vehicletypeCode=='V'){
        taxAmount = (priceofVehicle * 12) / 100;
     }
              if(vehicletypeCode=='T'){
        taxAmount = (priceofVehicle * 15) / 100;
     }
     return taxAmount;
}