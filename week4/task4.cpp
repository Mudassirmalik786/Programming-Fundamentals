#include<iostream>
using namespace std;
main()
{
string name;
cout <<  "Enter your name" ;
cin >> name;
int sub1;
cout << "Enter subject 1 marks : " ;
cin >> sub1;
int sub2;
cout << "Enter subject 2 marks : ";
cin >> sub2;
int sub3;
cout << "Enter subject 3 marks : ";
cin >> sub3;
int sub4;
cout << "Enter subject 4 marks : ";
cin >> sub4;
int sub5;
cout << "Enter subject 5 marks : ";
cin>>sub5;
int totalmarks;
totalmarks = sub1 + sub2 + sub3 + sub4 + sub5;
float percentage;
percentage = (totalmarks * 100) / 500;
cout << "The percentage of subjects is : " << percentage ; 
}