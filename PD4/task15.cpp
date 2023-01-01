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
int x = 3;
int y = 3;
while(true)
  {
   playerMove(x,y);
   if(x<20,y<6)
   {
      x = x + 1;
      y = y + 1;
   }
  if(x==20,y==6)
   {
     gotoxy(x-1,y-1);
     cout<<" ";
     x = 3 , y=3;
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
      gotoxy(x-1,y-1);
      cout<<" ";
      gotoxy(x,y);
      cout<<"P";
      Sleep(200);
}