#include<iostream>
using namespace std;
void maximum(int number1 , int number2);
void minimum(int number1 , int number2);
void isEqual(int number1 , int number2);
main(){
while(true)
  {
int number1,number2;
cout<<"enter number 1:";
cin>>number1;
cout<<"Enter number2:";
cin>>number2;
int choice;
cout<<"Enter Choice(1,2,3):";
cin>>choice;
  if(choice==1){
  maximum(number1,number2);
    }
  if(choice==2){
minimum(number1,number2);
    }  
  if(choice==3){
isEqual(number1,number2);
    }
  }
}
void maximum(int number1 , int number2)
{
   if(number1>number2)
   {
   cout<<"1st number is greater"<<endl;
   }
   if(number1<number2)
   {
   cout<<"2nd number is greater"<<endl;
   }
   if(number1==number2)
   {
   cout<<"Numbers are equal"<<endl;
   }
}
void minimum(int number1 , int number2)
{ 
   if(number1<number2)
   {
   cout<<"1st number is smaller"<<endl;
   }
   if(number1>number2)
   {
   cout<<"2nd number is smaller"<<endl;
   }
   if(number1==number2)
   {
   cout<<"Numbers are equal"<<endl;
   }
}
void isEqual(int number1, int number2)
 {
 if(number1==number2)
   {
   cout<<"Numbers are equal"<<endl;
   }
 if(number1!=number2)
   {
   cout<<"Numbers are not equal"<<endl;
   }
 }