#include<iostream>
using namespace std;
main()
{
float vegetableCoinsperkg;
cout << "Enter Vegetable coins per kg ";
cin >> vegetableCoinsperkg;
float fruitCoinsperkg;
cout << " Enter fruit price per kg ";
cin >> fruitCoinsperkg;
int kgofvegetable;
cout << " Total kgs of vegetable : ";
cin >> kgofvegetable;
int kgoffruit;
cout << " Total kgs of fruit : ";
cin >> kgoffruit;
float vegetablecost;
vegetablecost = vegetableCoinsperkg * kgofvegetable;
float fruitcost;
fruitcost = fruitCoinsperkg * kgoffruit;
float totalcost= vegetablecost + fruitcost;
cout << "Total will be : " << totalcost << endl;
float result = totalcost * 1.94 ;
cout << "Converted value is : " << result;
}