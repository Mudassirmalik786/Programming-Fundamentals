#include<iostream>
using namespace std;
void printshape(int x);
main(){
    int x;
    cout<<"Enter desired rows : ";
    cin>>x;
printshape(x);
}
void printshape(int x){
	int p = x + (x -2);
    for(int i = 1 ; i<=x ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<"*";
        }
        for(int k = p;k>=1 ; k--)
        {
            cout<<" ";
        }
        for(int k = 1 ; k<=i ; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        p = p-2;
    }
}