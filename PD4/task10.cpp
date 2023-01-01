#include<iostream>
using namespace std;
void change(string name);
main(){
string name;
cout<<"Enter condition";
cin>>name;
change(name);
}
void change(string name)
{
    if(name=="true")
    {
    cout<<"False";
    }
   if(name=="false")
  {
   cout<<"True";
   }
}