#include<iostream>
using namespace std;
main()
{
int marks1 , marks2 , marks3 , totalmarks , totalstrength , average;
cout<< "Enter marks of 1st student : ";
cin >> marks1;
cout << "Enter marks of 2nd student : ";
cin >> marks2;
cout << "Enter marks of 3rd student : ";
cin >> marks3;
cout << "Enter Total marks : ";
cin >> totalmarks;
cout << "Enter the strength of class : ";
cin >> totalstrength;
average = (marks1 + marks2 + marks3) / 3 ;
cout << "Average becomes : " << average ;

}