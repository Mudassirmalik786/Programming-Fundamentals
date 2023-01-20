#include<iostream>
using namespace std;
main(){
    float numberofCargo;
    cout<<"Enter number of cargos : ";
    cin>>numberofCargo;
    int number;
    float count1 =0 ,count2 = 0 , count3 = 0;
    for(int i = 1;i<=numberofCargo ; i++){
        cout<<"Enter weight for "<<i<<" times : ";
        cin>>number;
        if(number <=3){
            count1 = count1 +number;
        }
        else if(number>3 && number<=11){
            count2 = count2 +number;
        }
        else if(number > 11){
            count3 = count3 + number;
        }
    }
    //average
    cout<<"minibus "<<count1<<endl;
    cout<<"TRUCK "<<count2<<endl;
    cout<<"traIN "<<count3<<endl;
    float minibus=count1 * 200;
    float truck=count2 * 175;
    float train=count3 * 120;
    float sum = count1 + count2 + count3;
    float total = (minibus + truck + train) / sum;
    cout<<total<<endl;
    cout << (count1 / sum) * 100 << "%" << endl;
    cout << (count2 / sum) * 100 << "%" << endl;
    cout << (count3 / sum) * 100 << "%" << endl; 
}