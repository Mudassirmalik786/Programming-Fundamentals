#include<iostream>
#include<cmath>
using namespace std;
float calculateHeight(float distance , float degree);
main(){
float distance;
float degree;
float height;
cout <<"Enter degree : ";
cin >>degree;
cout <<"Enter distance";
cin >> distance;
height = calculateHeight(distance , degree);
cout<<"Height of the tree is : "<<height <<endl;
}

float calculateHeight(float distance , float degree){
float radian = 57.2958;
float radians = degree / radian;
float result = tan(radians);
float height = result * distance;
return height;
}
