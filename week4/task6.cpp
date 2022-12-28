#include<iostream>
using namespace std;
main()
{
int size;
cout << " Enter The size of Fertilizer " ;
cin >> size;
int cost; 
cout << "Enter cost of the bag " ;
cin >> cost;
int area;
cout << "Enter area covered by each bag in square feet : ";
cin >> area;
int costofFertilizerpp;
costofFertilizerpp = cost / size;
cout << "Cost of fertilizer per pound :" << costofFertilizerpp << endl;
int costofFertilizingareapsf;
costofFertilizingareapsf = cost / area;
cout << "Cost of Fertilizing the area per square feet :" << costofFertilizingareapsf;
}