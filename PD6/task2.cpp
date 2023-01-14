#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter name";
    cin>>name;
    int english , maths , chemistry , socialscience , biology;
    cout<<"Enter english marks";
    cin>>english;
    cout<<"Enter maths marks";
    cin>>maths;
    cout<<"Enter chemistry marks";
    cin>>chemistry;
    cout<<"Enter social science marks";
    cin>>socialscience;
    cout<<"Enter biology marks";
    cin>>biology;
    cout<<"Your name is "<<name<<endl;
    int total = english + maths + chemistry + socialscience + biology;
    cout<<"Total marks are : "<<total<<endl;
    float percentage = (total * 100) / 500;
    cout<< "Your percentage is : "<<percentage<<endl;
    if(percentage > 90)
        cout<<"A+ ";
    if(percentage >= 80 && percentage <=90)
        cout<<"A";
    if(percentage >= 70 && percentage < 80 )
        cout<<"B+";
    if(percentage >= 60 && percentage < 70 )
        cout<<"B";
    if(percentage >= 50 && percentage < 60 )
        cout<<"C";
    if(percentage >= 40 && percentage < 50 )
        cout<<"D";
    if(percentage < 40 )
        cout<<"F";
}