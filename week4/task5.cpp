#include<iostream>
using namespace std;
main()
{
float weight;
cout<< "Enter Weight that you want to loose : ";
cin>> weight;
float calories = 4000;
float time = 1 * 24 * 15 ;
float result;
result = weight * (calories / time) ;
cout << "It will take days :" << result ;

}