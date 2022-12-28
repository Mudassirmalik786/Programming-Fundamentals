#include<iostream>
using namespace std;
main()
{
string name;
cout<< " Enter name : ";
cin >> name;
float matric;
cout << "Enter Matric marks : " ;
cin >> matric;
float intermediate;
cout << "Enter Intermediate marks : ";
cin >> intermediate;
float ecat;
cout << " Enter ecat marks : ";
cin >> ecat;
matric = (matric * 10) / 1100;
intermediate = (intermediate * 40) / 1100;
ecat = (ecat * 50) / 400;
float aggregate;
aggregate = matric + intermediate + ecat;
cout << "Your aggregate is : " << aggregate; 
}