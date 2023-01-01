#include<iostream>
#include<windows.h>
using namespace std;
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
gotoxy(100,0);
gotoxy(100,100);
cout<<"                                                 "<<endl;
cout<<"*     * *   * **   **   ***  ***  *****  ****    "<<endl; 
cout<<"* * * * *   * * * *  * *    *       *    *   *   "<<endl;
cout<<"*  *  * *   * * * *  *  *    *      *    *  *    "<<endl;
cout<<"*     * *   * * * ****   *    *     *    * *     "<<endl;
cout<<"*     * *   * * * *  *    *    *    *    *  *    "<<endl;
cout<<"*     *  ***  **  *  * ***  ***   *****  *   *   "<<endl;
}