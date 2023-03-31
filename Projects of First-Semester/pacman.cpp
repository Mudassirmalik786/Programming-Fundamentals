#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

void printmaze();
void gotoxy(int x, int y);
void erase(int x, int y);
void printpacman(int x, int y);
char getCharAtxy(short int x, short int y);
void showGhost(int x, int y);
void gameover();
void clear(int x, int y, char previous);
void foodpills();
void generateColors(int k);
void header();
int x = 0;
main()
{
  int gx = 2;
  int gy = 1;
  int gx2 = 56;
  int gy2 = 22;
  string direction1 = "up";
  string direction = "right";
  char previousChar = ' ';
  char previousChar2 = ' ';
  int pacmanX = 4;
  int pacmanY = 4;
  bool gamerunning = true;

  system("cls");
  header();
  printmaze();
  showGhost(gx, gy);
  showGhost(gx2, gy2);
  printpacman(pacmanX, pacmanY);

  while (gamerunning)
  {
    if (GetAsyncKeyState(VK_LEFT))
    {
      char nextLocation = getCharAtxy(pacmanX - 1, pacmanY);
      if (nextLocation == ' ' || nextLocation == '.')
      {
        erase(pacmanX, pacmanY);
        pacmanX = pacmanX - 1;
        printpacman(pacmanX, pacmanY);
      }
      if (nextLocation == '.')
      {
        foodpills();
      }
      if (nextLocation == 'G')
      {
        gamerunning = false;
        gameover();
      }
    }

    if (GetAsyncKeyState(VK_RIGHT))
    {
      char nextLocation = getCharAtxy(pacmanX + 1, pacmanY);
      if (nextLocation == ' ' || nextLocation == '.')
      {
        erase(pacmanX, pacmanY);
        pacmanX = pacmanX + 1;

        printpacman(pacmanX, pacmanY);
      }
      if (nextLocation == '.')
      {
        foodpills();
      }
      if (nextLocation == 'G')
      {
        gamerunning = false;
        gameover();
      }
    }

    if (GetAsyncKeyState(VK_UP))
    {
      char nextLocation = getCharAtxy(pacmanX, pacmanY - 1);
      if (nextLocation == ' ' || nextLocation == '.')
      {
        erase(pacmanX, pacmanY);
        pacmanY = pacmanY - 1;
        printpacman(pacmanX, pacmanY);
      }
      if (nextLocation == '.')
      {
        foodpills();
      }
      if (nextLocation == 'G')
      {
        gamerunning = false;
        gameover();
      }
    }

    if (GetAsyncKeyState(VK_DOWN))
    {
      char nextLocation = getCharAtxy(pacmanX, pacmanY + 1);
      if (nextLocation == ' ' || nextLocation == '.')
      {
        erase(pacmanX, pacmanY);
        pacmanY = pacmanY + 1;

        printpacman(pacmanX, pacmanY);
      }
      if (nextLocation == '.')
      {
        foodpills();
      }
      if (nextLocation == 'G')
      {
        gamerunning = false;
        gameover();
      }
    }

    if (GetAsyncKeyState(VK_ESCAPE))
    {
      gamerunning = false;
    }

    Sleep(200);

    //                                                 move ghost functionality

    if (direction == "right")
    {
      char nextLocation = getCharAtxy(gx + 1, gy);
      if (nextLocation == '|')
      {
        direction = "left";
      }
      else if (nextLocation == ' ' || nextLocation == '.')
      {
        clear(gx, gy, previousChar);
        gx = gx + 1;
        previousChar = nextLocation;
        showGhost(gx, gy);
      }
    }

    if (direction == "left")
    {
      char nextLocation = getCharAtxy(gx - 1, gy);
      if (nextLocation == '|')
      {
        direction = "right";
      }
      else if (nextLocation == ' ' || nextLocation == '.')
      {
        clear(gx, gy, previousChar);
        gx = gx - 1;
        previousChar = nextLocation;
        showGhost(gx, gy);
      }
    }

    //                                                 move ghost verticall functionality

    if (direction1 == "up")
    {
      char nextLocation = getCharAtxy(gx2, gy2 - 1);
      if (nextLocation == '*')
      {
        direction1 = "down";
      }
      else if (nextLocation == ' ' || nextLocation == '.')
      {
        clear(gx2, gy2, previousChar2);
        gy2 = gy2 - 1;
        previousChar2 = nextLocation;
        showGhost(gx2, gy2);
      }
    }

    if (direction1 == "down")
    {
      char nextLocation = getCharAtxy(gx2, gy2 + 1);
      if (nextLocation == '*')
      {
        direction1 = "up";
      }
      else if (nextLocation == ' ' || nextLocation == '.')
      {
        clear(gx2, gy2, previousChar2);
        gy2 = gy2 + 1;
        previousChar2 = nextLocation;
        showGhost(gx2, gy2);
      }
    }
  }
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
  CHAR_INFO ci;
  COORD xy = {0, 0};
  SMALL_RECT rect = {x, y, x, y};
  COORD coordBufSize;
  coordBufSize.X = 1;
  coordBufSize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void erase(int x, int y)
{
  gotoxy(x, y);
  cout << " ";
}

void printpacman(int x, int y)
{
  gotoxy(x, y);
  generateColors(10);
  cout << "P";
}

void header()
{
  generateColors(9);
  cout << endl;
  cout << endl;
  cout << endl;
  cout << "...            @@@@                                            ||||  ||                                      ...               " << endl;
  cout << "...            @  @   @@@                                    ||  ||  ||                                   ...                  " << endl;
  cout << "   ...         @ @    @ @                                  ||    ||  ||                                ...                     " << endl;
  cout << "      ...      @      @@@   @@@@                          ||     ||  ||                             ...                        " << endl;
  cout << "         ...   @      @ @   @  @                            ||   ||  ||                          ...                           " << endl;
  cout << "            ...       @ @   @      @@   @@                    || ||  ||                       ...                              " << endl;
  cout << "               ...          @  @   @ @ @ @                       ||  ||                   ...                                  " << endl;
  cout << "                  ...       @@@@   @  @  @   @@@                                      ...                                      " << endl;
  cout << "                     ...           @     @   @ @                                   ...                                         " << endl;
  cout << "                        ...        @     @   @@@   @@    @                     ...                                             " << endl;
  cout << "                            ...              @ @   @ @   @                 ...                                                 " << endl;
  cout << "                               ...           @ @   @  @  @              ...                                                    " << endl;
  cout << "                                  ...              @   @ @           ...                                                       " << endl;
  cout << "                                     ...           @    @@        ...                                                          " << endl;
  cout << "                                        ...        @    @@     ...                                                             " << endl;
  cout << "                                                  .........                                                                    " << endl;
  cout << "    Press any key to continue...";
  getch();
  system("cls");
}

void printmaze()
{
  generateColors(5);
  cout << "**********************************************************************   " << endl;
  cout << "||.. .....................................................   .....  ||   " << endl;
  cout << "||.. %%%%%%%%%%%%%%%%        ...     %%%%%%%%%%%%%%  |%|..   %%%%   ||   " << endl;
  cout << "||..         |%|   |%|    |%|...     |%|        |%|  |%|..    |%|   ||   " << endl;
  cout << "||..         |%|   |%|    |%|...     |%|        |%|  |%|..    |%|   ||   " << endl;
  cout << "||..         %%%%%%%% . . |%|...     %%%%%%%%%%%%%%     ..   %%%%.  ||   " << endl;
  cout << "||..         |%|      . . |%|...    ...............     ..       .  ||   " << endl;
  cout << "||..         %%%%%%%%%. . |%|...    %%%%%%%%%%%%%   |%| ..   %%%%.  ||   " << endl;
  cout << "||..               |%|.             |%|......       |%| ..    |%|.  ||   " << endl;
  cout << "||..     ..........|%|.             |%|......|%|    |%| ..    |%|.  ||   " << endl;
  cout << "||..|%|  |%|%%%|%|.|%|. |%|            ......|%|        ..|%| |%|.  ||   " << endl;
  cout << "||..|%|  |%|   |%|..    %%%%%%%%%%%%%  ......|%|         .|%|.      ||   " << endl;
  cout << "||..|%|  |%|   |%|..            ...|%|    %%%%%%        . |%|.      ||   " << endl;
  cout << "||..|%|            .            ...|%|              |%| ..|%|.      ||   " << endl;
  cout << "||..|%|  %%%%%%%%%%%%%%         ...|%|%%%%%%%%%%    |%| ..|%|%%%%%  ||   " << endl;
  cout << "||................................................  |%| ..........  ||   " << endl;
  cout << "||................................................         .......  ||   " << endl;
  cout << "||..|%|  |%|   |%|..    %%%%%%%%%%%%%   ......|%|   |%| ..|%|.      ||   " << endl;
  cout << "||..|%|  |%|   |%|..           ...|%|      %%%%%%   |%| ..|%|.      ||   " << endl;
  cout << "||..|%|            .           ...|%|               |%| ..|%|.      ||   " << endl;
  cout << "||..|%|  %%%%%%%%%%%%%         ...|%|%%%%%%%%%%     |%| ..|%|%%%%%  ||   " << endl;
  cout << "||...............................................   |%| ..........  ||   " << endl;
  cout << "||..................................................       .......  ||   " << endl;
  cout << "**********************************************************************   " << endl;
  cout << "                       Food Pills = 0                                    " << endl;
}
void clear(int x, int y, char previous)
{
  gotoxy(x, y);
  cout << previous;
}

void showGhost(int x, int y)
{
  gotoxy(x, y);
  generateColors(6);
  cout << "G";
}

void foodpills()
{

  gotoxy(36, 24);
  generateColors(4);
  x = x + 1;
  cout << x;
}

void gameover()
{
  gotoxy(36, 26);
  generateColors(2);
  cout << "Game Over!!!";
}

void generateColors(int k)
{
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, k);
}