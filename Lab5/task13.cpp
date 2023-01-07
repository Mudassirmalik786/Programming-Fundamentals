#include<iostream>
using namespace std;
main(){
int number;
cout<<"Enter any number : ";
cin>>number;
int p1 = number/10;
int p2 = number%10;
if(p1==0){
cout<<" ";
}
if(p1==1){
cout<<"one" <<endl;
}
if(p1==2){
cout<<"twenty" <<endl;
}
if(p1==3){
cout<<"thirty" <<endl;
}
if(p1==4){
cout<<"fourty" <<endl;
}
if(p1==5){
cout<<"fifty" <<endl;
}
if(p1==6){
cout<<"sixty" <<endl;
}
if(p1==7){
cout<<"seventy" <<endl;
}
if(p1==8){
cout<<"eighty" <<endl;
}
if(p1==9){
cout<<"ninety" <<endl;
}
if(p2==0){
    cout<<"zero"<<endl;
}
if(p2==1){
    cout<<"one"<<endl;
}
if(p2==2){
    cout<<"two"<<endl;
}
if(p2==3){
    cout<<"three"<<endl;
}
if(p2==4){
    cout<<"four"<<endl;
}
if(p2==5){
    cout<<"five"<<endl;
}
if(p2==6){
    cout<<"six"<<endl;
}
if(p2==7){
    cout<<"seven"<<endl;
}
if(p2==8){
    cout<<"eight"<<endl;
}
if(p2==9){
    cout<<"nine"<<endl;
}
}