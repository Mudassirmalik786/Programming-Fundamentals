#include<iostream>
using namespace std;
void isEqual(string name1, string name2);
main(){
string name1,name2;
cout<<"Enter 1st name : ";
cin>> name1;
cout<<"Enter 2nd name : ";
cin>>name2;
isEqual(name1,name2);
}
void isEqual(string name1 , string name2)
{
   if(name1==name2)
    {
    cout<<"False";
    }
   if(name1!=name2)
    {
    cout<<"True";
    }
}