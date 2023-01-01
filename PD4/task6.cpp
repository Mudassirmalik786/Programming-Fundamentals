#include<iostream>
#include<windows.h>
using namespace std;
void printA();
void printW();
void printAA();
void printI();
void printS();
void gotoxy(int x , int y)
{
   COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
int main(){
system("cls");
int x,y;
gotoxy(x,y);
gotoxy(0,2);
printA();
printW();
printAA();
printI();
printS();
}
void printA(){
gotoxy(0,20);
cout<<" *  "<<endl;
cout<<"*** "<<endl;
cout<<"* * "<<endl;
}
void printW(){
gotoxy(0,24);
cout<<"* *"<<endl;
cout<<"***"<<endl;
cout<<"* *"<<endl;
}
void printAA(){
gotoxy(0,28);
cout<<" *  "<<endl;
cout<<"*** "<<endl;
cout<<"* * "<<endl;
}
void printI(){
gotoxy(0,32);
cout<<"*"<<endl;
cout<<"*"<<endl;
cout<<"*"<<endl;
} 
void printS(){
gotoxy(0,36);
cout<<" **"<<endl;
cout<<"*  "<<endl;
cout<<" * "<<endl;
cout<<"  *"<<endl;
cout<<"** "<<endl;
}