#include<iostream>
using namespace std;
char checkresult(int marks);
main(){
    int marks;
    cout<<"Enter marks";
    cin>>marks;
char result = checkresult(marks);
cout<<"Result "<<result;
}
char checkresult(int marks){
    char result;
    if(marks>=85){
        result = 'A';
    }
    else if(marks >= 81 &&  marks<=85){
        result= 'B';
    }
    else if(marks >= 71 && marks<=80){
        result = 'C';
    }
    else if(marks >= 61 && marks<=70){
        result = 'D';
    }
    else if(marks >= 50 && marks<= 60){
        result = 'E';
    }
    else if(marks<=50){
        result = 'F';
    }
    else 
    {
        result = 0;
    }
    return result;
}