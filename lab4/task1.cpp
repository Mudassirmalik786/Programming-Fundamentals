#include<iostream>
using namespace std;
void displayDetails(int marks,int aggregate,string name,char section);
main(){
string name;
cout<< "Enter your name :";
cin >> name;
int marks;
cout<< "Enter Marks: ";
cin >> marks;
int aggregate;
cout<<"enter your aggregate ";
cin>>aggregate;
char section;
cout<< "enter your section";
cin>>section;
displayDetails(marks ,aggregate ,name , section);
}
void displayDetails(int marks,int aggregate,string name,char section){
cout<< "Your marks are : "<<marks<<endl;
cout<< "Your name is: " << name << endl;
cout<< "your aggregate is:"<<aggregate << endl;
cout<< "your section is: "<<section <<endl;
}
