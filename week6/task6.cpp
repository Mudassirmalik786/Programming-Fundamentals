#include<iostream>
using namespace std;
string checkTitle(int age , char gender);
main(){
    int age ;
    cout<<"Enter age : ";
    cin>>age;
    char gender;
    cout<<"Enter gender : ";
    cin>>gender;
    string result = checkTitle(age , gender);
    cout<<" Result is :"<<result;
}
string checkTitle(int age , char gender){
    string result;
    if(age >= 16 && gender == 'm'){
        result = "Mr. - a man ";
    }
        if(age < 16 && gender == 'm'){
        result = "Master - a boy ";
    }
        if(age >= 16 && gender == 'f'){
        result = "Ms. -a woman ";
    }
        if(age < 16 && gender == 'f'){
        result = "Miss - a girl ";
    }
    return result;
}