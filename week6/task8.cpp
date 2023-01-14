#include<iostream>
using namespace std;
float totalincome(string screening , int rows , int columns);
main(){
    string screening;
    cout<<"Enter type of screening : ";
    cin>>screening;
    int rows , columns;
    cout<<"Enter number of rows : ";
    cin>>rows;
    cout<<"Enter number of columns : ";
    cin>>columns;
    float result = totalincome(screening , rows , columns);
    cout<<"Result is : "<<result;
}
float totalincome(string screening , int rows , int columns){
    float result;
    if(screening == "primiere"){
        result = 12.00 * rows * columns;
    }
        if(screening == "normal"){
        result = 7.50 * rows * columns;
    }
        if(screening == "discount"){
        result = 5.00 * rows * columns;
    }
    return result ;
}


