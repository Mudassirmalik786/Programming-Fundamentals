#include<iostream>
using namespace std;
void nestedForExample(int rows);
main(){
    int rows;
    cout<<"Enter desired number of rows : ";
    cin>>rows;
    nestedForExample(rows);
}
void nestedForExample(int rows){
    for(int i = 1;i<=rows;i++){
        for(int j = rows;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}