#include<iostream>
using namespace std;
void printName(string name);
main(){
while(true) {
string name;
cout<<"Enter Name : ";
cin>>name; 
printName(name);
   }
}
void printName(string name){
   while(true){
   if(name == "Irzam"){
   cout<< "Irzam " << endl;
     }
    }
   if(name!="Irzam"){
   cout<<name<<endl;
     }
}