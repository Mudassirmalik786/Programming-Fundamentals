#include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void playerMove(int x, int y);
void gotoxy(int x, int y) 
{
   COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
   
int main(){
system("cls");
printMaze();
int x = 2;
int y = 2;
while(true){
playerMove(x,y);
if(y<6){
   y=y+1;
   }
if(y==6){
 gotoxy(x,y-1);
  cout<<" ";
  y=2;
  }
 }
}
void printMaze(){
cout<<"*********************************"<<endl;
cout<<"*                               *"<<endl;
cout<<"*                               *"<<endl;
cout<<"*                               *"<<endl;
cout<<"*                               *"<<endl;
cout<<"*                               *"<<endl;
cout<<"*                               *"<<endl;
cout<<"*********************************"<<endl;
}
void playerMove(int x, int y)
{
      gotoxy(x,y-1);
      cout<<" ";
      gotoxy(x,y);
      cout<<"P";
      Sleep(200);
}